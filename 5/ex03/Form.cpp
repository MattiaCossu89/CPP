#include "Form.hpp"

Form::Form(const str_t &name, int gradeSign, int gradeExec) : _name(name), _gradeExec(gradeExec), _gradeSign(gradeSign), _signed(false)
{
	if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form &copy) : _name(copy._name), _gradeExec(copy._gradeExec), _gradeSign(copy._gradeSign), _signed(copy._signed)
{

}

Form::~Form()
{

}

Form &Form::operator=(const Form &copy)
{
	_signed = copy._signed;
	return (*this);
}

const str_t	&Form::getName() const
{
	return (_name);
}

int			Form::getGradeSign() const
{
	return (_gradeSign);
}

int			Form::getGradeExec() const
{
	return (_gradeSign);
}

bool		Form::isSigned() const
{
	return (_signed);
}

void		Form::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > _gradeSign)
		throw Form::GradeTooLowException();
	_signed = true;
}

void		Form::checkBureaucratExec(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExec)
		throw GradeToExecTooLowException();
}


std::ostream &operator<<(std::ostream &os, const Form& form)
{
		os << YELLOW << form.getName() << NRM ", Form grade " GREEN << form.getGradeSign() << NRM " " BLUE << form.getGradeExec() << (form.isSigned() ? RED " is signed" NRM : GREEN " is open" NRM);
	return (os);
}

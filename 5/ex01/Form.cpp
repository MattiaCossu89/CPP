#include "Form.hpp"

Form::Form(const str &name, int gradeSign, int gradeExec) : _name(name), _gradeExec(gradeExec), _gradeSign(gradeSign), _signed(false)
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
	this->~Form();
	new (this) Form(copy);
	return (*this);
}

const str	&Form::getName() const
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

std::ostream &operator<<(std::ostream &os, const Form& form)
{
	os << YELLOW << form.getName() << NRM ", Form grade to sign(" GREEN << form.getGradeSign() << NRM ") to exec (" BLUE << form.getGradeExec() << ")" << (form.isSigned() ? RED " is signed" NRM : GREEN " is open" NRM);
	return (os);
}

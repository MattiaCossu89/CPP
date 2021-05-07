#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(0), _signBureau(0), _execBureau(0)
{

}

OfficeBlock::OfficeBlock(Intern &intern) : _intern(&intern), _signBureau(0), _execBureau(0)
{

}

void	OfficeBlock::setIntern(Intern &intern)
{
	_intern = &intern;
}

void	OfficeBlock::setSigner(Bureaucrat &bur)
{
	_signBureau = &bur;
}

void	OfficeBlock::setExecutor(Bureaucrat &bur)
{
	_execBureau = &bur;
}

void	OfficeBlock::doBureaucracy(const str_t &name, const str_t &target)
{
	if (!_intern)
		throw NoInternException();
	if (!_signBureau)
		throw NoSignBureaucracerException();
	if (!_execBureau)
		throw NoExecBureaucracerException();
	Form *form;

	form = _intern->makeForm(name, target);
	if (!form)
		throw InexistentFormException();
	_signBureau->signForm(*form);
	form->execute(*_execBureau);
}

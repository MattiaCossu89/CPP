#include "Logger.hpp"

typedef void (Logger::*fun)(const std::string &);

Logger::Logger(){}

Logger::Logger(const std::string &filename): _filename(filename){}

std::string	Logger::makeLogEntry(const std::string &message)
{
	time_t				t = time(0);
	tm					*t_ = localtime(&t);
	std::stringstream	ss;

	ss	<< "[" << t_->tm_year + 1900 << "/"
		<< ((t_->tm_mon < 10) ? "0" : "") << t_->tm_mon << "/"
		<< ((t_->tm_mday < 10) ? "0" : "") << t_->tm_mday << "_"
		<< ((t_->tm_hour < 10) ? "0" : "") << t_->tm_hour << ":"
		<< ((t_->tm_min < 10) ? "0" : "") << t_->tm_min << ":"
		<< ((t_->tm_sec < 10) ? "0" : "") << t_->tm_sec << "] " << message;
	return (ss.str());
}

void		Logger::logToConsole(const std::string &message)
{
	std::cout << makeLogEntry(message) << std::endl;
}

void		Logger::logToFile(const std::string &message)
{
	std::ofstream file;
	file.open(_filename.c_str(), std::ios::app);
	if (!file.is_open())
	{
		std::cerr << "Cannot open file " << _filename << std::endl;
		return ;
	}
	file << makeLogEntry(message) << std::endl;
	file.close();
}

void		Logger::log(std::string const & dest, std::string const & message)
{
	std::string type[2] = {"file File" + _filename, "stdout StandardOutput"};
	fun met[2] = {&Logger::logToFile, &Logger::logToConsole};
	for (int i = 0; i < 2; i++)
		if (type[i].find(dest) != std::string::npos)
			(this->*met[i])(message);
}


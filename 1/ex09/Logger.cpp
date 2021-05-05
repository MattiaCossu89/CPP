#include "Logger.hpp"

typedef void (Logger::*fun)(const std::string &);

Logger::Logger(const std::string &filename) : _filename(filename) {}

std::string	Logger::makeLogEntry(const std::string &message)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::stringstream ss;
	ss	<< "[" << 1900 + ltm->tm_year
		<< "/" << (ltm->tm_mon < 10 ? "0" : "") << ltm->tm_mon
		<< "/" << (ltm->tm_mday < 10 ? "0" : "") << ltm->tm_mday
		<< "_" << (ltm->tm_hour < 10 ? "0" : "") << ltm->tm_hour
		<< ":" << (ltm->tm_min < 10 ? "0" : "") << ltm->tm_min
		<< ":" << (ltm->tm_sec < 10 ? "0" : "") << ltm->tm_sec << "]" << message;
	return (ss.str());
}

void		Logger::logToConsole(const std::string &message)
{
	std::cout << makeLogEntry(message) << std::endl;
}

void		Logger::logToFile(const std::string &message)
{
	std::ofstream	file;

	file.open(_filename.c_str());
	if (!file.is_open())
	{
		std::cout << "\033[31mInvalid File\033[0m" << std::endl;
		return ;
	}
	file << Logger::makeLogEntry(message) << std::endl;
	file.close();
}

void		Logger::log(std::string const & dest, std::string const & message)
{
	fun f_p[2] = { &Logger::logToConsole, &Logger::logToFile };
	std::string names[2] = { "console stdout Stdout Console", "file File" };

	for (int i = 0; i < 2; i++)
		if (names[i].find(dest) != std::string::npos)
			(this->*f_p[i])(message);
}

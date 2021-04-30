#pragma once
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <sstream>
class Logger
{
	private:
		std::string _filename;
		static std::string	makeLogEntry(const std::string &message);
		void				logToConsole(const std::string &message);
		void				logToFile(const std::string &message);
		Logger();
	public:
		Logger(const std::string &filename);
		void log(std::string const & dest, std::string const & message);
};

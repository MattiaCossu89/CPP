/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:31:12 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:31:13 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

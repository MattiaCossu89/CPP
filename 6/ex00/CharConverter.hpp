/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharConverter.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:42:30 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:42:31 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARCONVERTER_HPP
#define CHARCONVERTER_HPP

#include "Converter.hpp"

class CharConverter : public Converter
{
	private:
		CharConverter();
	public:
		CharConverter(const std::string &num);
		char	getChar() const;
		void	displayConversion() const;
		virtual ~CharConverter();
};

#endif

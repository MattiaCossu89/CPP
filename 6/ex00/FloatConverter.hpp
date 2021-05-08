/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FloatConverter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:42:53 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:42:55 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOATCONVERTER_HPP
#define FLOATCONVERTER_HPP

#include "Converter.hpp"

class FloatConverter : public Converter
{
	private:
		FloatConverter();
	public:
		FloatConverter(const std::string &num);
		float	getNum() const;
		void	displayConversion() const;
		virtual ~FloatConverter();

};

#endif

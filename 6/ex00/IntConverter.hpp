/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IntConverter.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:43:06 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 15:43:07 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTCONVERTER_HPP
#define INTCONVERTER_HPP

#include "Converter.hpp"

class IntConverter : public Converter
{
	private:
		IntConverter();
	public:
		IntConverter(const std::string &num);
		int	getNum() const;
		void	displayConversion() const;
		virtual ~IntConverter();

};

#endif

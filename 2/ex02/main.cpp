/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:32:48 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/08 11:33:00 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
int main( void ) {
	Fixed a;
	Fixed const b( Fixed(5.05f) * Fixed( 2 ) );
	std::cout << "a:		" << a << std::endl;
	std::cout << "++a:		" << ++a << std::endl;
	std::cout << "a:		" << a << std::endl;
	std::cout << "a++:		" << a++ << std::endl;
	std::cout << "a:		" << a << std::endl;
	std::cout << "b:		" << b << std::endl;
	std::cout << "max(a, b):	" << Fixed::max( a, b ) << std::endl;
	std::cout << "min(a, b):	" << Fixed::min( a, b ) << std::endl;
	return 0;
}

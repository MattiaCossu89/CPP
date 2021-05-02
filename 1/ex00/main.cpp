/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:28:04 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/02 14:28:05 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int main(void)
{
	ponyOnStack();
	std::cout << "pony on stack finish" << std::endl;
	ponyOnHeap();
	std::cout << "pony on heap finish" << std::endl;
}

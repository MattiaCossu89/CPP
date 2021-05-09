/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 15:43:20 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/09 15:33:53 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	void *s = serialize();
	Data *d = deserialize(s);
	(void)s;
	std::cout << "Deserialized:" << std::endl;
	std::cout << *(d->s1) << " -- " << (d->i) << " -- " << *(d->s2) << std::endl;
	delete d->s1;
	delete d->s2;
	delete d;
	delete static_cast<char *>(s);
}

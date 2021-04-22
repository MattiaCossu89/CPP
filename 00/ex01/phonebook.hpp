/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:51:55 by mcossu            #+#    #+#             */
/*   Updated: 2021/04/21 18:55:48 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

# define MAX_CONTACTS 8
# define MAX_LEN 9

enum Position{ LEFT, CENTRE, RIGHT };

class PhoneBook
{
	private:
		int		last_index;
		Contact	p_book[MAX_CONTACTS];

		void	addContact(void);
		void	printAll(void);
		void	printContact(int index);
		void	printContactInLine(int index);
	public:
		PhoneBook(void);
		void	addRequest(void);
		void	searchRequest(void);
};

#endif

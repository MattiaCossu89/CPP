/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 18:56:31 by mcossu            #+#    #+#             */
/*   Updated: 2021/04/21 19:01:02 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	login;
		std::string	p_address;
		std::string	e_address;
		std::string	phone;
		std::string	birthday;
		std::string	favorite_meal;
		std::string	underwear_color;
		std::string	darkest_secret;
	public:
		Contact(void);
		void		setFirstName(std::string first_name);
		void		setLastName(std::string last_name);
		void		setNickName(std::string nickname);
		void		setLogin(std::string login);
		void		setPostAddress(std::string post_address);
		void		setEmailAddress(std::string email_address);
		void		setPhone(std::string phone);
		void		setBirthday(std::string birthday);
		void		setFavoriteMeal(std::string favorite_meal);
		void		setUnderwearColor(std::string underwear_color);
		void		setDarkestSecret(std::string darkest_secret);
		void		setFirstNameSTDIN(void);
		void		setLastNameSTDIN(void);
		void		setNickNameSTDIN(void);
		void		setLoginSTDIN(void);
		void		setPostAddressSTDIN(void);
		void		setEmailAddressSTDIN(void);
		void		setPhoneSTDIN(void);
		void		setBirthdaySTDIN(void);
		void		setFavoriteMealSTDIN(void);
		void		setUnderwearColorSTDIN(void);
		void		setDarkestSecretSTDIN(void);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getLogin(void);
		std::string	getPostAddress(void);
		std::string	getEmailAddress(void);
		std::string	getPhone(void);
		std::string	getBirthday(void);
		std::string	getFavoriteMeal(void);
		std::string	getUnderwearColor(void);
		std::string	getDarkestSecret(void);
		void		getFirstNameSTDOUT(void);
		void		getLastNameSTDOUT(void);
		void		getNickNameSTDOUT(void);
		void		getLoginSTDOUT(void);
		void		getPostAddressSTDOUT(void);
		void		getEmailAddressSTDOUT(void);
		void		getPhoneSTDOUT(void);
		void		getBirthdaySTDOUT(void);
		void		getFavoriteMealSTDOUT(void);
		void		getUnderwearColorSTDOUT(void);
		void		getDarkestSecretSTDOUT(void);
};

#endif

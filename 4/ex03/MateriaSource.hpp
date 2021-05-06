/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:06:04 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:06:05 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#include <iostream>
#include <string>

#define str std::string

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*materia[4];
		str			materia_name[4];
		int			learned;
		void		free_materia();
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		virtual ~MateriaSource();
		MateriaSource &operator=(const MateriaSource &copy);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(str const & type);
};

#endif

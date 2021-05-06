/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:03:43 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:03:44 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINERHPP
#define DEEPCOREMINERHPP

#include "IMiningLaser.hpp"

#include <iostream>

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner();
		DeepCoreMiner(const DeepCoreMiner &);
		virtual ~DeepCoreMiner();
		DeepCoreMiner &operator=(const DeepCoreMiner&);
		virtual void mine(IAsteroid*);
};

#endif

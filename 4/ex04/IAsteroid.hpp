/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:03:46 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:27:50 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROIDHPP
#define IASTEROIDHPP

#define str std::string

#include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual str beMined(DeepCoreMiner *) const = 0;
		virtual str beMined(StripMiner *) const = 0;
		virtual str getName() const = 0;
};

#endif

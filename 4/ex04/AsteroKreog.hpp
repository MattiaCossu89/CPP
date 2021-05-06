/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:03:38 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:03:39 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AsteroKreogHPP
#define AsteroKreogHPP

#include "IAsteroid.hpp"

#include <string>

#define str std::string

class AsteroKreog : public IAsteroid
{
	public:
		AsteroKreog();
		AsteroKreog(const AsteroKreog &);
		virtual ~AsteroKreog();
		AsteroKreog &operator=(const AsteroKreog &);
		virtual str beMined(DeepCoreMiner *) const;
		virtual str beMined(StripMiner *) const;
		virtual str getName() const;
};

#endif

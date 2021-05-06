/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcossu <mcossu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 15:03:54 by mcossu            #+#    #+#             */
/*   Updated: 2021/05/06 15:32:25 by mcossu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KOALASTEROIDHPP
#define KOALASTEROIDHPP

#include "IAsteroid.hpp"
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

#include <string>

#define str std::string

class KoalaSteroid : public IAsteroid
{
	public:
		KoalaSteroid();
		KoalaSteroid(const KoalaSteroid &);
		virtual ~KoalaSteroid();
		KoalaSteroid &operator=(const KoalaSteroid&);
		virtual str beMined(DeepCoreMiner *) const;
		virtual str beMined(StripMiner *) const;
		virtual str getName() const;
};

#endif

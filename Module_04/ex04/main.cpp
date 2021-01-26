/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 21:35:58 by obelouch          #+#    #+#             */
/*   Updated: 2021/01/26 21:51:39 by obelouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "KoalaSteroid.hpp"
#include "AsteroKreog.hpp"
#include "MiningBarge.hpp"
#include <iostream>

int				main(void)
{
	MiningBarge		ship;
	DeepCoreMiner	dc_miner;
	StripMiner		st_miner;
	KoalaSteroid	comet;
	AsteroKreog		asteroid;

    std::cout << "Equip the Ship with Deep Core & Strip Miners" << std::endl;
	ship.equip(&dc_miner);
    ship.equip(&st_miner);

	ship.mine(&comet);
	ship.mine(&asteroid);

	return (0);
}
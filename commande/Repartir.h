/*
 * Repartir.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_REPARTIR_H_
#define COMMANDE_REPARTIR_H_

#include "CommandRobot.h"

class Repartir: public CommandRobot {
public:
	Repartir();
	virtual ~Repartir();

	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r);
	void desexecute();
};

#endif /* COMMANDE_REPARTIR_H_ */

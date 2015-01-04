/*
 * FigerC.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_FIGERC_H_
#define COMMANDE_FIGERC_H_

#include "CommandRobot.h"
#include "../etat/EtatRobot.h"

class FigerC: public CommandRobot {
private:
	EtatRobot * eAnsienne;
public:
	FigerC();
	virtual ~FigerC();


	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r);
	void desexecute();
};

#endif /* COMMANDE_FIGERC_H_ */

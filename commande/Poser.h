/*
 * Poser.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_POSER_H_
#define COMMANDE_POSER_H_

#include "CommandRobot.h"

class Poser: public CommandRobot {
public:
	Poser();
	virtual ~Poser();

	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r);
	void desexecute();
};

#endif /* COMMANDE_POSER_H_ */

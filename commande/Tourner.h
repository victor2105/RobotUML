/*
 * Tourner.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_TOURNER_H_
#define COMMANDE_TOURNER_H_

#include "CommandRobot.h"

class Tourner: public CommandRobot {
private:
	string dAnsienne;
	string dNouvelle;
public:
	Tourner();
	Tourner(string direction):dNouvelle(direction){}
	virtual ~Tourner();

	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r);
	void desexecute();
};

#endif /* COMMANDE_TOURNER_H_ */

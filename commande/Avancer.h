/*
 * Avancer.h
 *
 *  Created on: 3 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_AVANCER_H_
#define COMMANDE_AVANCER_H_

#include "CommandRobot.h"
#include "../objets/Robot.h"
#include "../objets/Position.h"

class Avancer: public CommandRobot {
private:
	Position pAncienne;
	Position pNouvelle;
public:
	Avancer(){}
	Avancer(Position p): pNouvelle(p){}
	virtual ~Avancer();

	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r);
	void desexecute();
};

#endif /* COMMANDE_AVANCER_H_ */

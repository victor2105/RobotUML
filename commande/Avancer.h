/*
 * Avancer.h
 *
 *  Created on: 3 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_AVANCER_H_
#define COMMANDE_AVANCER_H_

#include "Commande.h"
#include "../objets/Position.h"
#include "../objets/Robot.h"

class Avancer: public Commande {
private:
	Position pAncienne;
	Position pNouvelle;
	Robot robot;
public:
	Avancer(Position p): pNouvelle(p){}
	virtual ~Avancer();

	Commande * constructeurVirtuel(Invocateur & i);
	void execute(Robot & r);
	void desexecute();
};

#endif /* COMMANDE_AVANCER_H_ */

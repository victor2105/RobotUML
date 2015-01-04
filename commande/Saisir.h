/*
 * Saisir.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_SAISIR_H_
#define COMMANDE_SAISIR_H_

#include "CommandRobot.h"
#include "../objets/Object.h"

class Saisir: public CommandRobot {
private:
	int poid;
public:
	Saisir();
	Saisir(int poid):poid(poid){}
	virtual ~Saisir();

	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r);
	void desexecute();
};

#endif /* COMMANDE_SAISIR_H_ */

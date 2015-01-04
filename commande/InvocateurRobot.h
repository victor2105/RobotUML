/*
 * InvocateurRobot.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_INVOCATEURROBOT_H_
#define COMMANDE_INVOCATEURROBOT_H_
#include "Invocateur.h"
#include "Commande.h"

class InvocateurRobot : Invocateur {
public:
	InvocateurRobot();
	virtual ~InvocateurRobot();
	Commande * next(){
		string name = getString();
		Commande * cmd = Commande::nouvelleCommande(name, this);
	}
};

#endif /* COMMANDE_INVOCATEURROBOT_H_ */

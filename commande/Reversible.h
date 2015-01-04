/*
 * Reversible.h
 *
 *  Created on: 8 dec. 2014
 *      Author: GuillaumeUnice
 */

#ifndef REVERSIBLE_H_
#define REVERSIBLE_H_

#include "../commande/Invocateur.h"
#include "../commande/Commande.h"
#include "../objets/Robot.h"

using namespace std;


class Reversible: public Commande {
 
  public:
 	void execute(Robot * r);
	Commande * constructeurVirtuel(Invocateur * i);
};

#endif /* REVERSIBLE_H_ */

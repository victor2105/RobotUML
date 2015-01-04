/*
 * Commande.h
 *
 *  Created on: 8 dec. 2014
 *      Author: GuillaumeUnice
 */

#ifndef COMMANDE_H_
#define COMMANDE_H_

#include <vector>
#include <map>

#include "../commande/Invocateur.h"
#include "../objets/Robot.h"

using namespace std;


class Commande {
  public:
  	static int index;

	static Commande * nouvelleCommande(string d, Invocateur * i);
	virtual void execute(Robot * r) = 0;
	void reversible() {}
	void desexecute() {}
	virtual	Commande * constructeurVirtuel(Invocateur * i) = 0;
	

  	// Exception
	class CommandeNotExistException {};

};

static vector<Commande*> vecCmd;
static map<string, Commande*> mapCmd;
#endif /* COMMANDE_H_ */

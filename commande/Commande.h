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
private:
public:
	static map<string, Commande*> mapCmd;
	static vector<Commande*> vecCmd;
	static int index;

  	// Exception
	class UndoNotPossibleException {};
	class RedoNotPossibleException {};
	class CommandeNotFound {};
	
	virtual ~Commande();

	static Commande * nouvelleCommande(string str, Invocateur * i);

	static void undo();
	static bool redo();

	virtual Commande * constructeurVirtuel(Invocateur * i) = 0;

	virtual void execute(Robot * r) = 0;
	virtual void desexecute() = 0;
	virtual bool reversible() = 0;

};

static vector<Commande*> vecCmd;
static map<string, Commande*> mapCmd;
#endif /* COMMANDE_H_ */

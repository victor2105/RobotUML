/*
 * Commande.h
 *
 *  Created on: 8 dec. 2014
 *      Author: guillaume
 */

#ifndef COMMANDE_H_
#define COMMANDE_H_

#include <vector>
#include <map>
#include "../objets/Robot.h"


using namespace std;

class Commande {
private:
	static map<string, Commande*> mapCmd;
	static vector<Commande*> vecCmd;
	static int index;
public:

  	// Exception
	static class UndoNotPossibleException {};
	static class RedoNotPossibleException {};
	static class CommandeNotFound {};
	
	virtual ~Commande();

	void initCommands();
	static Commande * nouvelleCommande(string str, Invocateur * i);

	static void undo();
	static bool redo();

	virtual Commande * constructeurVirtuel(Invocateur * i) = 0;

	virtual void execute(Robot & r) = 0;
	virtual void desexecute() = 0;
	//virtual bool reversible() = 0;
};

#endif /* COMMANDE_H_ */

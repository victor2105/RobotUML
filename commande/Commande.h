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


using namespace std;

class Commande {
  private:
	static map<string, Commande*> mapCmd;
	static vector<Commande*> vecCmd;
	static int index;
  public:
  
  	// Exception
	class UndoNotPossibleException {};
	class RedoNotPossibleException {};
	
	//static Commande nouvelleCommande(string str);
	static void undo();
	static bool redo();
	/*
	void constructeurVirtuel();
	
	virtual void execute(Robot& r) = 0;*/
	virtual void desexecute() = 0;
	//virtual bool reversible() = 0;
};

#endif /* COMMANDE_H_ */

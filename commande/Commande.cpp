/*
 * Commande.cpp
 *
 *  Created on: 9 dec. 2014
 *      Author: GuillaumeUnice
 */

#include "Commande.h"

using namespace std;

int Commande::index = 0;


/*void Commande::undo() {
	--Commande::index;
	/*
	if(vecCmd[index] == NULL) throw UndoNotPossibleException();
	vecCmd[index]->desexecute();
}*/

Commande * Commande::nouvelleCommande(string key, Invocateur * i) {
	  std::map<string, Commande*>::const_iterator it = mapCmd.find(key);
	//si l'itérateur ne vaut pas map.end(), cela signifie que que la clé à été trouvée
	if(it==mapCmd.end())
	{
		throw CommandeNotExistException();	
	}

	vecCmd.push_back(((*it).second)->constructeurVirtuel(i));
    return vecCmd.back();
      
}


/*
void Commande::redo() {
	
	if(Commande::vecCmd.size <= Commande::index) throw RedoNotPossibleException();
	Commande::vecCmd[++Commande::index]->reversible();
}*/

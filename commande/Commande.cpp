/*
 * Commande.cpp
 *
 *  Created on: 9 dec. 2014
 *      Author: guillaume
 */

#include "Commande.h"


Commande::~Commande(){
	mapCmd.clear();
}

Commande * Commande::nouvelleCommande(string str, Invocateur * i){
	Commande * c = mapCmd[str]->constructeurVirtuel(i);
	if(c == 0){
		throw Commande::CommandeNotFound();
	}
	return c;
}

/*void Commande::undo() {
	--Commande::index;
	if(Commande::vecCmd[Commande::index] == NULL) throw UndoNotPossibleException();
	Commande::vecCmd[Commande::index]->desexecute();
}


void Commande::redo() {
	
	if(Commande::vecCmd.size <= Commande::index) throw RedoNotPossibleException();
	Commande::vecCmd[++Commande::index]->reversible();
}*/

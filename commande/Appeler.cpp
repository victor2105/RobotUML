/*
 * Appeler.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#include "Appeler.h"

Appeler::Appeler() {
	// TODO Auto-generated constructor stub

}

Appeler::~Appeler() {
	// TODO Auto-generated destructor stub
}

Commande * Appeler::constructeurVirtuel(Invocateur * i){
	string name = i->getString();
	return new Appeler(name);
}
void Appeler::execute(Robot * r){
	list<Commande*> cmds = MacroCommand::macroCommands[name];
	for (list< Commande * >::iterator it = cmds.begin(); it != cmds.end(); it++){
		Commande * c = *it;
		c->execute(r);
	}

}
void Appeler::desexecute(){

}



/*
 * Saisir.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#include "Saisir.h"

Saisir::Saisir() {
	// TODO Auto-generated constructor stub

}

Saisir::~Saisir() {
	// TODO Auto-generated destructor stub
}


Commande * Saisir::constructeurVirtuel(Invocateur * i){
	int p = i->getInt();
	return new Saisir(p);
}
void Saisir::execute(Robot * r){
	robot = r;
	robot->saisir(Object(poid));
}
void Saisir::desexecute(){
	robot->aObjet = false;
}

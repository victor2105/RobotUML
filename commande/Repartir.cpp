/*
 * Repartir.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#include "Repartir.h"

Repartir::Repartir() {
	// TODO Auto-generated constructor stub

}

Repartir::~Repartir() {
	// TODO Auto-generated destructor stub
}


Commande * Repartir::constructeurVirtuel(Invocateur * i){
	return new Repartir();
}
void Repartir::execute(Robot * r){
	robot = r;
	robot->repartir();
}
void Repartir::desexecute(){
	robot->figer()
}

/*
 * Poser.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#include "Poser.h"

Poser::Poser() {
	// TODO Auto-generated constructor stub

}

Poser::~Poser() {
	// TODO Auto-generated destructor stub
}


Commande * Poser::constructeurVirtuel(Invocateur * i){
	return new Poser();
}
void Poser::execute(Robot * r){
	robot = r;
	robot->poser();
}
void Poser::desexecute(){

}

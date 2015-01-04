/*
 * Peser.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#include "Peser.h"

Peser::Peser() {
	// TODO Auto-generated constructor stub

}

Peser::~Peser() {
	// TODO Auto-generated destructor stub
}


Commande * Peser::constructeurVirtuel(Invocateur * i){
	return new Peser();
}


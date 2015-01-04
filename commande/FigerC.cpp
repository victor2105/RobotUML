/*
 * FigerC.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#include "FigerC.h"

FigerC::FigerC() {
	// TODO Auto-generated constructor stub

}

FigerC::~FigerC() {
	// TODO Auto-generated destructor stub
}


Commande * FigerC::constructeurVirtuel(Invocateur * i){
	return new FigerC();
}
void FigerC::execute(Robot * r){
	robot = r;
	robot->figer();
}
void FigerC::desexecute(){
	robot->repartir();
}

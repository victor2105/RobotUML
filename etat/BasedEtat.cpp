/*
 * BasedEtat.cpp
 *
 *  Created on: 20 nov. 2014
 *      Author: victorhs
 */

#include "BasedEtat.h"

BasedEtat::BasedEtat() {
	// TODO Auto-generated constructor stub
	tabledEtat[AVIDE] = AVide::instance();
	tabledEtat[AVIDEFACEPLOT] = AVideFacePlot::instance();
	tabledEtat[ENCHARGE] = EnCharge::instance();
	tabledEtat[ENCHARGEFACEPLOT] = EnChargeFacePlot::instance();
	tabledEtat[FIGE] = Figer::instance();
}

BasedEtat::~BasedEtat() {
	// TODO Auto-generated destructor stub
}

EtatRobot * BasedEtat::getEtat(string name){
	return tabledEtat[name];
}

BasedEtat * BasedEtat::instance(){
	static BasedEtat inst;
	return &inst;
}

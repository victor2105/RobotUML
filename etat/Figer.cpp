/*
 * Figer.cpp
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#include "Figer.h"

Figer::Figer() {
	// TODO Auto-generated constructor stub

}

Figer::~Figer() {
	// TODO Auto-generated destructor stub
}

EtatRobot * Figer::instance(){
	static Figer inst;
	return &inst;
}

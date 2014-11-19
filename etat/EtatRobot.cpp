/*
 * EtatRobot.cpp
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#include "../etat/EtatRobot.h"

EtatRobot::EtatRobot() {
	// TODO Auto-generated constructor stub

}

EtatRobot::~EtatRobot() {
	// TODO Auto-generated destructor stub
}


EtatRobot * EtatRobot::instance(){
	static EtatRobot inst;
	return &inst;
}

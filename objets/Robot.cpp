/*
 * Robot.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: victorhs
 */

#include "Robot.h"

Robot::Robot() {
	// TODO Auto-generated constructor stub
	eR = AVide::instance();
}

Robot::~Robot() {
	// TODO Auto-generated destructor stub
}


void Robot::avancer(int x, int y){
	try{
		eR->avancer();
		position.setx(x);
		position.sety(y);
	}catch (EtatRobot::ActionNotAvaliableException e) {
		cout << "Mouvement non permis" << endl ;
	}
}

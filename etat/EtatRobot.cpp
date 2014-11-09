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

void EtatRobot::avancer() {
	throw ActionNotAvaliableException();
}
EtatRobot EtatRobot::tourner() {
	throw ActionNotAvaliableException();
}
EtatRobot EtatRobot::saisir(Object) {
	throw ActionNotAvaliableException();
}
int EtatRobot::peser() {
	throw ActionNotAvaliableException();
}
EtatRobot EtatRobot::rencontrerPlot(Plot) {
	throw ActionNotAvaliableException();
}

int EtatRobot::evaluerPlot() {
	throw ActionNotAvaliableException();
}

EtatRobot * EtatRobot::instance() {
	static EtatRobot inst;
	return &inst;
}



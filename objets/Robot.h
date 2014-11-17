/*
 * Robot.h
 *
 *  Created on: 17 nov. 2014
 *      Author: victorhs
 */


#ifndef OBJETS_ROBOT_H_
#define OBJETS_ROBOT_H_
#include <iostream>
#include "../etat/EtatRobot.h"
#include "../etat/AVide.h"
#include "Position.h"


using namespace std;

class Robot {
public:
	Robot();
	virtual ~Robot();
	EtatRobot * eR;
	EtatRobot * ancienER;
	string direction;

	Position position;


	void avancer(int x, int y);


};

#endif /* OBJETS_ROBOT_H_ */

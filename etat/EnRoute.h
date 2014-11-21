/*
 * EnRoute.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#ifndef ETAT_ENROUTE_H_
#define ETAT_ENROUTE_H_

#include "EtatRobot.h"
#include "Figer.h"
#include <iostream>
using namespace std;

class EnRoute: public EtatRobot {
public:
	EnRoute();
	virtual ~EnRoute();

	string figer();
};

#endif /* ETAT_ENROUTE_H_ */

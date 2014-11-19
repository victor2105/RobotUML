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

class EnRoute: public EtatRobot {
public:
	EnRoute();
	virtual ~EnRoute();

	EtatRobot * figer();
};

#endif /* ETAT_ENROUTE_H_ */

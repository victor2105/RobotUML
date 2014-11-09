/*
 * Figer.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#ifndef ETAT_FIGER_H_
#define ETAT_FIGER_H_

#include "EtatRobot.h"


class Figer: public EtatRobot {
public:
	Figer();
	virtual ~Figer();

	static EtatRobot * instance();
};


#endif /* ETAT_FIGER_H_ */

/*
 * EnCharge.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#ifndef ETAT_ENCHARGE_H_
#define ETAT_ENCHARGE_H_

#include "EnRoute.h"

class EnCharge  : public EnRoute  {
public:
	EnCharge();
	virtual ~EnCharge();


	static EtatRobot * instance();

};

#endif /* ETAT_ENCHARGE_H_ */

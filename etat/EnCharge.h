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

	void		avancer()		 {}
	string		tourner()		 { cout << "rest au " << ENCHARGE << endl ; return ENCHARGE; }
	int			peser()			 { return 0; }
	string		rencontrerPlot() { cout << "aller au " << ENCHARGEFACEPLOT << endl ; return ENCHARGEFACEPLOT; }

	static EtatRobot * instance();

};

#endif /* ETAT_ENCHARGE_H_ */

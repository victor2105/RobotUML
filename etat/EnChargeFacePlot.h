/*
 * EnChargeFacePlot.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#ifndef ETAT_ENCHARGEFACEPLOT_H_
#define ETAT_ENCHARGEFACEPLOT_H_

#include "EnRoute.h"
#include <iostream>
using namespace std;

class EnChargeFacePlot: public EnRoute {
public:
	EnChargeFacePlot();
	virtual ~EnChargeFacePlot();

	int		peser()			{ return 0; }
	string  poser()			{  cout << "aller au " << AVIDEFACEPLOT << endl ; return AVIDEFACEPLOT; }
	string 	tourner()		{  cout << "aller au " << ENCHARGE << endl ; return ENCHARGE; }

	static EtatRobot * instance();

};

#endif /* ETAT_ENCHARGEFACEPLOT_H_ */

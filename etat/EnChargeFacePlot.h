/*
 * EnChargeFacePlot.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#ifndef ETAT_ENCHARGEFACEPLOT_H_
#define ETAT_ENCHARGEFACEPLOT_H_

#include "EnRoute.h"

class EnChargeFacePlot: public EnRoute {
public:
	EnChargeFacePlot();
	virtual ~EnChargeFacePlot();

	static EtatRobot * instance();

};

#endif /* ETAT_ENCHARGEFACEPLOT_H_ */

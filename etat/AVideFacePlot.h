/*
 * AVideFacePlot.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */


#ifndef AVIDEFACEPLOT_H_
#define AVIDEFACEPLOT_H_

#include "EnRoute.h"

class AVideFacePlot : public EnRoute {
public:
	AVideFacePlot();
	virtual ~AVideFacePlot();


	static EtatRobot * instance();

};

#endif /* AVIDEFACEPLOT_H_ */

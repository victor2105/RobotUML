/*
 * AVide.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */



#ifndef AVIDE_H_
#define AVIDE_H_


#include "EnRoute.h"

class AVide : public EnRoute {
public:
	AVide();
	virtual ~AVide();

	void avancer(){}
	string		tourner(){return AVIDE; }
	virtual string		rencontrerPlot(Plot){ return AVIDEFACEPLOT; }


	static EtatRobot * instance();

};

#endif /* AVIDE_H_ */

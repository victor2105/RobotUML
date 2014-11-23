/*
 * AVide.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */



#ifndef AVIDE_H_
#define AVIDE_H_


#include "EnRoute.h"
#include <iostream>
using namespace std;

class AVide : public EnRoute {
public:
	AVide();
	virtual ~AVide();

	void		avancer()				{}
	string		tourner()				{ cout << "rest au " << AVIDE << endl ; return AVIDE; }
	string		rencontrerPlot()		{ cout << "aller au " << AVIDEFACEPLOT << endl ; return AVIDEFACEPLOT; }

	static EtatRobot * instance();
};\

#endif /* AVIDE_H_ */

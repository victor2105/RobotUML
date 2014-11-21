/*
 * AVideFacePlot.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */


#ifndef AVIDEFACEPLOT_H_
#define AVIDEFACEPLOT_H_

#include "EnRoute.h"
#include <iostream>
using namespace std;

class AVideFacePlot : public EnRoute {
public:
	AVideFacePlot();
	virtual ~AVideFacePlot();

	int 		evaluerPlot()		{ return 0; }
	string		tourner()			{  cout << "aller au " << AVIDE << endl ; return AVIDE; }
	string		saisir()			{  cout << "aller au " << ENCHARGEFACEPLOT << endl ; return ENCHARGEFACEPLOT; }

	static EtatRobot * instance();

};

#endif /* AVIDEFACEPLOT_H_ */

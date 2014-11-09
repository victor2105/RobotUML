/*
 * EtatRobot.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#include "../objets/Object.h"
#include "../objets/Plot.h"

#ifndef ETATROBOT_H_
#define ETATROBOT_H_

class EtatRobot{
private:

public:
	EtatRobot();


	virtual ~EtatRobot();

	// Exception
	class ActionNotAvaliableException {};

	// Methods
	void avancer();
	EtatRobot tourner();
	EtatRobot saisir(Object);
	int peser();
	EtatRobot rencontrerPlot(Plot);
	int evaluerPlot();

	static EtatRobot * instance();

};

#endif /* ETATROBOT_H_ */

/*
 * Robot.h
 *
 *  Created on: 17 nov. 2014
 *      Author: victorhs
 */


#ifndef OBJETS_ROBOT_H_
#define OBJETS_ROBOT_H_
#include <iostream>
#include "../etat/BasedEtat.h"
#include "Position.h"
#include "Object.h"
#include "../afficheur/Representation.h"

#define BASE_ETAT BasedEtat::instance()

using namespace std;

class Robot : public Representation {
public:
	Robot();
	virtual ~Robot();

	EtatRobot * eR;
	EtatRobot * ancienER;

	bool aObjet;

	string direction;
	Position position;
	Object object;
	Plot plot;


	void		avancer(int x, int y);
	void		tourner(string direction);
	void		saisir(Object o);
	 int		peser();
	 int		rencontrerPlot(Plot p);
	 int		evaluerPlot();
	void		figer();
	void		repartir();
	EtatRobot * getEtat();
	void		poser();

};

#endif /* OBJETS_ROBOT_H_ */

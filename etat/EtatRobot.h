/*
 * EtatRobot.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */


#ifndef ETATROBOT_H_
#define ETATROBOT_H_


#include "../objets/Object.h"
#include "../objets/Plot.h"

class EtatRobot{
protected:

	EtatRobot();

public:

	virtual ~EtatRobot();

	// Exception
	class ActionNotAvaliableException {};

	// Methods
	virtual void avancer()			 		{throw ActionNotAvaliableException();}
	virtual EtatRobot * tourner() 			{throw ActionNotAvaliableException();}
	virtual EtatRobot * saisir(Object)		{throw ActionNotAvaliableException();}
	virtual int 		peser()				{throw ActionNotAvaliableException();}
	virtual EtatRobot * rencontrerPlot(Plot){throw ActionNotAvaliableException();}
	virtual int 		evaluerPlot()		{throw ActionNotAvaliableException();}
	virtual EtatRobot * figer()				{throw ActionNotAvaliableException();}
	virtual void		repartir() 			{throw ActionNotAvaliableException();}
	virtual EtatRobot * poser() 			{throw ActionNotAvaliableException();}


	static EtatRobot * instance(){
		static EtatRobot inst;
		return &inst;
	}

};

#endif /* ETATROBOT_H_ */

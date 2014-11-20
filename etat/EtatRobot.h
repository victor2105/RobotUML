/*
 * EtatRobot.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */


#ifndef ETATROBOT_H_
#define ETATROBOT_H_
#include <iostream>
using namespace std;

#include "../objets/Object.h"
#include "../objets/Plot.h"

static string AVIDE = "AVide";
static string AVIDEFACEPLOT = "AVideFacePlot";
static string ENCHARGEFACEPLOT = "enChargeFacePlot";
static string ENCHARGE = "enCharge";
static string FIGE = "Figer";

class EtatRobot{
protected:

	EtatRobot();

public:

	virtual ~EtatRobot();

	// Exception
	class ActionNotAvaliableException {};

	// Methods
	virtual void		avancer()			{throw ActionNotAvaliableException();}
	virtual string		tourner() 			{throw ActionNotAvaliableException();}
	virtual string		saisir()			{throw ActionNotAvaliableException();}
	virtual int 		peser()				{throw ActionNotAvaliableException();}
	virtual string		rencontrerPlot()	{throw ActionNotAvaliableException();}
	virtual int 		evaluerPlot()		{throw ActionNotAvaliableException();}
	virtual string		figer()				{throw ActionNotAvaliableException();}
	virtual void		repartir() 			{throw ActionNotAvaliableException();}
	virtual string		poser() 			{throw ActionNotAvaliableException();}


	static EtatRobot * instance();

};




#endif /* ETATROBOT_H_ */

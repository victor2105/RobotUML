/*
 * BasedEtat.h
 *
 *  Created on: 20 nov. 2014
 *      Author: victorhs
 */

#ifndef ETAT_BASEDETAT_H_
#define ETAT_BASEDETAT_H_

#include "EtatRobot.h"
#include "AVide.h"
#include "AVideFacePlot.h"
#include "EnCharge.h"
#include "EnChargeFacePlot.h"
#include "Figer.h"

#include <map>
using namespace std;

class BasedEtat {
private:
	map<string, EtatRobot *> tabledEtat;

public:
	BasedEtat();

	EtatRobot * getEtat(string name);

	static BasedEtat * instance();

	virtual ~BasedEtat();
};

#endif /* ETAT_BASEDETAT_H_ */

/*
 * Avancer.h
 *
 *  Created on: 3 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_AVANCER_H_
#define COMMANDE_AVANCER_H_

#include "Commande.h"

class Avancer: public Commande {
private:

public:
	Avancer();
	virtual ~Avancer();
	void execute(Robot & r){

	}
	void desexecute(){

	}
};

#endif /* COMMANDE_AVANCER_H_ */

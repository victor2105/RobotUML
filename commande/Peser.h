/*
 * Peser.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_PESER_H_
#define COMMANDE_PESER_H_

#include "CommandRobot.h"

class Peser: public CommandRobot {
public:
	Peser();
	virtual ~Peser();

	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r){
		cout << r->peser() << endl ;
	}
	void desexecute(){

	}
};

#endif /* COMMANDE_PESER_H_ */

/*
 * EvaluerPlot.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_EVALUERPLOT_H_
#define COMMANDE_EVALUERPLOT_H_

#include "CommandRobot.h"

class EvaluerPlot: public CommandRobot {
public:
	EvaluerPlot();
	virtual ~EvaluerPlot();

	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r){
		cout << r->evaluerPlot() << endl ;
	}
	void desexecute(){

	}
};

#endif /* COMMANDE_EVALUERPLOT_H_ */

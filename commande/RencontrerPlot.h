/*
 * RencontrerPlot.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_RENCONTRERPLOT_H_
#define COMMANDE_RENCONTRERPLOT_H_

#include "CommandRobot.h"
#include "../objets/Plot.h"

class RencontrerPlot: public CommandRobot {
private:
	int plot;
public:
	RencontrerPlot();
	RencontrerPlot(int p):plot(p){}
	virtual ~RencontrerPlot();


	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r);
	void desexecute();
};

#endif /* COMMANDE_RENCONTRERPLOT_H_ */

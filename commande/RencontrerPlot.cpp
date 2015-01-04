/*
 * RencontrerPlot.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#include "RencontrerPlot.h"

RencontrerPlot::RencontrerPlot() {
	// TODO Auto-generated constructor stub

}

RencontrerPlot::~RencontrerPlot() {
	// TODO Auto-generated destructor stub
}


Commande * RencontrerPlot::constructeurVirtuel(Invocateur * i){
	int p = i->getInt();
	return new RencontrerPlot(Plot(p));
}
void RencontrerPlot::execute(Robot * r){
	robot = r;
	robot->rencontrerPlot(plot);
}
void RencontrerPlot::desexecute(){

}

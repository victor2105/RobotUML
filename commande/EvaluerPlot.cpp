/*
 * EvaluerPlot.cpp
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#include "EvaluerPlot.h"

EvaluerPlot::EvaluerPlot() {
	// TODO Auto-generated constructor stub

}

EvaluerPlot::~EvaluerPlot() {
	// TODO Auto-generated destructor stub
}


Commande * EvaluerPlot::constructeurVirtuel(Invocateur * i){
	return new EvaluerPlot();
}


/*
 * BaseCommands.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_BASECOMMANDS_H_
#define COMMANDE_BASECOMMANDS_H_

#include "Commande.h"
#include "CommandRobot.h"
#include "Avancer.h"
#include "Tourner.h"
#include "RencontrerPlot.h"
#include "Saisir.h"
#include "EvaluerPlot.h"
#include "Peser.h"
#include "Poser.h"
#include "FigerC.h"
#include "Repartir.h"
#include "MacroCommand.h"
#include "Appeler.h"

class BaseCommands {
public:
	BaseCommands(){
		Commande::mapCmd["avancer"] = new Avancer();
		Commande::mapCmd["tourner"] = new Tourner();
		Commande::mapCmd["rencontrerPlot"] = new RencontrerPlot();
		Commande::mapCmd["saisir"] = new Saisir();
		Commande::mapCmd["peser"] = new Peser();
		Commande::mapCmd["poser"] = new Poser();
		Commande::mapCmd["figer"] = new FigerC();
		Commande::mapCmd["repartir"] = new Repartir();
		Commande::mapCmd["evaluerPlot"] = new EvaluerPlot();
		Commande::mapCmd["BeginMacro"] = new MacroCommand();
		Commande::mapCmd["Appeler"] = new Appeler();
	}
	virtual ~BaseCommands();
};

#endif /* COMMANDE_BASECOMMANDS_H_ */

/*
 * Appeler.h
 *
 *  Created on: 4 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_APPELER_H_
#define COMMANDE_APPELER_H_

#include "MacroCommand.h"

class Appeler : public MacroCommand {

public:
	string name;
	Appeler();
	Appeler(string name):name(name){}
	virtual ~Appeler();

	Commande * constructeurVirtuel(Invocateur * i);
	void execute(Robot * r);
	void desexecute();

};

#endif /* COMMANDE_APPELER_H_ */

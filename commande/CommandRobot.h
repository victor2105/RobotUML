/*
 * CommandRobot.h
 *
 *  Created on: 3 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_COMMANDROBOT_H_
#define COMMANDE_COMMANDROBOT_H_

#include "Commande.h"
#include "../objets/Robot.h"

class CommandRobot: public Commande {
protected:
	Robot * robot;
public:
	CommandRobot();
	virtual ~CommandRobot();
	void execute(Robot * r) {

	}
	void desexecute() {

	}

	Commande * constructeurVirtuel(Invocateur * i) {
		return NULL;
	}
};

#endif /* COMMANDE_COMMANDROBOT_H_ */

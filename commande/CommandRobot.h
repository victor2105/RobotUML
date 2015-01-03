/*
 * CommandRobot.h
 *
 *  Created on: 3 janv. 2015
 *      Author: victorhs
 */

#ifndef COMMANDE_COMMANDROBOT_H_
#define COMMANDE_COMMANDROBOT_H_

#include "Commande.h"

class CommandRobot: public Commande {
public:
	CommandRobot();
	virtual ~CommandRobot();
	void execute(Robot * r){

	}
	void desexecute(){

	}

	Commande * contructeurVirtuel(Invocateur * i){
		return 0;
	}
};

#endif /* COMMANDE_COMMANDROBOT_H_ */

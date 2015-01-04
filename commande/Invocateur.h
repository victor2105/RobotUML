/*
 * Invocateur.h
 *
 *  Created on: 8 dec. 2014
 *      Author: GuillaumeUnice
 */

#ifndef INVOCATEUR_H_
#define INVOCATEUR_H_

#include <iostream>
#include <string>
#include <fstream>

#include "../objets/Robot.h"

using namespace std;

class Invocateur {
  private:
	ifstream fdIn;
	Robot * r;
  public:
	Invocateur(string nomFic, Robot* r);
	void nextCommande();
	//Exception
	class OpenFileErrorException {};
};

#endif /* INVOCATEUR_H_ */

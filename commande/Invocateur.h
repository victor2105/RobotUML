/*
 * Invocateur.h
 *
 *  Created on: 8 dec. 2014
 *      Author: guillaume
 */

#ifndef INVOCATEUR_H_
#define INVOCATEUR_H_

#include "../objets/Robot.h"

using namespace std;

class Invocateur {
  private:
	
  public:
  string getString();
  Commande * getCommand();
};

#endif /* INVOCATEUR_H_ */

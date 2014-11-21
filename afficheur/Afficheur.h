/*
 * Represnetation.h
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#ifndef AFFICHEUR_H_
#define AFFICHEUR_H_

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

class Representation;

class Afficheur {

  public:
	virtual ~Afficheur(){};
	virtual void update(const Representation* observable) = 0;
	virtual void afficher() = 0;
};

#endif /* AFFICHEUR_H_ */

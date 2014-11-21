/*
 * Object.h
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#ifndef AFFICHEUR_A_H_
#define AFFICHEUR_A_H_
#include "../afficheur/Representation.h"
#include "../objets/Robot.h"
#include "../afficheur/Afficheur.h"

class Afficheur_A : public Afficheur{

  public:
	Robot robot;
	~Afficheur_A();
  	void update(const Representation* observable);
  	void afficher();
	
};

#endif /* AFFICHEUR_A_H_ */

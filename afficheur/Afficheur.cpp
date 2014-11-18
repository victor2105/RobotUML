/*
 * Representation.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#include "../afficheur/Representation.h"

using namespace std;

void Afficheur::update(const Representation* observable) const {
	//on affiche l'état de la variable
	cout << observable->afficher() << endl;
}

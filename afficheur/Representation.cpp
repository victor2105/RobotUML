/*
 * Afficheur.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#include "../afficheur/Representation.h"

using namespace std;

void Representation::attacher( Afficheur* obs) {
	//on ajoute l'observateur à notre liste 
    list.push_back(obs);

}
void Representation::detacher(Afficheur* obs) {
	//On cherche l'Afficheur concerné puis on le supprime
	iterator it= std::find(list.begin(),list.end(),obs);
    if(it != list.end())
       list.erase(it);
}

Representation::~Representation() {
	iterator itb=list.begin();
	const_iterator ite=list.end();

}

void Representation::notifier(void) {
	//on prévient chaque observateur de l'etat courant du robot
	iterator itb=list.begin();
	const_iterator ite=list.end();

	for(;itb!=ite;++itb)
	{
		   (*itb)->update(this);
	}
}


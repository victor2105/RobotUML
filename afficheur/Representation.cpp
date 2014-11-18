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

    //et on lui donne un nouvel objet observé.
   // obs->attacher(this);
}
void Representation::detacher(Afficheur* obs) {
	//même chose que dans Afficheur::detacher
	iterator it= std::find(list.begin(),list.end(),obs);
    if(it != list.end())
       list.erase(it);
}

Representation::~Representation() {
 	//même chose qu'avec Afficheur::~Afficheur
	iterator itb=list.begin();
	const_iterator ite=list.end();

/*	for(;itb!=ite;++itb)
	{
		   (*itb)->detacher(this);
	}*/
}

void Representation::notifier(void) {
	//on prévient chaque observateur que l'on change de valeur
	iterator itb=list.begin();
	const_iterator ite=list.end();

	for(;itb!=ite;++itb)
	{
		   (*itb)->update(this);
	}
}


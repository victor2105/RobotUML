/*
 * Afficheur.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#include "../afficheur/Afficheur.h"

void Afficheur::attacher( Representation* obs) {
	    //on ajoute l'observateur à notre liste 
    m_list.push_back(obs);

    //et on lui donne un nouvel objet observé.
    obs->attacher(this);
}
void Afficheur::detacher(Representation* obs) {
	//même chose que dans Representation::detacher
	iterator it= find(list.begin(),list.end(),obs);
    if(it != list.end())
       list.erase(it);
}

Info Afficheur::Statut(void) const =0 {

}

Afficheur::~Afficheur() {
 	//même chose qu'avec Representation::~Representation
	iterator itb=list.begin();
	const_iterator ite=list.end();

	for(;itb!=ite;++itb)
	{
		   (*itb)->detacher(this);
	}
}

void Afficheur::Notifier(void) {
	//on prévient chaque observateur que l'on change de valeur
	iterator itb=list.begin();
	const_iterator ite=list.end();

	for(;itb!=ite;++itb)
	{
		   (*itb)->update(this);
	}
}


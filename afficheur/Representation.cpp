/*
 * Representation.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#include "../afficheur/Representation.h"
#include "../afficheur/Afficheur.h"

using namespace std;

void Representation::update(const Afficheur* observable) const {
	//on affiche l'état de la variable
	cout << observable->Statut() << endl;
}
void Representation::attacher(Afficheur* obs) {
	listAff.push_back(obs);
}
void Representation::detacher(Afficheur* obs) {
	//on enlève l'objet observé.
	iterator it= find(listAff.begin(),listAff.end(),obs);
	if(it != listAff.end())
		listAff.erase(it);
}
 
Representation::~Representation()
{
       //pour chaque objet observé, 
        //on lui dit qu'on doit supprimer l'observateur courant
       const_iterator ite=listAff.end();
       
       for(iterator itb=listAff.begin();itb!=ite;++itb)
       {
               (*itb)->detacher(this);
       }
}

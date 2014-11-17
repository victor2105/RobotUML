/*
 * Representation.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#include "../afficheur/Representation.h"

using namespace std;

void Representation::update(const Afficheur* observable) const {
	//on affiche l'état de la variable
	cout<<Afficheur->Statut()<<endl;
}
void Representation::attacher(Afficheur* obs) {
	list.push_back(obs);
}
void Representation::detacher(Afficheur* obs) {
	//on enlève l'objet observé.
	iterator it= find(list.begin(),list.end(),obs);
	if(it != list.end())
		list.erase(it);
}
 
Representation::~Representation()
{
       //pour chaque objet observé, 
        //on lui dit qu'on doit supprimer l'observateur courant
       const_iterator ite=list.end();
       
       for(iterator itb=list.begin();itb!=ite;++itb)
       {
               (*itb)->detacher(this);
       }
}

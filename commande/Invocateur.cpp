/*
 * Invocateur.cpp
 *
 *  Created on: 9 dec. 2014
 *      Author: guillaume
 */

#include "Invocateur.h"


string Invocateur::getString(){
	string str;
	cin >> str;
	return str;
}

Commande * Invocateur::getCommand(){
	try{
		string name;
		cin >> name;
		return Commande::nouvelleCommande(name, this);
	}catch(Commande::CommandeNotFound &){
		return NULL;
	}
}


int getInt(){
	int i;
	cin >> i;
	return i;
}

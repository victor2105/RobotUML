/*
 * Invocateur.cpp
 *
 *  Created on: 9 dec. 2014
 *      Author: GuillaumeUnice
 */

#include "Invocateur.h"

Invocateur::Invocateur(string nomFic, Robot* r) {

	fdIn.open(nomFic.c_str(), ios::in);  // on ouvre le fichier en lecture
	this->r = r;
	
    if(!fdIn)  // si l'ouverture a echoué
    {       
    	throw OpenFileErrorException();    
    }	
}

void Invocateur::nextCommande() {

	string nC;
	this->fdIn >> nC;
	//Commande::nouvelleCommande(nC, this);
	
	
}


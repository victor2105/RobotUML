#include <iostream>
#include "objets/Robot.h"
#include "./afficheur/Afficheur.h"
#include "./afficheur/Representation.h"
#include "./afficheur/Afficheur_A.h"

using namespace std;

int main(){

	Afficheur_A aff;
	Afficheur_A aff2;
    //un faux bloc pour limiter la portée
	{
		Afficheur rep;
	 	aff2.attacher(&rep);
		aff.attacher(&rep);
		aff.change(31);
		aff2.change(20);
	      
		cout << "test" << endl; 
		aff.change(45);
	}
	return 0;
}

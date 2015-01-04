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

string Invocateur::getCommand(){

		string name;
		cin >> name;
		return name;
}


int getInt(){
	int i;
	cin >> i;
	return i;
}

/*
 * Position.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: victorhs
 */

#include "Position.h"

Position::Position() {
	// TODO Auto-generated constructor stub

}

Position::~Position() {
	// TODO Auto-generated destructor stub
}


void Position::setx(int x){
	this->x = x;
}
void Position::sety(int y){
	this->y = y;
}
int	Position::getx(){
	return x;
}
int	Position::gety(){
	return y;
}

/*
 * Robot.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: victorhs
 */

#include "Robot.h"

Robot::Robot() {
	// TODO Auto-generated constructor stub
	eR = AVide::instance();
}

Robot::~Robot() {
	// TODO Auto-generated destructor stub
}


void Robot::avancer(int x, int y){
	try{
		eR->avancer();
		position.setx(x);
		position.sety(y);
	}catch (EtatRobot::ActionNotAvaliableException e) {
		cout << "Mouvement non permis" << endl ;
	}
}

void Robot::tourner(string direction){

}

void Robot::saisir(Object o){

}

 int Robot::peser(){
	 return 0;
 }

 int Robot::rencontrerPlot(Plot p){
	return 0;
 }
 int Robot::evaluerPlot(){
	return 0;
 }
void Robot::figer(){

}
void Robot::repartir(){

}
EtatRobot * Robot::getEtat(){
	return 0;
}

void Robot::afficher(){

}

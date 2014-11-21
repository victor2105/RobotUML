/*
 * Robot.cpp
 *
 *  Created on: 17 nov. 2014
 *      Author: victorhs
 */

#include "Robot.h"

Robot::Robot() {
	// TODO Auto-generated constructor stub
	eR = BASE_ETAT->getEtat(AVIDE);
	ancienER = eR;
	position.setx(0);
	position.sety(0);
	aObjet = false;
}

Robot::~Robot() {
	// TODO Auto-generated destructor stub
}


void Robot::avancer(int x, int y){
	try{

		eR->avancer();

		position.setx(x);
		position.sety(y);

	}catch (EtatRobot::ActionNotAvaliableException &e) {
		cout << "Operation non permis" << endl ;
	}
}

void Robot::tourner(string direction){
	try{
		eR = BASE_ETAT->getEtat(eR->tourner());

		this->direction = direction;

	}catch (EtatRobot::ActionNotAvaliableException &e) {
		cout << "Operation non permis" << endl ;
	}
}

void Robot::saisir(Object o){
	try{
		eR = BASE_ETAT->getEtat(eR->saisir());
		object = o;
		aObjet = true;
	}catch (EtatRobot::ActionNotAvaliableException &e) {
		cout << "Operation non permis" << endl ;
	}
}

 int Robot::peser(){
	int poids = 0;
	try{
		eR->peser();
		poids = object.getPoids();
	}catch (EtatRobot::ActionNotAvaliableException & e) {
		cout << "Operation non permis" << endl ;
	}
	return poids;
 }

 int Robot::rencontrerPlot(Plot p){
	try{
		eR = BASE_ETAT->getEtat(eR->rencontrerPlot());
		plot = p;
	}catch (EtatRobot::ActionNotAvaliableException &e) {
		cout << "Operation non permis" << endl ;
	}
	return 0;
 }
 int Robot::evaluerPlot(){
	try{
		eR->evaluerPlot();
		return plot.getHauter();
	}catch (EtatRobot::ActionNotAvaliableException &e) {
		cout << "Operation non permis" << endl ;
	}
	return 0;
 }
void Robot::figer(){
	try{
		ancienER = eR;
		eR = BASE_ETAT->getEtat(eR->figer());
	}catch (EtatRobot::ActionNotAvaliableException &e) {
		cout << "Operation non permis" << endl ;
	}

}
void Robot::repartir(){
	try{
		eR->repartir();
		eR = ancienER;
	}catch (EtatRobot::ActionNotAvaliableException &e) {
		cout << "Operation non permis" << endl ;
	}
}
EtatRobot * Robot::getEtat(){
	return eR;
}


void Robot::poser(){
	try{
		eR = BASE_ETAT->getEtat(eR->poser());
		aObjet = false;
	}catch (EtatRobot::ActionNotAvaliableException& e) {
		cout << "Operation non permis" << endl ;
	}
}

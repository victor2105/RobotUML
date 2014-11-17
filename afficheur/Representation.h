/*
 * Represnetation.h
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#ifndef REPRESENTATION_H_
#define REPRESENTATION_H_

#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

class Afficheur;

class Representation {

  protected:
	list<Afficheur*> listAff;
	typedef std::list<Afficheur*>::iterator iterator; 
	typedef std::list<Afficheur*>::const_iterator const_iterator;
	virtual ~Representation();
	
  public:
	virtual void update(const Afficheur* observable) const ;
    void attacher(Afficheur* obs);
    void detacher(Afficheur* obs);
};

#endif /* REPRESENTATION_H_ */

/*
 * Afficheur.h
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
#include "../afficheur/Representation.h"
#include "../afficheur/Afficheur.h"

using namespace std;


class Representation {
  private:

	std::list<Afficheur*> list;
	typedef std::list<Afficheur*>::iterator iterator; 
	typedef std::list<Afficheur*>::const_iterator const_iterator;

 public:
    virtual ~Representation();
    void attacher( Afficheur* obs);
    void detacher(Afficheur* obs); 
    void notifier(void);
};

#endif /* REPRESENTATION_H_ */

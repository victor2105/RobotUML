/*
 * Afficheur.h
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#ifndef AFFICHEUR_H_
#define AFFICHEUR_H_

#include <iostream>
#include <list>
#include <iterator>

using namespace std;

class Afficheur {
  private:
	std::list<Representation*> list;
	typedef list<Representation*>::iterator iterator; 
	typedef list<Representation*>::const_iterator const_iterator;

 public:
    void attacher( Representation* obs);
    void detacher(Representation* obs);
 
    virtual Info Statut(void) const =0;
    virtual ~Afficheur();
 protected:
    void Notifier(void);
};

#endif /* AFFICHEUR_H_ */

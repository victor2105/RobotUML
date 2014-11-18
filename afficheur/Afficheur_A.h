/*
 * Object.h
 *
 *  Created on: 17 nov. 2014
 *      Author: GuillaumeUnice
 */

#ifndef AFFICHEUR_A_H_
#define AFFICHEUR_A_H_
#include "../afficheur/Representation.h"
class Afficheur_A : public Representation {
  private:
	int val;
  public:
	virtual int afficher(void) const;
	void change(int valeur);
};

#endif /* AFFICHEUR_A_H_ */

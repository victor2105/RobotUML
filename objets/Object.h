/*
 * Object.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#ifndef OBJECT_H_
#define OBJECT_H_

class Object {
public:
	Object(int p = 0):poids(p) {} ;
	virtual ~Object();
	int poids;

	int getPoids();

};

#endif /* OBJECT_H_ */

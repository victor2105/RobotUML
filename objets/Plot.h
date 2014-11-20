/*
 * Plot.h
 *
 *  Created on: 9 nov. 2014
 *      Author: victorhs
 */

#ifndef PLOT_H_
#define PLOT_H_

class Plot {
public:
	Plot(int h = 0):hauteur(h) {};
	virtual ~Plot();

	int hauteur;
	int getHauter();

};

#endif /* PLOT_H_ */

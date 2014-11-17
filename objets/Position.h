/*
 * Position.h
 *
 *  Created on: 17 nov. 2014
 *      Author: victorhs
 */

#ifndef OBJETS_POSITION_H_
#define OBJETS_POSITION_H_

class Position {
	int x, y;
public:
	Position();
	virtual ~Position();

	void	setx(int x);
	void	sety(int y);
	int		getx();
	int		gety();
};

#endif /* OBJETS_POSITION_H_ */

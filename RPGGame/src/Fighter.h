/*
 * Fighter.h
 *
 *  Created on: Sep 2, 2015
 *      Author: anson
 */

#ifndef FIGHTER_H_
#define FIGHTER_H_

#include "FighterInterface.h"

class Fighter: public FighterInterface {
public:
	Fighter();
	virtual ~Fighter();
	string getName() = 0;
	int getMaximumHP() = 0;
	int getCurrentHP() = 0;
	int getStrength() = 0;
	int getSpeed() = 0;
	int getMagic() = 0;
	int getDamage() = 0;
	void takeDamage(int damage) = 0;
	void reset() = 0;
	void regenerate() = 0;
	bool useAbility() = 0;
};

#endif /* FIGHTER_H_ */

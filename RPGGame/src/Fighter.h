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
	virtual string getName() = 0;
	virtual int getMaximumHP() = 0;
	virtual int getCurrentHP() = 0;
	virtual int getStrength() = 0;
	virtual int getSpeed() = 0;
	virtual int getMagic() = 0;
	virtual int getDamage() = 0;
	virtual void takeDamage(int damage) = 0;
	virtual void reset() = 0;
	virtual void regenerate() = 0;
	virtual bool useAbility() = 0;
};

#endif /* FIGHTER_H_ */

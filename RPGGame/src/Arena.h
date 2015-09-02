/*
 * Arena.h
 *
 *  Created on: Sep 2, 2015
 *      Author: anson
 */

#ifndef ARENA_H_
#define ARENA_H_

#include "ArenaInterface.h"
#include <map>

class Arena: public ArenaInterface {
public:
	Arena();
	virtual ~Arena();
	bool addFighter(string info);
	bool removeFighter(string info);
	FighterInterface* getFighter(string info);
	int getSize();
private:
	map<string, FighterInterface*> fighters;
};

#endif /* ARENA_H_ */

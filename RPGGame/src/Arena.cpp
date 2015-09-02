/*
 * Arena.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: anson
 */

#include "Arena.h"

Arena::Arena() {
	// TODO Auto-generated constructor stub

}

Arena::~Arena() {
	// TODO Auto-generated destructor stub
}

bool Arena::addFighter(string info) {
	return fighters.insert(pair<string,FighterInterface*>(info,NULL)).second;
}

bool Arena::removeFighter(string info) {
	return fighters.erase(info);
}

FighterInterface* Arena::getFighter(string info) {
	return fighters.at(info);
}

int Arena::getSize() {
	return fighters.size();
}

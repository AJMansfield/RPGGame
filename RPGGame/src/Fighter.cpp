/*
 * Fighter.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: anson
 */

#include "Fighter.h"

Fighter::Fighter() {
	// TODO Auto-generated constructor stub

}

Fighter::~Fighter() {
	// TODO Auto-generated destructor stub
}

string Fighter::getName(){
	return "None";
}
int Fighter::getMaximumHP(){
    return 0; //TODO Implement this.
}
int Fighter::getCurrentHP(){
    return 0; //TODO Implement this.
}
int Fighter::getStrength(){
    return 0; //TODO Implement this.
}
int Fighter::getSpeed(){
    return 0; //TODO Implement this.
}
int Fighter::getMagic(){
    return 0; //TODO Implement this.
}
int Fighter::getDamage(){
    return 0; //TODO Implement this.
}
void Fighter::takeDamage(int damage){
}
void Fighter::reset(){
}
void Fighter::regenerate(){
}
bool Fighter::useAbility(){
	return false; //TODO Implement this
}


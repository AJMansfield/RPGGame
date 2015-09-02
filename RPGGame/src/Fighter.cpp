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

virtual Fighter::~Fighter() {
	// TODO Auto-generated destructor stub
}

virtual string Fighter::getName(){
	return "None"; //TODO Implement this.
}
virtual int Fighter::getMaximumHP(){
    return 0; //TODO Implement this.
}
virtual int Fighter::getCurrentHP(){
    return 0; //TODO Implement this.
}
virtual int Fighter::getStrength(){
    return 0; //TODO Implement this.
}
virtual int Fighter::getSpeed(){
    return 0; //TODO Implement this.
}
virtual int Fighter::getMagic(){
    return 0; //TODO Implement this.
}
virtual int Fighter::getDamage(){
    return 0; //TODO Implement this.
}
virtual void Fighter::takeDamage(int damage){
}
virtual void Fighter::reset(){
}
virtual void Fighter::regenerate(){
}
virtual bool Fighter::useAbility(){
	return false; //TODO Implement this
}


/*
 * Test.cpp
 *
 *  Created on: Sep 2, 2015
 *      Author: anson
 */

#include <iostream>

int main( int argc, const char* argv[] ){
	Arena myArena = Arena();
	myArena.addFighter("bob");
	myArena.addFighter("fred");
	std::cout << myArena.getSize();

}

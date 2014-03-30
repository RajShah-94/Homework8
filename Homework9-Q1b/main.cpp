/*
 * main.cpp
 *
 *  Created on: 21 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include <string>

int main() {
	int x; //initiates integer x

	int & y = x; // brings out value of x
	int * p = &x; // brings out value stored in the memory location
	int z = *p; // dereferences p
}

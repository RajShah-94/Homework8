/*
 * main.cpp
 *
 *  Created on: 21 Mar 2014
 *      Author: Raj Shah 120695027
 */

#include <iostream>

int main() {
	int x=10;
	int & y = x; // y not initialised

	int * p = & x; // needs to be pointer to the memory location
	int z = *p;

	double array[3] = { 0,0,0};
	double * f = array; // needs to be pointer to array
	f[0] = x;
	f[1] = y;
	f[2] = z;
}

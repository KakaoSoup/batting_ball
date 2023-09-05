#ifndef __HEADER_H
#define __HEADER_H
#include <iostream>
#include <cstdlib>
#include <ctime>

bool prob(double p) {
	double randomVal = static_cast<double>(rand()) / RAND_MAX;
	if(randomVal < p)
		return true;
	else
		return false;
}


#endif

//////////////////ARprog.cpp
#include "ARprog.h"
#include <iostream>

using namespace std;

double ARprog::element(int j)
{
	return geta() + j * getd(); 
}

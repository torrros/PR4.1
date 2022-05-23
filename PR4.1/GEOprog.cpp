//////////////////GEOprog.cpp
#include "GEOprog.h"
#include "iostream"

using namespace std;

double GEOprog::element(int j)
{
	return geta() * pow(getd(),j);
}

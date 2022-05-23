//////////////////GEOprog.h
#pragma once
#include"Element.h"
#include <iostream>

using namespace std;

class GEOprog: public Element
{
public:
	GEOprog(double a = 0, double r =0 ): Element(a,r){}
	virtual double element(int j)override;
};


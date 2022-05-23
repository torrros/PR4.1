//////////////////ARprog.h
#pragma once
#include "Element.h"
#include <iostream>

using namespace std;
	
class ARprog : public Element 
{
public:
	ARprog( double a=0, double d =0) : Element(a,d) {}
	virtual double element(int j) override;
	
};


//////////////////Element.h
#pragma once
#include <iostream>

using namespace std;

class Element abstract
{
	double a = 0;
	double d = 1;

public:
	Element( double firstel =0, double d =0): a(firstel), d(d) {}
	void seta (double a) {	this->a = a; }
	double geta()const { return a; }
	void setb(double d) { this->d = d; }
	double getd()const { return d; }
	virtual double element(int j) = 0;
	
};

	
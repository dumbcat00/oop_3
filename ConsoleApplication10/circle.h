#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
using namespace std;

class circle {
private:
	double r;
public:
	void setR(double rr);
	double square();
	double diameter();
	double circ_length();

};
#endif
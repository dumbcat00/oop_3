#include "circle.h"

void circle::setR(double rr){
	r = rr;
}

double circle::square(){
	return 3.14 * r * r;
}

double circle::diameter(){
	return 2 * r;
}

double circle::circ_length() {
	return 2 * 3.14 * r;
}
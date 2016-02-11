#include "stdafx.h"
#include "Drawing.h"



int Drawing::getRedBall() {
	return redBall;
}

vector<int> Drawing::getWhiteBalls() {
	return whiteBalls;
}

Drawing::Drawing() {
}


Drawing::~Drawing() {
}

bool operator==(Drawing & drawingOne, Drawing & drawingTwo) {
	return false;
}

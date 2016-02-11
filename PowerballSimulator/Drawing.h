#pragma once
class Drawing {
	vector<int> whiteBalls;
	int redBall;
public:
	friend bool operator==(Drawing &drawingOne, Drawing &drawingTwo);
	int getRedBall();
	vector<int> getWhiteBalls();
	Drawing();
	~Drawing();
};


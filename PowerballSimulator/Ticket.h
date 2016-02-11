#pragma once
class Ticket {
	vector<Drawing> drawings;
public:
	bool isGrandPrizeWinner(Drawing winningNumbers);
	bool isOneMillionWinner(Drawing winningNumbers);
	bool isFiftyThousandWinner(Drawing winningNumbers);
	Ticket();
	virtual ~Ticket();
};


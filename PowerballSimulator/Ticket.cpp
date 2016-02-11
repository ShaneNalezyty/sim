#include "stdafx.h"
#include "Ticket.h"


bool Ticket::isGrandPrizeWinner(Drawing winningNumbers) {
	for (int i = 0; i < drawings.length; i++) {
		if (drawings[i] == winningNumbers) {
			return true;
		}
	}
	return false;
}

bool Ticket::isOneMillionWinner(Drawing winningNumbers) {
	for (int i = 0; i < drawings.length; i++) {
		if (drawings[i] == winningNumbers) {
			return true;
		}
	}
	return false;
}

bool Ticket::isFiftyThousandWinner(Drawing winningNumbers) {
	for (int i = 0; i < drawings.length; i++) {
		if (drawings[i] == winningNumbers) {
			return true;
		}
	}
	return false;
}

Ticket::Ticket() {
}


Ticket::~Ticket() {
}

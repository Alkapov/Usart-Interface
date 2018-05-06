#pragma once
#include "Register.h"

class UcsrbRegister : public Register {
public:
	UcsrbRegister() {}
	~UcsrbRegister() {}

	void Assign(int mask) override {
		UCSRB = mask;
	}

	int Get() override {
		return UCSRB;
	}

	int Get(int bit) override {
		return UCSRB & 1 << bit;
	}

	void ToggleRxcie(bool active) {
		AddToggleImplementation(RXCIE);
	}


	void ToggleTxcie(bool active) {
		AddToggleImplementation(TXCIE);
	}

	void ToggleUdrie(bool active) {
		AddToggleImplementation(UDRIE);
	}

	void ToggleRxen(bool active) {
		AddToggleImplementation(RXEN);
	}

	void ToggleTxen(bool active) {
		AddToggleImplementation(TXEN);
	}

	void ToggleUcsz2(bool active) {
		AddToggleImplementation(UCSZ2);
	}

	void ToggleRxb8(bool active) {
		AddToggleImplementation(RXB8);
	}

	void ToggleTxb8(bool active) {
		AddToggleImplementation(TXB8);
	}

private:

};

#pragma once
#include "Register.h"

class UcsraRegister : public Register {
public:
	UcsraRegister() {}
	~UcsraRegister() {}

	void Assign(int mask) override {
		UCSRA = mask;
	}

	int Get() override {
		return UCSRA;
	}

	int Get(int bit) override {
		return UCSRA & 1 << bit;
	}

	void ToggleRxc(bool active) {
		AddToggleImplementation(RXC);
	}
private:

};

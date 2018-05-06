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


	void ToggleTxc(bool active) {
		AddToggleImplementation(TXC);
	}

	void ToggleUdre(bool active) {
		AddToggleImplementation(UDRE);
	}

	void ToggleFe(bool active) {
		AddToggleImplementation(FE);
	}

	void ToggleDor(bool active) {
		AddToggleImplementation(DOR);
	}

	void TogglePe(bool active) {
		AddToggleImplementation(PE);
	}

	void ToggleU2x(bool active) {
		AddToggleImplementation(U2X);
	}

	void ToggleMpcm(bool active) {
		AddToggleImplementation(MPCM);
	}

private:

};

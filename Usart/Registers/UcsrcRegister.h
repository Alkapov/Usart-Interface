#pragma once
#include "Register.h"

class UcsrcRegister : public Register {
public:
	UcsrcRegister() {}
	~UcsrcRegister() {}

	void Assign(int mask) override {
		UCSRC = mask;
	}

	int Get() override {
		return UCSRC;
	}

	int Get(int bit) override {
		return UCSRC & 1 << bit;
	}

	void ToggleUrsel(bool active) {
		AddToggleImplementation(URSEL);
	}


	void ToggleUmsel(bool active) {
		AddToggleImplementation(UMSEL);
	}

	void ToggleUpm1(bool active) {
		AddToggleImplementation(UPM1);
	}

	void ToggleUpm0(bool active) {
		AddToggleImplementation(UPM0);
	}

	void ToggleUsbs(bool active) {
		AddToggleImplementation(USBS);
	}

	void ToggleUcsz1(bool active) {
		AddToggleImplementation(UCSZ1);
	}

	void ToggleUcsz0(bool active) {
		AddToggleImplementation(UCSZ0);
	}

	void ToggleUcpol(bool active) {
		AddToggleImplementation(UCPOL);
	}

private:

};

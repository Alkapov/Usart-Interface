#pragma once

#define AddToggleImplementation(Reg) if(active) Set((Reg)); else Reset((Reg));

class Register {
public:
	virtual void Assign(int mask) = 0;

	virtual int Get() = 0;

	virtual int Get(int bit) = 0;

	void Set(int bit) {
		Assign(Get() | 1 << bit);
	}

	void Reset() {
		Assign(0);
	}

	void Reset(int bit) {
		Assign(Get() & ~(1 << bit));
	}


};

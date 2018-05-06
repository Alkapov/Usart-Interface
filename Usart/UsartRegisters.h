#pragma once
#include "Registers\UcsraRegister.h"
#include "Registers/UcsrbRegister.h"
#include "Registers/UcsrcRegister.h"

class UsartRegisters {
public:
	UcsraRegister Ucsra;
	UcsrbRegister Ucsrb;
	UcsrcRegister Ucsrc;

	UsartRegisters() { }
	~UsartRegisters() { }

private:

};

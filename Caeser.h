#pragma once
#include "Cipher.h"
#include "Caeser.h"

class Caeser: public Cipher
{

public:
	Caeser(int shift, bool encrypted);
	virtual bool encrypt(const char* source, char* dest, const int length) override;
	virtual bool decrypt(const char* source, char* dest, const int length) override;
private:
	int shift;
};


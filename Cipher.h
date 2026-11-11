#pragma once

class Cipher
{
public:
	virtual bool encrypt(const char* source, char* dest, const int length)=0;
	virtual bool decrypt(const char* source, char* dest, const int length)=0;
	bool isEncrypt() const;
	bool isDecrypt() const;
	Cipher(bool encrypted);

private:
	bool encrypted;
};


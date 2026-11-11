#include "Caeser.h"


Cipher::Cipher(bool encrypted) :encrypted(encrypted) {

}

bool Cipher::isEncrypt() const{
	return encrypted;
}

bool Cipher::isDecrypt() const {
	return !encrypted;
}
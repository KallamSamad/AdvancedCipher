#include "Cipher.h"
#include "Caeser.h"


Caeser::Caeser(int shift, bool encrypt) : shift(shift), Cipher(encrypt) {

}

bool Caeser::encrypt(const char* source, char* dest, const int length) {
	for (int i(0); i < length; i++) {
		char letter = source[i];
		int position = letter - 'A';
		int newPosition = (position + shift) % 26;
		letter = 'A' + newPosition;
		dest[i] = letter;
 	}
	dest[length] = '\0';

	return true;

}
bool Caeser::decrypt(const char* source, char* dest, const int length) {

	for (int i(0); i < length; i++) {
		char letter = source[i];
		int position = letter +'A';
		int newPosition = (position - shift + 26) % 26;
		letter = 'A' +newPosition;
		dest[i] = letter;
	}
	dest[length] = '\0';

	return true;


}
#include <iostream>
#include "Caeser.h"
#include "Cipher.h"

using namespace std;
int main()
{
#ifdef _DEBUG
	// _CrtSetBreakAlloc(10);
	_onexit(_CrtDumpMemoryLeaks);
#endif
	// strings are just an array of characters


	string text;
	int shift;
	cout << "Please enter shift: ";
	cin >> shift;

	int choice;
	cout << "Encrypt or decrypt? (1 or 2): ";
	cin >> choice;
	Cipher* cipher = new Caeser(shift, choice == 1);

	
	cout << "Enter some text: ";
	cin >> text;
	// get the array of characters that makes up the string
	const char* characters = text.c_str();
	// get the length of the string
	int length = (int)text.length();
	// TODO:
	// use malloc to allocate an array of characters large enough
	// to hold hold our decrypted character array
	// don't forget to free that memory
 

	
	char* output = (char*)malloc((length+1)*sizeof(char));


	if (output == nullptr || cipher == nullptr)
		cout << "read the TODO messages - you need to do this\n";
	else
	{
		
	if (cipher->isEncrypt()) {
		cipher->encrypt(characters, output, length);
		cout << "Encrypted: " << output << '\n';
	
	}
	else {
		cipher->decrypt(characters, output, length);
		cout << "Decrypted: " << output << '\n';

	}
	delete cipher;
	free(output);
}
}
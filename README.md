# AdvancedCipher

## Overview 
I created a basic decryption and encryption Caeser cipher.

## Details
-I used constructor a initialisation list to copy the private attribute, encrypted, from the Cipher base class to add to the Caeser.cpp file. This is the only way to get private members along the inheritance chain without getter methods, without using protected.

- I used pure virtual functions Cipher class because so I can generalise the features of the Cipher class and then specialise the encrypt and decrypt functions inside the Caeser class

- Like before, I used heap memory to store the encrypted and decrypted text and used both new and malloc in this example

## Screenshots

<img width="496" height="102" alt="image" src="https://github.com/user-attachments/assets/131dbce2-6131-4eb5-af51-7059ec57fc0f" />
<img width="428" height="127" alt="image" src="https://github.com/user-attachments/assets/1ef00c81-8399-4d46-b6fa-4136a5f9a677" />

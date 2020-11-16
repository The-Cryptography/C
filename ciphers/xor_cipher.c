/*
* XOR cipher
* XOR Encryption is an encryption method used to encrypt data and is 
* hard to crack by brute-force method, i.e generating random encryption 
* keys to match with the correct one. 
* 
* Code by @Anvikshajain
*/
#include<stdio.h>
#include<string.h>

// The same function is used to encrypt and 
// decrypt 
void encryptDecrypt(char inpString[]) 
{ 
	// Define XOR key 
	// Any character value will work 
	char xorKey = 'P'; 

	// calculate length of input string 
	int len = strlen(inpString); 

	// perform XOR operation of key 
	// with every caracter in string 
	for (int i = 0; i < len; i++) 
	{ 
		inpString[i] = inpString[i] ^ xorKey; 
		printf("%c",inpString[i]); 
	} 
} 

// Driver program to test above function 
int main() 
{ 
	char originalString[] = "Technology"; 

	// Encrypt the string 
	printf("Encrypted String: "); 
	encryptDecrypt(originalString); 
	printf("\n"); 

	// Decrypt the string 
	printf("Decrypted String: "); 
	encryptDecrypt(originalString); 

	return 0; 
} 

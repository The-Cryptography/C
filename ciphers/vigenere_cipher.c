/*
* Vigenere cipher
* Vigenere Cipher is a method of encrypting alphabetic text. It uses a simple form of 
* polyalphabetic substitution. A polyalphabetic cipher is any cipher based on substitution, 
* using multiple substitution alphabets .The encryption of the original text is done using 
* the Vigenère square or Vigenère table.
* 
* Code by @Rishabhpatel803 
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
int main(){
    char msg[] = "CodingIsFun";
    char key[] = "HELLO";
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
     for(int a=0; msg[a]!='\0'; a++)
      {
        // convert lowercase character
        msg[a] = toupper(msg[a]);
      }
  
 
    char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];
 
    //generating new key
    for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
 
        newKey[i] = key[j];
    }
 
    newKey[i] = '\0';
 
    //encryption
    for(i = 0; i < msgLen; ++i)
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';
 
    encryptedMsg[i] = '\0';
 
    //decryption
    for(i = 0; i < msgLen; ++i)
        decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) + 26) % 26) + 'A';
 
    decryptedMsg[i] = '\0';
 
    printf("Original Message: %s", msg);
    printf("\nKey: %s", key);
    printf("\nNew Generated Key: %s", newKey);
    printf("\nEncrypted Message: %s", encryptedMsg);
    printf("\nDecrypted Message: %s", decryptedMsg);
 
	return 0;
}

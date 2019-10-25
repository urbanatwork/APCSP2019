// This is my version of the Caesar Cipher challenge.
// by Urban Reininger aka UrbanAtWork
// Fall 2019

#include <cs50.h>
#include <stdio.h>
#include <string.h> // need for strlen

string plaintxt;    // declare plaintxt variable

int main(int argc, string argv[])
{
    if (argc != 2){  // Check for key value Usage: ./caesar <key>
        return 1;
    }
    
    int key = atoi(argv[1]);    // convert user input from string to integer
    key = key%26;               // Modulus to handle key values bigger than the alphabet (26)
    plaintxt = get_string("plaintext: "); // get the text from user
    printf("ciphertext: ");               //
    
    for(int i=0; i < strlen(plaintxt); i++){  // use strlen (string length) to know how far to iterate
       char c = plaintxt[i];                  // define c as a character from the plaintxt string
        if(c >= 97 && c <= 122){              // check for lowercase ASCII characters
            int cak = c + key;                // new variable to see if ASCII plus key is too large
            if(cak > 122){        // if greater than "z" then subtract 26 (loop around)
                cak = cak-26;                 
                printf("%c",cak);   // print the charcter with an integer! Cool!
            }else{
                printf("%c",cak);
            }
        } else if(c >= 65 && c <= 90){
             int cak = c + key;
            if(cak > 90){   // if greater than "Z" then subtract 26 (loop around)
                cak = cak-26;
                printf("%c",cak);
            }else{
                printf("%c",cak);
            }    
        }else {
            printf("%c",c);  // if not in upper or lower alphabet, just c
        }
    }
    printf("\n"); // end of ciphertext line
} // end of main ==========================



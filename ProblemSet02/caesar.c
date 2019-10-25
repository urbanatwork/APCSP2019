#include <cs50.h>
#include <stdio.h>
#include <string.h>

string plaintxt;

int main(int argc, string argv[])
{
    if (argc != 2){
        return 1;
    }
    
    int key = atoi(argv[1]);
    key = key%26;
    plaintxt = get_string("plaintext: ");
    printf("ciphertext: ");
    
    for(int i=0; i < strlen(plaintxt); i++){
       char c = plaintxt[i];
        if(c >= 97 && c <= 122){
            int cak = c + key;
            if(cak > 122){   // if greater than "z" then subtract 26 (loop around)
                cak = cak-26;
                printf("%c",cak);
            }else{
                printf("%c",cak);
            }
        } else if(c >= 65 && c <= 90){
             int cak = c + key;
            if(cak > 90){   // if greater than "z" then subtract 26 (loop around)
                cak = cak-26;
                printf("%c",cak);
            }else{
                printf("%c",cak);
            }    
        }else {
            printf("%c",c);  // if not in upper or lower alphabet, just c
        }
    }
    printf("\n");
} // end of main



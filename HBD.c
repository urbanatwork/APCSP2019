// Simple Happy Birthday program asking for user input
// by Urban Reininger aka UrbanAtWork 
// for use with: https://sandbox.cs50.io/

#include <stdio.h>
#include <cs50.h>  // for use with Harvard CS50 sandbox

void hb();
void areYa(int a);

int main(){
    string name = get_string("What is your name? "); 
    int age = get_int("How old are you? "); 
    hb();
    hb(); 
    printf("Happy Birthday Dear %s \n", name); 
    hb();
    areYa(age);
}  // end of main

void hb(){
    printf("Happy Birthday to you... \n");
} // end of hb

void areYa(int a){
    for(int i=1; i<=a; i++){    
        printf("Are you %i ? \n",i);
    }
} // end of are you... 

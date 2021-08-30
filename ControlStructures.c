/* Author: Brittney Scheven
   Control structures program
*/

#include <stdio.h>
int main (void) {
    //1. password check

    int password_length = 0;  //initialize to 0
    char ch;  //check each character of the password
    unsigned char upperFlag = 0, lowerFlag = 0, digitFlag = 0, symbolFlag = 0;  //initialize flags to 0
 
    while (upperFlag == 0 || lowerFlag == 0 || digitFlag == 0 || symbolFlag == 0 || password_length < 8) {  //loop until valid password
        password_length = 0;
        upperFlag = 0;
        lowerFlag = 0;
        digitFlag = 0;
        symbolFlag = 0;   
        printf("Please enter a password\n");
        ch = getchar();  //retrieves one character
    
        while (ch != '\n') {  //while loop through password
            password_length++;  //increase password length by one
            switch (ch) {  //switch case statements
                case '%':
                    symbolFlag = 1;  //symbol = true
                    break;
            
                case '+':
                    symbolFlag = 1;
                    break;

                case '#':
                    symbolFlag = 1;
                    break;
             
                default:
                    if (ch > 47 && ch < 58) {  //digit 0-9
                        digitFlag = 1;
                        break;
                    } else if (ch > 64 && ch < 91) {  //upper case
                        upperFlag = 1;
                        break;
                    } else if (ch > 96 && ch < 123) {  //lower case
                        lowerFlag = 1;
                        break;
                    } else {
                        break;
                    }
            }   
            ch = getchar();  //get next char
        }
    }

    printf("\n");
    printf("Password entered is good\n");  //after exiting while loop, password is valid
    printf("\n");

    //2. check for vowels

    printf("Enter a string of characters to check for VowelGram\n");
    unsigned char aFlag = 0, eFlag = 0, iFlag = 0, oFlag = 0, uFlag = 0;
    ch = getchar(); //get chars from user

    while (ch != '\n') {
        switch (ch) {
            case 'a': 
                aFlag = 1;
                break;

            case 'A':
                aFlag = 1;
                break;
        
            case 'e':
                eFlag = 1;
                break;        

            case 'E':
                eFlag = 1;
                break;

            case 'i':
                iFlag = 1;
                break;

            case 'I':
                iFlag = 1;
                break;

            case 'o':
                oFlag = 1;
                break;

            case 'O':
                oFlag = 1;
                break;

            case 'u':
                uFlag = 1;
                break;

            case 'U':
                uFlag = 1;
                break;
            
            default:
                break;
        }
        ch = getchar();
    }

    printf("\n"); 
    if (aFlag == 1 && eFlag == 1 && iFlag == 1 && oFlag == 1 && uFlag == 1) { 
        printf("entered string is a VowelGram\n");    
    } else {
        printf("entered string is not a VowelGram\n");
    } 
    printf("\n");

    //3. Decimal to Binary

    unsigned char x;  //find binary representation of a num from 0-255
    printf("Enter a number from 0 to 255\n");
    scanf("%d", &x);
    printf("Binary representation: ");
    int i = 7;
    for (i; i >= 0; i--) { //print the bits from 7-0
        if ((x & (1 << i)) != 0) { //if the bit at i is 1 (1 & 1 != 0)
            printf("%d", 1);
        } else { //if there is a 0 bit (1 & 0 == 0)
            printf("%d", 0);
        }
    }
    return 0;
}

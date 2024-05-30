#include <stdio.h>

int binaryToDecimal(const char *binary) {
    int dec = 0;
    for ( int i =0; binary[i] != '\0'; i++)
        dec = dec * 2 + ( binary[i] - '0' );
    return dec;
}

int main(){
    char bin[65];
    printf("Enter a  Binary Number\n");
    scanf("%64s", bin);

    int dec = binaryToDecimal(bin);
    printf("number in dec: %d\n", dec);
    return 0;
}

/*
Enter a  Binary Number
1101
number in dec: 13
*/
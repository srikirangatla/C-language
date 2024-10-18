/* Set the rightmost unset bit (0) of a number. */

#include <stdio.h>

int setRightmostUnsetBit(int num) {
    return num | (num + 1);
}

int main() {
    int num = 12; // Binary: 1100, after setting the rightmost unset bit -> 1101 (13)
    int result = setRightmostUnsetBit(num);
    printf("After setting the rightmost unset bit, %d becomes: %d\n", num, result);
    
    num = 7; // Binary: 0111, after setting the rightmost unset bit -> 1111 (15)
    result = setRightmostUnsetBit(num);
    printf("After setting the rightmost unset bit, %d becomes: %d\n", num, result);
    
    return 0;
}

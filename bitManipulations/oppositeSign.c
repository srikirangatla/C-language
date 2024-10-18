/*Check if two numbers have opposite signs using bitwise operators.*/
#include <stdio.h>

int haveOppositeSigns(int a, int b) {
    return (a ^ b) < 0;
}

int main() {
    int a = 10, b = -20;
    
    if (haveOppositeSigns(a, b)) {
        printf("%d and %d have opposite signs.\n", a, b);
    } else {
        printf("%d and %d have the same sign.\n", a, b);
    }
    
    a = 15, b = 25;
    
    if (haveOppositeSigns(a, b)) {
        printf("%d and %d have opposite signs.\n", a, b);
    } else {
        printf("%d and %d have the same sign.\n", a, b);
    }
    
    return 0;
}

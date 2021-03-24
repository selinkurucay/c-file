#include <stdio.h>
int main()
{
    int a = 1, b = 2;
 
    // Code to swap 'a' and 'b'
    a = a + b; // a now becomes 3
    b = a - b; // b becomes 1
    a = a - b; // a becomes 2
 
    printf("After Swapping: a = %d, b = %d", a, b);
 
    return 0;
}

#include <stdio.h>

int main()
{

    //BITWISE OPERATORS = special operators used in bit level programming 
    //                    (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift

    int x = 6;  // 00000110  2^3 = 0 | 2^2 = 1 | 2^1 = 1 | 2^0 = 0
    int y = 12; // 00001100  2^3 = 1 | 2^2 = 1 | 2^1 = 0 | 2^0 = 0
    int z = 0;  // 00000000

    z = x & y; // 00000110  2^3 = 0 | 2^2 = 1 | 2^1 = 1 | 2^0 = 0
               // 00001100  2^3 = 1 | 2^2 = 1 | 2^1 = 0 | 2^0 = 0
               // 00000100  <-- both need to be one to change value (2^2 = 1) else stays the same

    printf("\nAND = %d", z); // (4)
    
    z = x | y; // 00001110 <-- either value has to have one (y = 2^3 = 1 | either 2^2 = 1 | x = 2^1 = 1)
    printf("\nOR = %d", z); // (14)

    z = x ^ y; // 00001010 <-- one or the other but not both value has to have one (y = 2^3 = 1 |  x = 2^1 = 1)
    printf("\nXOR = %d", z); // (10)

    z = x << 1; // 00000110 --> 00001100 | <-- left shift value of one (y = 2^3 = 1 |  x = 2^2 = 1)
    printf("\nLeft shift = %d", z); // (12)

    z = x >> 1; // 00000110 --> 00000011 | <-- left shift value of one (y = 2^1 = 1 |  x = 2^0 = 1)
    printf("\nRight Shift = %d", z); // (3)

    printf("\n");
    return 0;
}
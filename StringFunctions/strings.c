#include <stdio.h>
#include <string.h>

int main()
{
    char string1[] = "Jorge";
    char string2[] = "Basilio";

    //strcat(string1, string2);             // appends a string2 to end of string1
    //strcpy(string1, string2);             // copy string2 to string1
    //strncpy(string1, string2, 4)          // copy n characters of string2 to string1

    printf("%s", string1);
    return 0; 
}
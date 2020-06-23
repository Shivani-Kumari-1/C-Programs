#include<stdio.h>
#include<string.h>
void main()
{
    int len, i;
    char str[100];
    printf("\nEnter string = ");    //display prompt //
    gets(str);  //accept string //
    len = strlen(str);  //strlen function gives you the length of the string. It doesn't count null character. //
    for(i=0; i<=len; i++)
        printf("Character = %c  ASCII value = %d \n", str[i], str[i]);
}
//..............OUTPUT....................//
/*
Enter string = SHIVANI VERMA
S   83
H   72
I   73
V   86
A   65
N   78
I   73
    32
V   86
E   69
R   82
M   77
A   65
    0


*/


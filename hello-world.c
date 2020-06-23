#include<stdio.h>
int main()
{
    //print "Hello World!!" by using semicolon(;)//
    printf("Hello World!!!");

    //There are three ways to print any string without semicolon(;)//
    //by using if//
    if(printf("\n\nI am Shivani Verma."))
    {

    }
    //by using switch//
    switch(printf("\n\nCoding Lover."))
           {

           }
    //by using loop//
    while(!printf("\n\nProgrammer\n\n"))
    {

    }

}
/*Note:- Since, printf function always returns length.
i mean to say that it indicates how many characters are consuming
on output screen. like, "Hello" is returning 5 characters.
that means, this is non-zero. So, condition will be "True". */

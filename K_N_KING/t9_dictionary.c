/***********************************
 * PROGRAM NAME:  T9_dictionary.c  *
 * PAGE NUMBER:                    *
 * AUTHOR:                SWAROOP  *
 ***********************************/

#include <stdio.h>

int main()
{
    char c = NULL;

    while((c = getchar()) != '\n')
    {
        switch(c)
        {
            case 'A':
            case 'a':   printf("2");
                        break;
            case 'B':
            case 'b':   printf("22");
                        break;
            case 'C':
            case 'c':   printf("222");
                        break;
            case 'D':
            case 'd':   printf("3");
                        break;
            case 'E':
            case 'e':   printf("33");
                        break;
            case 'F':
            case 'f':   printf("333");
                        break;
            case 'G':
            case 'g':   printf("4");
                        break;
            case 'H':
            case 'h':   printf("44");
                        break;
            case 'I':
            case 'i':   printf("444");
                        break;
            case 'J':
            case 'j':   printf("5");
                        break;
            case 'K':
            case 'k':   printf("55");
                        break;
            case 'L':
            case 'l':   printf("555");
                        break;
            case 'M':
            case 'm':   printf("6");
                        break;
            case 'N':
            case 'n':   printf("66");
                        break;
            case 'O':
            case 'o':   printf("666");
                        break;
            case 'P':
            case 'p':   printf("7");
                        break;
            case 'Q':
            case 'q':   printf("77");
                        break;
            case 'R':
            case 'r':   printf("777");
                        break;
            case 'S':
            case 's':   printf("7777");
                        break;
            case 'T':
            case 't':   printf("8");
                        break;
            case 'U':
            case 'u':   printf("88");
                        break;
            case 'V':
            case 'v':   printf("888");
                        break;
            case 'W':
            case 'w':   printf("9");
                        break;
            case 'X':
            case 'x':   printf("99");
                        break;
            case 'Y':
            case 'y':   printf("999");
                        break;
            case 'Z':
            case 'z':   printf("9999");
                        break;

            default: printf("0");
        }
    }

    return 0;
}





#include <stdio.h>

// Function that prints a string on the screen with a specific color using ANSI codes for colors in the terminal

void escreva(char *s, char c)
{
    switch (c)
    {
    case 'r': // Red
        printf("\033[1;31m%s\033[0m", s);
        break;

    case 'g': // Green
        printf("\033[1;32m%s\033[0m", s);
        break;

    case 'b': // Blue
        printf("\033[1;34m%s\033[0m", s);
        break;

    case 'p': // Pink
        printf("\033[1;35m%s\033[0m", s);
        break;
    }
}

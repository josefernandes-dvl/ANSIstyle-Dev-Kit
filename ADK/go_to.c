#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Function to position the cursor on the terminal screen at coordinates (x, y)

void ir_para(int x, int y)
{
    // Prints an ANSI control sequence to move the cursor
    // 0x1B is the ASCII code for ESC (escape), which indicates the beginning of an ANSI sequence
    // Next comes the '[' character that starts the control command
    // '%d;%df' indicates the cursor position: y (line) and x (column)
    // Thus, the entire command "\033[y;xf" moves the cursor to line y and column x in the terminal
    printf("%c[%d;%df", 0x1B, y, x);
}

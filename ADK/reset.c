#include <stdio.h>
#include <string.h>

// Function to clear the screen from a specific line and redraw the borders

void reset(int n)
{
    // Go from the line just below n (n+1) to line 25 (end of screen)
    for (int x = n + 1; x <= 25; x++)
    {
        ir_para(0, x);    // Move the cursor to the beginning of line x (column 0)
        printf("\33[2K"); // Send ANSI code to completely delete the current line
    }
    borders(); // After clearing the lines, redraw the interface borders on the screen
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void bordas()
{

    for (int x = 3; x < 79; x++)
    {
        ir_para(x, 2);     // Positions the cursor in row 2 (top), column x
        printf("%c", 196); // Prints the horizontal line on the top section

        ir_para(x, 24);    // Positions the cursor on line 24 (bottom), column x
        printf("%c", 196); // Prints horizontal line on bottom section
    }

    // Draw the left and right vertical borders and corners of the frame
    // Trace lines 3 through 23 to create the vertical bars
    // Character 179 is the vertical bar "|"
    // Characters 218, 191, 192, and 217 represent the corners ┌, ┐, └, and ┘ respectively

    for (int y = 3; y < 24; y++)
    {
        ir_para(2, y);     // Positions the cursor in column 2 (left), row y
        printf("%c", 179); // Prints the left vertical bar

        ir_para(79, y);    // Positions the cursor in column 79 (right), row y
        printf("%c", 179); // Prints the right vertical bar
    }

    // Draw the four corners of the frame using special ASCII characters

    ir_para(2, 2);
    printf("%c", 218); // Top left corner ┌

    ir_para(79, 2);
    printf("%c", 191); // Top right corner ┐

    ir_para(2, 24);
    printf("%c", 192); // Bom left corner └

    ir_para(79, 24);
    printf("%c", 217); // Bottom right corner ┘
}

#include <stdlib.h>

// Function to clear the console screen.

void limpar(void)
{
// The '#ifdef' preprocessor directive checks whether a macro is defined.
// _WIN32 is a standard macro in Windows compilers.
#ifdef _WIN32
    // If you are compiling on Windows, run the "cls" command to clear the screen.
    system("cls");
#else
    // On any other operating system (like Linux or macOS), run "clear".
    system("clear");
#endif
}
#include <stdio.h>

// Function to visually clear a line in the console.

void limpar_linha(void)
{
    // Deletes the line the cursor is currently on
    printf("\033[2K\r");

    // Redesenha as bordas para que a limpeza da linha não apague partes da interface.
    bordas();
}
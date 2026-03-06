/***********************************************************

Title:
	Buffer I/O Cleaner - clean_iobuffer.c

About:
	Custom Header to prevent buffer overflow
	in input/output operations.

License:
	The Unlicense - please refer to <https://unlicense.org>

Author:
	Estevão Salles <mail.estevao.s@gmail.com>

************************************************************/

// Libraries/Headers:
#include <stdio.h>
#include "clean_iobuffer.h"

// --- Main ---
void clean_io(void)
/*  
 * If buffer isn't empty, it will loop and clean until '\n' or EOF.
 * Removing all bytes from the buffer and putting inside the stack,
 * and then, zeroing the stack.
*/
{
	int input_buffer = 0;
	while ((input_buffer = getchar()) != '\n' && input_buffer != EOF) {

	}
}
// --- Main End ---

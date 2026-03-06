/***********************************************************

Title:
	Buffer I/O Cleaner - clean_iobuffer.h

About:
	Custom Header to prevent buffer overflow
	in input/output operations.

License:
	The Unlicense - please refer to <https://unlicense.org>

Author:
	Estevão Salles <mail.estevao.s@gmail.com>

************************************************************/

/*
 			Usage Guide:
 
.. code-example1:: c (not ideal way)
	{
		char input[100] = {0};
		char answer[100] = {0};
		printf("type your answer: ");
		scanf("%s", answer);
		clean_io();

	}

.. code-example2:: c (better way: get, clean then parse)
	{
		char input[100] = {0};
		char answer[100] = {0};
		printf("type the answer: ");
		fgets(input, sizeof(input), stdin);
		clean_io();
		sscanf(input, "%s", answer);
	}


The clean_io() will clean the input stream buffer.

Ideally, you should call it right after grabing input and before parsing it.
It will analyze the buffer and clean only if there's garbage. That's 
why the (.. code-example2:: c) is the better/safer method and it's the same workflow
if you are parsing with strtol() instead of sscanf().

The header logic is in "clean_iobuffer.c".
*/



// Libraries/Headers:
#pragma once
#include <stdio.h>

// Cleaning function:
void clean_io(void);

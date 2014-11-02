/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.c
 * Copyright (C) 2014  <Imoogi Information Systems>
 * 
 * cloudr is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * cloudr is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <editline/readline.h>

#include "cloudr.h"
#include "rackspace.h"
#include "style.h"

int main(int argc, char **argv)
{
	printf("Hello world\n");
	return (0);
}


/*
 * 
 */
void
start_cli()
{
	char *input;
	int proceed = 1;
	
	/* Print Vanity Header */
	printf(OUTPUT_STYLE_COLOR_YELLOW_BOLD "Imoogi Sage Command Line Tools (Version 1.0.0)\n" 
	       OUTPUT_STYLE_BOLD_OFF  "(C) Imoogi Information Systems 2014\n\n\n"
	       OUTPUT_STYLE_RESET);

	/* Print Command line instructions */
	printf("Type your command, or type " OUTPUT_STYLE_COLOR_RED_BOLD "quit" OUTPUT_STYLE_RESET
	       " to exit. Enjoy!\n");

	do
	{
		/* Prompt: */
		input = readline("Sage > ");
		/* Add to command history */
		add_history(input);

		/* Perform the desired command: */
		/* TODO: strtok to tokenize */
		printf("You said: " OUTPUT_STYLE_COLOR_WHITE "%s\n" OUTPUT_STYLE_RESET, input);

		if (strcmp(input, "quit") == 0) {
			proceed = 0;
		}
		
		/* And finally free the resource */
		free(input);
	} while (proceed);

	/* Print good-bye message */
	printf(OUTPUT_STYLE_COLOR_CYAN_BOLD 
	       "Thank you for smarting it up with Imoogi Sage!\nGood day!\n"
	       OUTPUT_STYLE_RESET);
}


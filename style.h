/*
 * style.h
 *
 * Copyright (C) 2014 - Imoogi Informatio Systems
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _STYLE_H_
	#define _STYLE_H_
	/*
	 * ANSI Escape sequences for different output styles
	 */

	#define OUTPUT_STYLE_RESET   "\x1b[0m"

	#define OUTPUT_STYLE_COLOR_BLACK     "\x1b[30m"
	#define OUTPUT_STYLE_COLOR_RED     "\x1b[31m"
	#define OUTPUT_STYLE_COLOR_GREEN   "\x1b[32m"
	#define OUTPUT_STYLE_COLOR_YELLOW  "\x1b[33m"
	#define OUTPUT_STYLE_COLOR_BLUE    "\x1b[34m"
	#define OUTPUT_STYLE_COLOR_MAGENTA "\x1b[35m"
	#define OUTPUT_STYLE_COLOR_CYAN    "\x1b[36m"
	#define OUTPUT_STYLE_COLOR_WHITE    "\x1b[37m"

	#define OUTPUT_STYLE_COLOR_BLACK_BOLD     "\x1b[30;1m"
	#define OUTPUT_STYLE_COLOR_RED_BOLD     "\x1b[31;1m"
	#define OUTPUT_STYLE_COLOR_GREEN_BOLD   "\x1b[32;1m"
	#define OUTPUT_STYLE_COLOR_YELLOW_BOLD  "\x1b[33;1m"
	#define OUTPUT_STYLE_COLOR_BLUE_BOLD    "\x1b[34;1m"
	#define OUTPUT_STYLE_COLOR_MAGENTA_BOLD "\x1b[35;1m"
	#define OUTPUT_STYLE_COLOR_CYAN_BOLD    "\x1b[36;1m"
	#define OUTPUT_STYLE_COLOR_WHITE_BOLD    "\x1b[37;1m"

	#define OUTPUT_STYLE_BACKGROUND_BLACK     "\x1b[40m"
	#define OUTPUT_STYLE_BACKGROUND_RED     "\x1b[41m"
	#define OUTPUT_STYLE_BACKGROUND_GREEN   "\x1b[42m"
	#define OUTPUT_STYLE_BACKGROUND_YELLOW  "\x1b[43m"
	#define OUTPUT_STYLE_BACKGROUND_BLUE    "\x1b[44m"
	#define OUTPUT_STYLE_BACKGROUND_MAGENTA "\x1b[45m"
	#define OUTPUT_STYLE_BACKGROUND_CYAN    "\x1b[46m"
	#define OUTPUT_STYLE_BACKGROUND_WHITE    "\x1b[47m"

	#define OUTPUT_STYLE_BLINK_ON   "\x1b[5m"
	#define OUTPUT_STYLE_BLINK_OFF   "\x1b[25m"

	#define OUTPUT_STYLE_BOLD_ON   "\x1b[1m"
	#define OUTPUT_STYLE_BOLD_OFF   "\x1b[22m"

	#define OUTPUT_STYLE_UNDERLINE_ON   "\x1b[4m"
	#define OUTPUT_STYLE_UNDERLINE_OFF   "\x1b[24m"

#endif
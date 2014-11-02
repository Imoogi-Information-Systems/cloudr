/*
 * request.c
 *
 * Copyright (C) 2014 - Imoogi Information Systems
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

#include "request.h"

/*
 * 
 */
void
start_curl()
{
	curl_global_init(CURL_GLOBAL_DEFAULT);
        
    curl = curl_easy_init();
}

/*
 * 
 */
void
close_curl()
{
	/* ... And clean up... */
    curl_easy_cleanup(curl);
        
    /* And global clean up */
    curl_global_cleanup();
}
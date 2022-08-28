// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// $Log:$
//
// DESCRIPTION:
//
//-----------------------------------------------------------------------------

// static const char rcsid[] = "$Id: m_bbox.c,v 1.1 1997/02/03 22:45:10 b1 Exp $";

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// #include <sys/socket.h> // network capabilities removed
// #include <netinet/in.h>
// #include <arpa/inet.h>
#include <errno.h>
#include <unistd.h>
// #include <netdb.h>
// #include <sys/ioctl.h>

#include "i_system.h"
#include "d_event.h"
#include "d_net.h"
#include "m_argv.h"

#include "doomstat.h"

#ifdef __GNUG__
#pragma implementation "i_net.h"
#endif
#include "i_net.h"

//
// I_InitNetwork
//
void I_InitNetwork (void)
{
    // changed to create a simple singleplayer doomcom structure, always

    doomcom = malloc (sizeof (*doomcom) );
    memset (doomcom, 0, sizeof(*doomcom) );

    doomcom-> ticdup = 1;

     if (M_CheckParm ("-extratic"))
    doomcom-> extratics = 1;
    else
    doomcom-> extratics = 0;

    // single player game (no network stuff allowed)
    netgame = false;
    doomcom->id = DOOMCOM_ID;
    doomcom->numplayers = doomcom->numnodes = 1;
    doomcom->deathmatch = false;
    doomcom->consoleplayer = 0;
    return;
}

// not used
/* void I_NetCmd (void)
{
    if (doomcom->command == CMD_SEND)
    {
    netsend ();
    }
    else if (doomcom->command == CMD_GET)
    {
    netget ();
    }
    else
    I_Error ("Bad net cmd: %i\n",doomcom->command);
}  */

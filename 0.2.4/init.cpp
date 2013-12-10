#include "incl.hpp"

bool init()
{
    //Initialize all SDL subsystems
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return false;
    }
    
    //Set up the screen
    screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE /*| SDL_DOUBLEBUF */ );
	tileSelectScreen = SDL_DisplayFormat( screen );
	tempScreen = SDL_DisplayFormat( screen );
	collisionScreen = SDL_DisplayFormat( screen );
	collisionSelectScreen = SDL_DisplayFormat( screen );
    
    //If there was an error in setting up the screen
    if( screen == NULL )
    {
        return false;
    }
    if( tileSelectScreen == NULL )
    {
        return false;
    }
    if( tempScreen == NULL )
    {
        return false;
    }
    if( collisionScreen == NULL )
    {
        return false;
    }
    if( collisionSelectScreen == NULL )
    {
        return false;
    }

    //Initialize SDL_ttf
    if( TTF_Init() == -1 )
    {
        return false;
    }

    //Set the window caption
    SDL_WM_SetCaption( "TieN", NULL );

    //If everything initialized fine
    return true;
}


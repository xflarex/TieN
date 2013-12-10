#include "incl.hpp"

//starting SDL...

bool init()
{
	cout << "SDL_Init" << endl;
    //Initialize all SDL subsystems
    if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
    {
        return false;
    }
    
    cout << "screen = SDL_SetVideoMode( " << SCREEN_WIDTH << ", " << SCREEN_HEIGHT << ", " << SCREEN_BPP << ", " << SDL_SWSURFACE << endl;
    //Set up the screen
    screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE );
    
    //If there was an error in setting up the screen
    if( screen == NULL )
    {
        return false;
    }

    //Initialize SDL_ttf
    if( TTF_Init() == -1 )
    {
        return false;
    }
    else
    {
		cout << "SDL_ttf" << endl;
	}

    //Set the window caption
    SDL_WM_SetCaption( "TieN", NULL );

    //If everything initialized fine
    return true;
}


#include "incl.hpp"

SDL_Surface *cyanTransparency( SDL_Surface surface )
{
	SDL_Surface* finally = NULL;
	
	finally = SDL_DisplayFormat( &surface );
	
	//~ SDL_FreeSurface( &surface );
	
	SDL_SetColorKey( finally, SDL_SRCCOLORKEY, SDL_MapRGB( finally->format, 0xFF, 0, 0 ) );
	
	return finally;
}

#include "incl.hpp"

bool grid()
{
	SDL_Rect grid;
	
	grid.x = 0;
	grid.y = 0;
	grid.h = SCREEN_HEIGHT;
	grid.w = SCREEN_WIDTH;
	
	//~ SDL_FillRect( screen, &screen->clip_rect, SDL_MapRGB( screen->format, 0x00, 0x00, 0x00 ) );
	
	for( int x = 0 ; x < SCREEN_WIDTH ; x+=20 )
	{
		grid.x = x;
		grid.h = SCREEN_HEIGHT;
		grid.w = 1;
		SDL_FillRect( screen, &grid, SDL_MapRGB( screen->format, 0xFF, 0xFF, 0xFF ) );
	}
	grid.x = 0;
	for( int y = 0 ; y < SCREEN_HEIGHT ; y+=20 )
	{
		grid.y = y;
		grid.h = 1;
		grid.w = SCREEN_WIDTH;
		SDL_FillRect( screen, &grid, SDL_MapRGB( screen->format, 0xFF, 0xFF, 0xFF ) );
	}
	
    if( SDL_Flip( screen ) == -1 )
    {
        return 1;
    }
    return true;
}

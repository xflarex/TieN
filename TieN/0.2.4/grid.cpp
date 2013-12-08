#include "incl.hpp"

bool grid()
{
	SDL_Rect grid;
	
	grid.x = 0;
	grid.y = 0;
	
	for( int x = 0 ; x < SCREEN_WIDTH ; x+=tPx )
	{
		grid.x = x;
		grid.h = SCREEN_HEIGHT;
		grid.w = 1;
		SDL_FillRect( screen, &grid, SDL_MapRGB( screen->format, 0xFF, 0xFF, 0xFF ) );
	}
	grid.x = 0;
	for( int y = 0 ; y < SCREEN_HEIGHT ; y+=tPx )
	{
		grid.y = y;
		grid.h = 1;
		grid.w = SCREEN_WIDTH;
		SDL_FillRect( screen, &grid, SDL_MapRGB( screen->format, 0xFF, 0xFF, 0xFF ) );
	}
	
    return true;
}

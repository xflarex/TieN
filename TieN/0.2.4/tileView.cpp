#include "incl.hpp"

void Tiles::tileView()
{
	copySurface( 0, 0, screen, tempScreen, &screen->clip_rect, false );
	SDL_FillRect( tileSelectScreen, &tileSelectScreen->clip_rect, SDL_MapRGB( tileSelectScreen->format, 0x00, 0x00, 0x00 ) );
	
	int tX = 20, tY = 20;
	SDL_Rect tempPos[100];
	
	for( int n = 0 ; n <= totalTiles ;  n++ )
	{
		tempPos[n] = tPos[n];
		tempPos[n].x *= 3;
		tempPos[n].y *= 3;
		tempPos[n].w *= 3;
		tempPos[n].h *= 3;
		
		
		lPos[n] = tPos[n];
		lPos[n].w *= 3;
		lPos[n].h *= 3;
		
		lPos[n].x = tX;
		lPos[n].y = tY;
		
		largeTiles = rotozoomSurface( tiles, 0, 3, 0 );
		
		copySurface( tX, tY, largeTiles, tileSelectScreen, &tempPos[n], false );
		copySurface( 0, 0, tileSelectScreen, screen, &screen->clip_rect, true );
		
		tX += ( 20 + lPos[n].w );
		
		if( tX > (SCREEN_WIDTH - lPos[n].w - 20) )
		{
			tX = 20;
			tY += 20 + lPos[n].w;
		}
	}
}

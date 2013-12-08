#include "incl.hpp"

void Tiles::drawCollision(bool t, bool l, bool b, bool r)
{
	static bool started = false;
	
	if(started == true)
	{
		SDL_Rect cBox;
		if( t == true )
		{
			cBox.x = xLoc;
			cBox.y = yLoc;
			cBox.w = tPx;
			cBox.h = (tPx/16);
			SDL_FillRect( collisionScreen, &cBox, SDL_MapRGB( collisionScreen->format, 0xFF, 0, 0 ) );
		}
		if( b == true )
		{
			cBox.x = ( xLoc + tPx - (tPx/16) );
			cBox.y = yLoc;
			cBox.w = tPx;
			cBox.h = (tPx/16);
			SDL_FillRect( collisionScreen, &cBox, SDL_MapRGB( collisionScreen->format, 0xFF, 0, 0 ) );
		}
		if( l == true )
		{
			cBox.x = xLoc;
			cBox.y = yLoc;
			cBox.w = (tPx/16);
			cBox.h = tPx;
			SDL_FillRect( collisionScreen, &cBox, SDL_MapRGB( collisionScreen->format, 0xFF, 0, 0 ) );
		}
		if( r == true )
		{
			cBox.x = xLoc;
			cBox.y = ( yLoc + tPx - (tPx/16) );
			cBox.w = (tPx/16);
			cBox.h = tPx;
			SDL_FillRect( collisionScreen, &cBox, SDL_MapRGB( collisionScreen->format, 0xFF, 0, 0 ) );
		}
	}
	else if(started == false)
	{
		started = true;
		copySurface( 0, 0, screen, tempScreen, &screen->clip_rect, false );
		//~ copySurface( 0, 0, screen, collisionScreen, &screen->clip_rect, false )
		SDL_FillRect( collisionScreen, &collisionScreen->clip_rect, SDL_MapRGB( collisionScreen->format, 0, 0xFF, 0xFF ) );
	}
	else
	{
		cout << "drawCollision ERROR" << endl;
	}
}

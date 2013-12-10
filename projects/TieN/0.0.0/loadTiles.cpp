#include "incl.hpp"

void Tiles::loadTiles()
{
	tiles = load_image("town_tiles32x32.png");
	SDL_Rect tmpRect = tiles->clip_rect;
	tWidth = tmpRect.w;
	tHeight = tmpRect.h;
	
	for( int n = 0, x = 0, y = 0, w = tPx, h = tPx ; y <= (tHeight - tPx) ; n++, x+=tPx )
	{
		totalTiles = n;
		tPos[n].x = x;
		tPos[n].y = y;
		tPos[n].w = w;
		tPos[n].h = h;
		
		if( x == (tWidth - tPx) )
		{
			x = -tPx;
			y += tPx;
		}
		if( y >= tHeight + tPx )
		{
			cout << "y too high |||| n: " << n << endl;
		}
	}
}

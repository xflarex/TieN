#include "incl.hpp"

void Tiles::placeTiles()
{
	int xSize = (SCREEN_WIDTH/tPx);
	int ySize = ((SCREEN_HEIGHT/tPx) - 1);
	int ID = 0;
	
	for( int x = 0, y = 0 ; y <= ySize ; )
	{
		//~ cout << x << " " << y << endl;
		ID = iMap[x][y];
		
		//make false
		copySurface( x*tPx, y*tPx, tiles, screen, &tPos[ID], false );
		x++;
		
		if( x >= xSize )
		{
		//~ ID = iMap[x][y];
		//~ copySurface( x*tPx, y*tPx, tiles, screen, &tPos[ID], true );
			x = 0;
			y++;
		}
	}
}

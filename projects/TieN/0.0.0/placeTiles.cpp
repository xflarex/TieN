#include "incl.hpp"

void Tiles::placeTiles()
{
	//GRASS
	bool grass = false;
	tPos.x = 0;
	tPos.y = 20;
	
	for( int x = 0, y = 0 ; y < SCREEN_HEIGHT ; )
	{
		apply_surface( x, y, tiles, screen, &tPos );
		if( x < SCREEN_WIDTH )
		{
			x += 20;
		}
		else
		{
			x = 0;
			y += 20;
		}
		if( grass == false )
		{
			tPos.x = 20;
			grass = true;
		}
		else
		{
			tPos.x = 0;
			grass = false;
		}
	}
	tPos.x = 140;
	tPos.y = 0;
	
	for( int x = 560, y = 720 ; y != 0 ; )
	{
		x = 560;
		y -= 20;
		for( int n = 0 ; n < 7 ; n++ )
		{
			apply_surface( x, y, tiles, screen, &tPos );
			x += 20;
		}
	}
	//~ 
	//~ 
	//~ 
	//~ for( int x = 0, y = 0 ; y < SCREEN_HEIGHT ; )
	//~ {
		//~ apply_surface( x, y, tiles, screen, &tPos );
		//~ if( x < SCREEN_WIDTH )
		//~ {
			//~ x += 20;
		//~ }
		//~ else
		//~ {
			//~ x = 0;
			//~ y += 20;
		//~ }
	//~ }
}

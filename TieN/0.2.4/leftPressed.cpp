#include "incl.hpp"

void Tiles::leftPressed(int ms)
{
	if(ms == MS_TILES)
	{
		if(event.type == SDL_MOUSEBUTTONDOWN)
	    {
	        if( event.button.button == SDL_BUTTON_LEFT )
			{
	            xLoc = event.button.x;
	            yLoc = event.button.y;
	            
	            if( tChosen == 1 )
	            {
					cout << "tChosen TRUE" << endl;
				}
				else if( tChosen == 0 )
				{
					cout << "tChosen FALSE" << endl;
				}
				else
				{
					cout << "tChosen ERROR" << endl;
				}
	            
	            if( (xLoc < SCREEN_WIDTH) && (yLoc < SCREEN_HEIGHT - tPx) && (xLoc > 0) && (yLoc > 0) /*&& (tChosen == true)*/ )
	            {
					//~ tChosen = false;
					while( xLoc % tPx != 0 )
					{
						xLoc--;
					}
					xxLoc = xLoc;
					while( yLoc % tPx != 0 )
					{
						yLoc--;
					}
					copySurface( xLoc, yLoc, tiles, screen, &tPos[iTile], true );
					editFile( (xLoc / tPx), (yLoc / tPx), 0, 0, iTile );
					lDown = true;
				}
			}
		}
		if( event.type == SDL_MOUSEBUTTONUP )
	    {
	        if( event.button.button == SDL_BUTTON_LEFT )
	        {
				lDown = false;
				if( tView == false )
				{
					//~ tChosen = false;
					cout << "leftUP" << endl;
				}
	        }
		}
	}
	else if(ms == MS_COLLISION)
	{
		if(event.type == SDL_MOUSEBUTTONDOWN)
	    {
	        if( event.button.button == SDL_BUTTON_LEFT )
			{
	            xLoc = event.button.x;
	            yLoc = event.button.y;
	            
	            if( cChosen == 1 )
	            {
					cout << "cChosen TRUE" << endl;
				}
				else if( cChosen == 0 )
				{
					cout << "cChosen FALSE" << endl;
				}
				else
				{
					cout << "cChosen ERROR" << endl;
				}
	            
	            if( (xLoc < SCREEN_WIDTH) && (yLoc < SCREEN_HEIGHT - tPx) && (xLoc > 0) && (yLoc > 0) /*&& (tChosen == true)*/ )
	            {
					//~ tChosen = false;
					while( xLoc % tPx != 0 )
					{
						xLoc--;
					}
					xxLoc = xLoc;
					while( yLoc % tPx != 0 )
					{
						yLoc--;
					}
					
					//~ collisionScreen( t, b, l, r );
					//~ buildCollisionBoxes( cTile );
					editFile( (xLoc / tPx), (yLoc / tPx), 0, 0, cTile );
					lDown = true;
				}
			}
		}
		if( event.type == SDL_MOUSEBUTTONUP )
	    {
	        if( event.button.button == SDL_BUTTON_LEFT )
	        {
				lDown = false;
				if( tView == false )
				{
					//~ tChosen = false;
					cout << "leftUP" << endl;
				}
	        }
		}
	}
	else
	{
		cout << "MOUSE STATE ERROR: code 000" << endl << "MOUSE STATE: " << ms << endl << endl;
	}
}

#include "incl.hpp"

void Tiles::leftDrag(int ms)
{
	if(ms == MS_TILES)
	{
		if( tView == false && cView == false )
		{
			xLoc = event.motion.x;
			yLoc = event.motion.y;
			if( (xLoc < SCREEN_WIDTH) && (yLoc < SCREEN_HEIGHT - tPx) && (xLoc > 0) && (yLoc > 0) && (lDown == true) /*&& (tChosen == true)*/ )
			{
				//~ tChosen = false;
				if( (xLoc > xxLoc + tPx) || (xLoc < xxLoc) || (yLoc > yyLoc + tPx) || (yLoc < yyLoc) )
				{
					//~ cout << "y: " << yLoc / tPx << " x: " << xLoc / tPx << endl;
					while( xLoc % tPx != 0 )
					{
						xLoc--;
					}
					xxLoc = xLoc;
					while( yLoc % tPx != 0 )
					{
						yLoc--;
					}
					yyLoc = yLoc;
					
					copySurface( xLoc, yLoc, tiles, screen, &tPos[iTile], true );
					editFile( (xLoc / tPx), (yLoc / tPx), 0, 0, iTile );
				}
			}
		}
	}
	else if(ms == MS_COLLISION)
	{
		if( tView == false && cView == false )
		{
			xLoc = event.motion.x;
			yLoc = event.motion.y;
			if( (xLoc < SCREEN_WIDTH) && (yLoc < SCREEN_HEIGHT - tPx) && (xLoc > 0) && (yLoc > 0) && (lDown == true) /*&& (tChosen == true)*/ )
			{
				//~ tChosen = false;
				if( (xLoc > xxLoc + tPx) || (xLoc < xxLoc) || (yLoc > yyLoc + tPx) || (yLoc < yyLoc) )
				{
					cout << "y: " << yLoc / tPx << " x: " << xLoc / tPx << endl;
					while( xLoc % tPx != 0 )
					{
						xLoc--;
					}
					xxLoc = xLoc;
					while( yLoc % tPx != 0 )
					{
						yLoc--;
					}
					yyLoc = yLoc;
					
					//~ collisionScreen( t, b, l, r );
					//~ buildCollisionBoxes( cTile );
					editFile( (xLoc / tPx), (yLoc / tPx), 0, cTile, 0 );
				}
			}
		}
	}
	else
	{
		cout << "MOUSE STATE ERROR: code 000" << endl << "MOUSE STATE: " << ms << endl << endl;
	}
}

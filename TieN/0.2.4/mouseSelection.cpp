#include "incl.hpp"

bool Tiles::mouseSelection()
{
	if( tView == true )
	{
		int n = 0;
		int x = 20, y = 20;
		bool check = false;
		
		if(event.type == SDL_MOUSEBUTTONDOWN)
	    {
	        if( event.button.button == SDL_BUTTON_LEFT )
	        {
				while( check == false )
				{
					if(event.type == SDL_MOUSEBUTTONDOWN)
				    {
				        if( event.button.button == SDL_BUTTON_LEFT )
				        {
				            xLoc = event.button.x;
				            yLoc = event.button.y;
						}
					}
						
		            if( ( xLoc > lPos[n].x ) && (yLoc > lPos[n].y ) && ( xLoc < (lPos[n].x + lPos[n].w) ) && ( yLoc < (lPos[n].y + lPos[n].h) ) )
			        {
			            iTile = n;
			            check = true;
			            tView = false;
			            
						copySurface( 0, 0, tempScreen, screen, &screen->clip_rect, true );
						cChosen = false;
							
			            return true;
		            }
		            else
		            {
						n++;
					}
					if( n > totalTiles )
					{
						n = 0;
						return false;
					}
				}
			}
		}
	}
	else if( cView == true )
	{
		int n = 0;
		int x = 20, y = 20;
		bool check = false;
		
		if(event.type == SDL_MOUSEBUTTONDOWN)
	    {
	        if( event.button.button == SDL_BUTTON_LEFT )
	        {
				while( check == false )
				{
					if(event.type == SDL_MOUSEBUTTONDOWN)
				    {
				        if( event.button.button == SDL_BUTTON_LEFT )
				        {
				            xLoc = event.button.x;
				            yLoc = event.button.y;
						}
						
						//cout xLoc, yLoc, and cBox
						cout << "xLoc: " << xLoc << endl << "yLoc: " << endl << "cBox[" << n << "].x: " << cBox[n].x << endl << "cBox[" << n << "].y: " << cBox[n].y << endl << "cBox[" << n << "].w: " << cBox[n].w << endl << "cBox[" << n << "].h: " << cBox[n].h << endl; 
						
					}
						
		            if( ( xLoc > cBox[n].x ) && (yLoc > cBox[n].y ) && ( xLoc < (cBox[n].x + cBox[n].w) ) && ( yLoc < (cBox[n].y + cBox[n].h) ) )
			        {
			            cTile = n;
			            check = true;
			            cView = false;
						copySurface( 0, 0, tempScreen, screen, &screen->clip_rect, true );
	SDL_Flip( screen );
	
	
				cChosen = false;
							
			            return true;
		            }
		            else
		            {
						n++;
					}
					if( n > 15 )
					{
						n = 0;
						return false;
					}
				}
			}
		}
	}
	return false;
}

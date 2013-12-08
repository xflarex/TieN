#include "incl.hpp"

int Tiles::getInput()
{
	if( event.type == SDL_KEYDOWN )
	{
		switch( event.key.keysym.sym )
		{
			case SDLK_UP:
			{
				//~ if( iTile < (tHeight / tPx) )
				if( iTile < 29 )
				{
					iTile++;
				}
				else
				{
					iTile = 0;
				}
				break;
			}
			case SDLK_DOWN:
			{
				if( iTile > 0 )
				{
					iTile--;
				}
				else
				{
					//~ iTile = (tHeight / tPx);
					iTile = 29;
				}
				break;
			}
			case SDLK_LEFT:
			{
				break;
			}
			case SDLK_RIGHT:
			{
				break;
			}
			case SDLK_SPACE:
			{
				if( spaceReleased == true )
				{
					if( tView == false )
					{
						cout << "tView now true" << endl;
						tView = true;
						return 10;
					}
					else if( tView == true )
					{
						cout << "tView now false" << endl;
						//~ tView = false; // uncomment and test
						return 0;
					}
					spaceReleased = false;
				}
				break;
			}
			case SDLK_3:
			{
				loadFile();
				break;
			}
			case SDLK_4:
			{
				saveFile();
				break;
			}
			case SDLK_5:
			{
				//~ SDL_FillRect( tempScreen, &tempScreen->clip_rect, SDL_MapRGB( tempScreen->format, 0xFF, 0x00, 0x00 ) );
				//~ copySurface( 0, 0, tempScreen, screen, &tempScreen->clip_rect, true );
			    //~ SDL_Flip( screen );
				break;
			}
			case SDLK_6:
			{
				copySurface( 0, 0, tempScreen, screen, &screen->clip_rect, true );
				break;
			}
			case SDLK_7:
			{
		        collisionScreen2 = cyanTransparency( *collisionScreen );
				copySurface( 0, 0, collisionScreen2, screen, &screen->clip_rect, true );
				break;
			}
			case SDLK_c:
			{
				if( cReleased = true )
				{
					if( cView == false )
					{
						cView = true;
						return 11;
					}
					else if( cView == true )
					{
						cView = false;
						return 0;
					}
					cReleased = false;
					break;
				}
			}
		}
	}
	
	if( event.type == SDL_KEYUP )
	{
		switch( event.key.keysym.sym )
		{
			case SDLK_SPACE:
			{
				spaceReleased = true;
				break;
			}
			case SDLK_c:
			{
				cReleased = true;
				break;
			}
		}
	}
}

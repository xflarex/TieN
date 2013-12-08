#include "incl.hpp"

void Tiles::collisionView()
{
	int f = 0, g = 0;
	
	//TOP
	SDL_Rect cBoxFill[5];
	cBoxFill[0].w = ( (SCREEN_HEIGHT / 4) - 80 );
	cBoxFill[0].h = 20;
	//LEFT
	cBoxFill[1].w = 20;
	cBoxFill[1].h = ( (SCREEN_HEIGHT / 4) - 80 );
	//BOTTOM
	cBoxFill[2].y = ( (SCREEN_HEIGHT / 4) - 100 );
	cBoxFill[2].w = ( (SCREEN_HEIGHT / 4) - 80 );
	cBoxFill[2].h = 20;
	//RIGHT
	cBoxFill[3].x = ( (SCREEN_HEIGHT / 4) - 100 );
	cBoxFill[3].w = 20;
	cBoxFill[3].h = ( (SCREEN_HEIGHT / 4) - 80 );
	
	
	cView = true;
	
	copySurface( 0, 0, screen, tempScreen, &screen->clip_rect, false );
	SDL_FillRect( collisionSelectScreen, &collisionSelectScreen->clip_rect, SDL_MapRGB( collisionSelectScreen->format, 0x00, 0x00, 0x00 ) );
	
	for( int n = 0, x = 80, y = 20, mark = 1 ; n < 16 ; n++, mark++ )
	{
		x += (20 + (SCREEN_HEIGHT / 4));
		cBox[n].x = x;
		cBox[n].y = y;
		cBox[n].w = ( (SCREEN_HEIGHT / 4) - 80 );
		cBox[n].h = ( (SCREEN_HEIGHT / 4) - 80 );
		
		rectangleRGBA( collisionSelectScreen, cBox[n].x, cBox[n].y, (cBox[n].x + cBox[n].w), (cBox[n].y + cBox[n].h), 255, 0, 0, 150 );
		
		switch(n)
		{
			case 0:
			{
				break;
			}
			case 1:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].h = 20;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				break;
			}
			case 2:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].h = 20;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4].w = cBoxFill[1].w;
				cBoxFill[4].h = cBoxFill[1].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 3:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].h = 20;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4].x = (cBox[n].x + cBoxFill[3].x);
				cBoxFill[4].w = cBoxFill[3].w;
				cBoxFill[4].h = cBoxFill[3].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 4:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].h = 20;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4].y = (cBox[n].y + cBoxFill[2].y);
				cBoxFill[4].w = cBoxFill[2].w;
				cBoxFill[4].h = cBoxFill[2].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 5:
			{
				cBoxFill[4].x = cBox[n].x;
				cBoxFill[4].y = cBox[n].y;
				cBoxFill[4].w = cBoxFill[1].w;
				cBoxFill[4].h = cBoxFill[1].h;
				
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				break;
			}
			case 6:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].w = cBoxFill[1].w;
				cBoxFill[4].h = cBoxFill[1].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].y = (cBox[n].y + cBoxFill[2].y);
				cBoxFill[4].w = cBoxFill[2].w;
				cBoxFill[4].h = cBoxFill[2].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 7:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].w = cBoxFill[1].w;
				cBoxFill[4].h = cBoxFill[1].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].x = (cBox[n].x + cBoxFill[3].x);
				cBoxFill[4].w = cBoxFill[3].w;
				cBoxFill[4].h = cBoxFill[3].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 8:
			{
				cBoxFill[4].x = cBox[n].x;
				cBoxFill[4].y = (cBox[n].y + cBoxFill[2].y);
				cBoxFill[4].w = cBoxFill[2].w;
				cBoxFill[4].h = cBoxFill[2].h;
				
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				break;
			}
			case 9:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].y = (cBox[n].y + cBoxFill[2].y);
				cBoxFill[4].w = cBoxFill[2].w;
				cBoxFill[4].h = cBoxFill[2].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].x = (cBox[n].x + cBoxFill[3].x);
				cBoxFill[4].w = cBoxFill[3].w;
				cBoxFill[4].h = cBoxFill[3].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 10:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].x = (cBox[n].x + cBoxFill[3].x);
				cBoxFill[4].w = cBoxFill[3].w;
				cBoxFill[4].h = cBoxFill[3].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 11:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].h = 20;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].y = (cBox[n].y + cBoxFill[2].y);
				cBoxFill[4].w = cBoxFill[2].w;
				cBoxFill[4].h = cBoxFill[2].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].x = (cBox[n].x + cBoxFill[3].x);
				cBoxFill[4].w = cBoxFill[3].w;
				cBoxFill[4].h = cBoxFill[3].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 12:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].h = 20;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].w = cBoxFill[1].w;
				cBoxFill[4].h = cBoxFill[1].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].x = (cBox[n].x + cBoxFill[3].x);
				cBoxFill[4].w = cBoxFill[3].w;
				cBoxFill[4].h = cBoxFill[3].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 13:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].h = 20;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].w = cBoxFill[1].w;
				cBoxFill[4].h = cBoxFill[1].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].y = (cBox[n].y + cBoxFill[2].y);
				cBoxFill[4].w = cBoxFill[2].w;
				cBoxFill[4].h = cBoxFill[2].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 14:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].w = cBoxFill[1].w;
				cBoxFill[4].h = cBoxFill[1].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].y = (cBox[n].y + cBoxFill[2].y);
				cBoxFill[4].w = cBoxFill[2].w;
				cBoxFill[4].h = cBoxFill[2].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].x = (cBox[n].x + cBoxFill[3].x);
				cBoxFill[4].w = cBoxFill[3].w;
				cBoxFill[4].h = cBoxFill[3].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
			case 15:
			{
				cBoxFill[4] = cBox[n];
				cBoxFill[4].h = 20;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].w = cBoxFill[1].w;
				cBoxFill[4].h = cBoxFill[1].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].y = (cBox[n].y + cBoxFill[2].y);
				cBoxFill[4].w = cBoxFill[2].w;
				cBoxFill[4].h = cBoxFill[2].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				cBoxFill[4] = cBox[n];
				cBoxFill[4].x = (cBox[n].x + cBoxFill[3].x);
				cBoxFill[4].w = cBoxFill[3].w;
				cBoxFill[4].h = cBoxFill[3].h;
				SDL_FillRect( collisionSelectScreen, &cBoxFill[4], SDL_MapRGB( collisionSelectScreen->format, 0xFF, 0x00, 0x00 ) );
				
				break;
			}
		}
		
		
		if( mark == 4 )
		{
			mark = 0;
			x = 80;
			y += (20 + cBox[n].h);
		}
	}
	copySurface( 0, 0, collisionSelectScreen, screen, &screen->clip_rect, true );
	SDL_Flip( screen );
}

#include "incl.hpp"

mainChar::mainChar()
{
}

bool mainChar::loadChar()
{
	// 0 30 48 78 94 124
	mChtr = load_image("MainGuySpriteSheet32x32.png");
	
	for( int a = 0, x = 0, y = 0; a < 12 ; a++ )
	{
			mChtrSheet[x][y].x = 0;
			mChtrSheet[x][y].y = y;
			mChtrSheet[x][y].w = 32;
			mChtrSheet[x][y].h = 32;
			//~ SDL_Delay(100);
			x++;
			mChtrSheet[x][y].x = 42;
			mChtrSheet[x][y].y = y;
			mChtrSheet[x][y].w = 32;
			mChtrSheet[x][y].h = 32;
			//~ SDL_Delay(100);
			x++;
			mChtrSheet[x][y].x = 84;
			mChtrSheet[x][y].y = y;
			mChtrSheet[x][y].w = 32;
			mChtrSheet[x][y].h = 32;
			y++;
	}
	return true;
}

bool mainChar::showChar(int x, int y)
{
	copySurface( cX, cY, mChtr, screen, &mChtrSheet[x][y], true );
	return true;
}

void mainChar::moveChar(int direction)
{
	// 0 == up
	switch(direction)
	{
		case 0:
		{
			bool collide = false;
			if( iMap[cX/tPx][cY/tPx][1] != 0 )
			{
				int tMap = iMap[cX/tPx][( cY - tPx )/tPx][1];
				//~ cout << tMap << endl;
				if(
							( tMap == 4 ) &&
							( tMap == 6 ) &&
							( tMap == 8 ) &&
							( tMap == 9 ) &&
							( tMap == 11 ) &&
							( tMap == 13 ) &&
							( tMap == 14 ) &&
							( tMap == 15 )
				)
				{
					collide = true;
				}
				else
				{
					collide = false;
				}
			}
			if( (cY >= tPx) && (collide == false) )
			{
				cY-=tPx;
				
				//~ if( grid() == false )
				//~ {
					//~ cout << "grid failed" << endl;
				//~ }
			}
			break;
		}
	// 1 == down
		case 1:
		{
			bool collide = false;
			if( iMap[cX/tPx][cY/tPx][1] != 0 )
			{
				int tMap = iMap[cX/tPx][( cY - tPx )/tPx][1];
				if(
							( tMap == 1 ) &&
							( tMap == 2 ) &&
							( tMap == 3 ) &&
							( tMap == 4 ) &&
							( tMap == 11 ) &&
							( tMap == 12 ) &&
							( tMap == 13 ) &&
							( tMap == 15 )
				)
				{
					collide = true;
				}
				else
				{
					collide = false;
				}
			}
			if( (cY <= ( SCREEN_HEIGHT - ( tPx*2 ) )) && (collide == false) )
			{
				cY+=tPx;
				
				//~ if( grid() == false )
				//~ {
					//~ cout << "grid failed" << endl;
				//~ }
			}
			break;
		}
	// 2 == left
		case 2:
		{
			bool collide = false;
			if( iMap[cX/tPx][cY/tPx][1] != 0 )
			{
				int tMap = iMap[cX/tPx][( cY - tPx )/tPx][1];
				if(
							( tMap == 3 ) &&
							( tMap == 7 ) &&
							( tMap == 9 ) &&
							( tMap == 10 ) &&
							( tMap == 11 ) &&
							( tMap == 12 ) &&
							( tMap == 14 ) &&
							( tMap == 15 )
				)
				{
					collide = true;
				}
				else
				{
					collide = false;
				}
			}
			if( (cX >= tPx) && (collide == false) )
			{
				cX-=tPx;
				
				//~ if( grid() == false )
				//~ {
					//~ cout << "grid failed" << endl;
				//~ }
			}
			break;
		}
	// 3 == right
		case 3:
		{
			bool collide = false;
			if( iMap[cX/tPx][cY/tPx][1] != 0 )
			{
				int tMap = iMap[cX/tPx][( cY - tPx )/tPx][1];
				if(
							( tMap == 2 ) &&
							( tMap == 5 ) &&
							( tMap == 6 ) &&
							( tMap == 7 ) &&
							( tMap == 12 ) &&
							( tMap == 13 ) &&
							( tMap == 14 ) &&
							( tMap == 15 )
				)
				{
					collide = true;
				}
				else
				{
					collide = false;
				}
			}
			if( (cX < SCREEN_WIDTH -tPx) && (collide == false) )
			{
				cX+=tPx;
				
				//~ if( grid() == false )
				//~ {
					//~ cout << "grid failed" << endl;
				//~ }
			}
			break;
		}
	}
}
void mainChar::getInput()
{
	if( event.type == SDL_KEYDOWN )
	{
		switch( event.key.keysym.sym )
		{
			case SDLK_UP:
			{
				//~ moveChar(0);
				keyState = 0;
			}
				break;
			case SDLK_DOWN:
			{
				//~ moveChar(1);
				keyState = 1;
			}
				break;
			case SDLK_LEFT:
			{
				//~ moveChar(2);
				keyState = 2;
			}
				break;
			case SDLK_RIGHT:
			{
				//~ moveChar(3);
				keyState = 3;
			}
				break;
			//~ case SDLK_SPACE:
				//~ if( showWork(file) == false )
				//~ {
					//~ cout << "ERROR: SDLK_SPACE @ getinput.cpp" << endl;
					//~ break;
				//~ }
				//~ break;
			//~ case SDLK_0:
				//~ runCode();
				//~ break;
			//~ case SDLK_1:
			//~ //add a check to see if there is code loaded for running
				//~ if( loadCode() == false )
				//~ {
					//~ cout << "ERROR: LOADCODE() FAILED @ GETINPUT()" << endl;
				//~ }
				//~ break;
			//~ case SDLK_2:
				//~ tempStr.clear();
				//~ 
				//~ for( int a ; workArea.size() <= a ; a++ )
				//~ {
					//~ go.append(workArea.at(a));
				//~ }
				//~ showWork(go);
				//~ break;
			//~ case SDLK_3:
				//~ file.insert(tracker, '+');
				//~ tracker++;
				//~ break;
			case SDLK_4:
				break;
			case SDLK_5:
				break;
			case SDLK_6:
				break;
			case SDLK_7:
				break;
		}
	}
}

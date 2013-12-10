#include "incl.hpp"

mainChar::mainChar()
{
	cX = 600;
	cY = 680;
}

bool mainChar::loadChar()
{
	
	mChtr = load_image("40x40corrected2.png");
	
	for( int a = 0, x = 0, y = 0; a < 17 ; a++, x+=40 )
	{
			mChtrSheet[ a ].x = x;
			mChtrSheet[ a ].y = y;
			mChtrSheet[ a ].w = 40;
			mChtrSheet[ a ].h = 40;
		if( x == 160 )
		{
			x = 0;
			y+=40;
			
			mChtrSheet[ a ].x = x;
			mChtrSheet[ a ].y = y;
			mChtrSheet[ a ].w = 40;
			mChtrSheet[ a ].h = 40;
		}
	}
	return true;
}

bool mainChar::showChar(int n)
{
	apply_surface( cX, cY, mChtr, screen, &mChtrSheet[n] );
	
	if( SDL_Flip( screen ) == -1 )
	{
		return 1;
	}
	return true;
}

void mainChar::moveChar(int direction)
{
	// 0 == up
	switch(direction)
	{
		case 0:
		{
			if( cY > 0 )
			{
				cY-=20;
				
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
			if( cY < SCREEN_HEIGHT - 40 )
			{
				cY+=20;
				
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
			if( cX > 0 )
			{
				cX-=20;
				
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
			if( cX < SCREEN_WIDTH - 40 )
			{
				cX+=20;
				
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
				moveChar(0);
			}
				break;
			case SDLK_DOWN:
			{
				moveChar(1);
			}
				break;
			case SDLK_LEFT:
			{
				moveChar(2);
			}
				break;
			case SDLK_RIGHT:
			{
				moveChar(3);
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

#include "incl.hpp"

void getInput()
{
	if( SDL_PollEvent( &event ) )
	{
		if( event.type == SDL_KEYDOWN )
		{
			switch( event.key.keysym.sym )
			{
				case SDLK_UP:
				{
					mC::moveChar(0);
				}
					break;
				case SDLK_DOWN:
				{
					mC::moveChar(1);
				}
					break;
				case SDLK_LEFT:
				{
					mC::moveChar(2);
				}
					break;
				case SDLK_RIGHT:
				{
					mC::moveChar(3);
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
}


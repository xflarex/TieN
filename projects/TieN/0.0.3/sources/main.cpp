#include "incl.hpp"

SDL_Surface *screen = NULL;

SDL_Event event;
TTF_Font *font = NULL;
SDL_Color textColor = { 255, 255, 255 };

const int FRAMES_PER_SECOND = 20;

int main( int argc, char* args[] )
{	
	bool quit = false;
    
	init();
	frameRate();
	SDL_Flip( screen );
	
    while( quit == false )
    {	
        while( SDL_PollEvent( &event ) )
        {
            if( event.type == SDL_QUIT )
            {
                quit = true;
            }
			
	        
    }
    clean_up();

    return 0;

}

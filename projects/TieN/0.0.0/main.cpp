#include "incl.hpp"

//The surfaces
//~ SDL_Surface *background = NULL;
//~ SDL_Surface *message = NULL;
SDL_Surface *screen = NULL;

//The event structure
SDL_Event event;
//The font that's going to be used
TTF_Font *font = NULL;
//The color of the font
SDL_Color textColor = { 255, 255, 255 };

int iMap[SCREEN_WIDTH/tPx][SCREEN_HEIGHT/tPx];
vector<string> tileMap;

//The frame rate
const int FRAMES_PER_SECOND = 20;

int main( int argc, char* args[] )
{	
	int a = 0;
	
	bool quit = false;
	
    //The frame rate regulator
    Timer fps;
    
    mainChar mC;
    
    Tiles tls;
    
	if( init() == false )
	{
		return 1;
	}
	
	if( mC.loadChar() == false )
	{
		return 1;
	}
	
	tls.loadTiles();
	tls.loadLevel();
	
    while( quit == false )
    {
		if( a == 17 )
		{
			a = 0;
		}
		if( mC.showChar(a) == false )
		{
			return 1;
		}
		a++;
		
        while( SDL_PollEvent( &event ) )
        {
            if( event.type == SDL_QUIT )
            {
                quit = true;
            }
			
			mC.getInput();
			//~ tls.placeTiles();
			
			//~ if( grid() == false )
			//~ {
				//~ return 1;
				//~ cout << "grid failed" << endl;
			//~ }
        }
        
        
        //Cap the frame rate
        if( fps.get_ticks() < 1000 / FRAMES_PER_SECOND )
        {
            SDL_Delay( ( 1000 / FRAMES_PER_SECOND ) - fps.get_ticks() );
        }
	        
    }
    clean_up();

    return 0;

}

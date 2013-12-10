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

	int cX = 320;
	int cY = 320;
	int keyState = -1;

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
	tls.placeTiles();
	SDL_Flip( screen );
	
    while( quit == false )
    {
		
		
        while( SDL_PollEvent( &event ) )
        {
            if( event.type == SDL_QUIT )
            {
                quit = true;
            }
			
			mC.getInput();
			
			
			//~ mC.showChar(keyState, 0);
			
			
				if( keyState != -1 )
				{
					tls.flipTiles();
					mC.moveChar(keyState);
					
					if( mC.showChar(2, 0) == false )
					{
						return 1;
					}
					keyState = -1;
				}
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

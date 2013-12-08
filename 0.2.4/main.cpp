#include "incl.hpp"

//The surfaces
//~ SDL_Surface *background = NULL;
//~ SDL_Surface *message = NULL;
SDL_Surface *screen = NULL;
SDL_Surface *collisionScreen = NULL;
SDL_Surface *tempScreen = NULL;
SDL_Surface *tileSelectScreen = NULL;
SDL_Surface *collisionSelectScreen = NULL;
SDL_Surface *collisionScreen2 = NULL;

//The event structure
SDL_Event event;
//The font that's going to be used
TTF_Font *font = NULL;
//The color of the font
SDL_Color textColor = { 255, 255, 255 };

int iMap[SCREEN_HEIGHT / tPx][SCREEN_WIDTH / tPx];
vector<string> tileMap;

//The frame rate
const int FRAMES_PER_SECOND = 20;


//SWITCHES//
bool tView = false;
bool cView = false;
bool tChosen = false;
bool cChosen = false;

int main( int argc, char* args[] )
{	
	int i_input = 0;
	int a = 0;
	
	bool quit = false;
	
    //The frame rate regulator
    Timer fps;
    
    Tiles tls;
    
	if( init() == false )
	{
		return 1;
	}
	
	tls.loadTiles();
    newFile();
	
    while( quit == false )
    {
        while( SDL_PollEvent( &event ) )
        {
            if( event.type == SDL_QUIT )
            {
                quit = true;
            }
            if( tView == false )
            {
				if( grid() == false )
				{
					return 1;
					cout << "grid failed" << endl;
				}
			}
			i_input = tls.getInput();
			if( i_input == 10 )
			{
				tls.tileView();
			}
			else if( i_input == 11 )
			{
				tls.collisionView();
			}
        
	        if( tView == false && cView == false && tChosen == true )
	        {
				tls.leftPressed(0);
		        tls.leftDrag(0);
			}
	        if( tView == false && cView == false && cChosen == true )
	        {
				tls.leftPressed(1);
		        tls.leftDrag(1);
			}
	        if( tView == true )
	        {
				tChosen = tls.mouseSelection();
			}
			if( cView == true )
			{
				cChosen = tls.mouseSelection();
			}
		}
	        if( fps.get_ticks() < 1000 / FRAMES_PER_SECOND )
	        {
	            SDL_Delay( ( 1000 / FRAMES_PER_SECOND ) - fps.get_ticks() );
	        }
	        
    }
    clean_up();

    return 0;
}

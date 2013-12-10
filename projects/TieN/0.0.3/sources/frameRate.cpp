#include incl.hpp

void frameRate()
{
	Timer fps;
	
	//Cap the frame rate
	if( fps.get_ticks() < 1000 / FRAMES_PER_SECOND )
	{
		SDL_Delay( ( 1000 / FRAMES_PER_SECOND ) - fps.get_ticks() );
	}
}

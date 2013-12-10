#include "incl.hpp"

//~ void apply_surface( int x, int y, SDL_Surface* src, SDL_Surface* dest, SDL_Rect* clip = NULL )
void blitSprite( int x, int y, SDL_Surface* src, SDL_Surface* dst, SDL_Rect* srcOffset = NULL )
{
    //Holds offsets
    SDL_Rect offset;

    //Get offsets
    offset.x = x;
    offset.y = y;

    //Blit
    SDL_BlitSurface( src, srcOffset, dst, &dstOffset );
}


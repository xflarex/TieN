#include "incl.hpp"

//convert image
SDL_Surface *load_image( std::string filename, SDL_MapRGB alpha )
{
    SDL_Surface* loadedImage = NULL;]
    SDL_Surface* optimizedImage = NULL;

    //Load the image
    loadedImage = IMG_Load( filename.c_str() );

    //If the image loaded
    if( loadedImage != NULL )
    {
        //Create an optimized surface
        optimizedImage = SDL_DisplayFormatAlpha( loadedImage );

        //Free the old surface
        SDL_FreeSurface( loadedImage );

        //If the surface was optimized
        if( alpha != NULL )
        {
            //Color key surface
            SDL_SetColorKey( optimizedImage, SDL_SRCCOLORKEY, alpha );
        }
    }

    //Return the optimized surface
    return optimizedImage;
}

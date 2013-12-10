#ifndef MAIN_HPP
#define MAIN_HPP

//Screen attributes
const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;
const int SCREEN_BPP = 32;
const int tPx = 32;

//The surfaces
//~ extern SDL_Surface *background;
//~ extern SDL_Surface *message;
extern SDL_Surface *screen;

//The event structure
extern SDL_Event event;

//The font that's going to be used
extern TTF_Font *font;

//The color of the font
extern SDL_Color textColor;

#endif

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
extern SDL_Surface *tileSelectScreen;
extern SDL_Surface *tempScreen;
extern SDL_Surface *collisionScreen;
extern SDL_Surface *collisionSelectScreen;
extern SDL_Surface *collisionScreen2;

//The event structure
extern SDL_Event event;

//The font that's going to be used
extern TTF_Font *font;

//The color of the font
extern SDL_Color textColor;

#endif

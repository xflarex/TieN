#ifndef INCL_HPP
#define INCL_HPP

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"

#include <iostream>
#include <vector>
#include <fstream>

#include "main.hpp"
#include "init.hpp"
#include "timer.hpp"
#include "grid.hpp"
#include "mainChar.hpp"
#include "getInput.hpp"
#include "copySurface.hpp"
#include "tiles.hpp"

#include "apply_surface.hpp"
#include "load_image.hpp"
#include "clean_up.hpp"

using namespace std;

extern vector<string> tileMap;
extern int iMap[SCREEN_WIDTH/tPx][SCREEN_HEIGHT/tPx][3];

extern int cX;
extern int cY;
extern int keyState;

#endif

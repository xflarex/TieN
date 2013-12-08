#ifndef INCL_HPP
#define INCL_HPP


using namespace std;

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"

#include "SDL/SDL_gfxPrimitives.h"
#include "SDL/SDL_rotozoom.h"

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <iterator>

#include "main.hpp"
#include "init.hpp"
#include "timer.hpp"
#include "grid.hpp"
#include "tiles.hpp"
#include "newFile.hpp"
#include "editFile.hpp"
#include "saveFile.hpp"
#include "loadFile.hpp"

#include "copySurface.hpp"
#include "cyanTransparency.hpp"

#include "load_image.hpp"
#include "clean_up.hpp"


extern vector<string> tileMap;
extern bool tView;
extern bool cView;
extern bool tChosen;
extern bool cChosen;




//DEFINES DEFINES DEFINES DEFINES//
//'''''''''''''''''''''''''''''''//
//MOUSE STATE//
#define MS_TILES 0
#define MS_COLLISION 1

#endif

#include "incl.hpp"

Tiles::Tiles()
{
	SDL_Surface *collisions = NULL;
	SDL_Surface *tiles = NULL;
	SDL_Surface *ltTemp = NULL;
	SDL_Surface *largeTiles = NULL;
	lDown = false;
	spaceReleased = true;
	iTile = 11;
	cTile = 0;
	totalTiles = 0;
}

#ifndef TILES_HPP
#define TILES_HPP

class Tiles
{
	private:
	int tHeight;
	int tWidth;
	int totalTiles;
	
	SDL_Surface *tiles;
	SDL_Rect tPos[100];
	
	public:
	Tiles();
	//~ void setTiles();
	void loadTiles();
	//~ void placeTiles();
	void loadLevel();
};


#endif

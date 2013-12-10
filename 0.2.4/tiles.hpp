#ifndef TILES_HPP
#define TILES_HPP

class Tiles
{
	private:
	int tHeight;
	int tWidth;
	//~ int tPx;
	int iTile;
	int cTile;
	int totalTiles;
	
	bool lDown;
	bool spaceReleased;
	bool cReleased;
	
	SDL_Surface *collisions;
	SDL_Surface *tiles;
	SDL_Surface *ltTemp;
	SDL_Surface *largeTiles;
	SDL_Rect tPos[100];
	SDL_Rect lPos[100];
	
	SDL_Rect cBox[16];
	
	
	public:
	int xLoc, yLoc, xxLoc, yyLoc;
	Tiles();
	//~ void setTiles();
	//~ void placeTiles();
	int getInput();
	void loadTiles();
	void leftPressed(int ms);
	//~ void leftMove();
	void leftDrag(int ms);
	void buildMap();
	void tileView();
	void collisionView();
	bool mouseSelection();
	bool mouseSelection_cView();
	void buildCollisionBoxes(int n);
	void drawCollision( bool t, bool l, bool b, bool r );
};


#endif

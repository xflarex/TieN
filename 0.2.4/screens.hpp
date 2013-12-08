#ifndef SCREENS_HPP
#define SCREENS_HPP

class screens()
{
	private:
	
	SDL_Surface *screen = NULL;
	SDL_Surface *collisionScreen = NULL;
	SDL_Surface *tempScreen = NULL;
	SDL_Surface *tileSelectScreen = NULL;
	SDL_Surface *collisionSelectScreen = NULL;
	SDL_Surface *collisionScreen2 = NULL;

	public:
	
	void showCollisionScreen();
	void showTileSelectScreeen();
	void showCollisionSelectScreen();
	
}

#endif

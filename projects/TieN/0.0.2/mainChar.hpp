#ifndef MAINCHAR_HPP
#define MAINCHAR_HPP
#include "incl.hpp"
class mainChar
{
	private:
	SDL_Surface *mChtr;
	SDL_Rect mChtrSheet[3][4];
	//~ int cX;
	//~ int cY;
	public:
	mainChar();
	bool loadChar();
	bool showChar(int x, int y);
	void moveChar( int direction );
	void getInput();
};

#endif

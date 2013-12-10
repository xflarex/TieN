#ifndef MAINCHAR_HPP
#define MAINCHAR_HPP
#include "incl.hpp"
class mainChar
{
	private:
	SDL_Surface *mChtr;
	SDL_Rect mChtrSheet[20];
	int cX;
	int cY;
	public:
	mainChar();
	bool loadChar();
	bool showChar(int n);
	void moveChar( int direction );
	void getInput();
};

#endif

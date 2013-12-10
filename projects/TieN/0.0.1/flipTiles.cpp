#include "incl.hpp"

void Tiles::flipTiles()
{
	int ID = iMap[cX/32][cY/32];
	cout << "cX " << cX << "     cY " << cY << endl;
	copySurface( cX, cY, tiles, screen, &tPos[ID], true );
}

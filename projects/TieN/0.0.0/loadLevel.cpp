#include "incl.hpp"

void Tiles::loadLevel()
{
    ifstream level("level.tn");
    string tStr;
    int tInt;
    int x = 0, y = 0;
    
    while (level >> tStr)
    {
		tileMap.push_back(tStr);
		
		for( int a = 3 ; a <= tStr.size() ; )
		{
			if( tStr.at(a) != 0 )
			{
				tInt *= 100;
			}
			a++;
			if( tStr.at(a) != 0 )
			{
				tInt = tInt + (tStr.at(a) * 10);
			}
			a++;
			tInt = tInt + tStr.at(a);
			a += 4;
			iMap[x][y];
			x++;
		}
		y++;
		x = 0;
    }
}

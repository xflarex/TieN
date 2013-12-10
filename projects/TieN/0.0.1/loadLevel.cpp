#include "incl.hpp"

void Tiles::loadLevel()
{
    ifstream level("level.tn");
    string tStr;
    int tInt = 0;
    int x = 0, y = 0;
    
    while (level >> tStr)
    {
		tileMap.push_back(tStr);
		//~ cout << tStr << endl << endl;
		//~ cout << tStr.size() << endl;
		
		for( int a = 3 ; a < tStr.size() ; )
		{
			if( tStr.at(a) != 0 )
			{
				tInt = (((int)tStr.at(a) - 48) * 100);
				//~ cout << tStr.at(a) << "  " << tInt << endl;
			}
			a++;
			if( tStr.at(a) != 0 )
			{
				tInt = tInt + (((int)tStr.at(a) - 48) * 10);
				//~ cout << tStr.at(a) << "  " << tInt << endl;
			}
			a++;
			tInt = tInt + ((int)tStr.at(a) - 48);
				//~ cout << tStr.at(a) << "  " << tInt << endl;
			a += 4;
			iMap[x][y] = tInt;
			cout << "iMap[" << x << "][" << y << "] ---- " << iMap[x][y] << endl;
			//~ cout << iMap[39][y] << " " << x << " " << y << endl;
			//~ cout << tInt << endl;
			
			x++;
			tInt = 0;
		}
		y++;
		x = 0;
    }
}

#include "incl.hpp"

void Tiles::loadLevel()
{
    ifstream level("level.tn");
    string tStr;
    int tInt = 0, cInt = 0;
    int x = 0, y = 0;
    
    while (level >> tStr)
    {
		tileMap.push_back(tStr);
		//~ cout << tStr << endl << endl;
		//~ cout << tStr.size() << endl;
		
		for( int a = 1 ; a < tStr.size() ; )
		{
//CONVERT CHAR TO INT
//CONVERT CHAR TO INT
			
				cout << (int)tStr.at(a) << endl;
			if( tStr.at(a) != 0 )
			{
				cInt = (((int)tStr.at(a) - 48) * 10);
				//~ cout << tStr.at(a) << "  " << tInt << endl;
			}
			a++;
			if( tStr.at(a) != 0 )
			{
				cInt = ((int)tStr.at(a) - 48);
				//~ cout << tStr.at(a) << "  " << tInt << endl;
			}
			a++;
			iMap[x][y][1] = cInt;
			if( tStr.at(a) != 0 )
			{
				tInt = (((int)tStr.at(a) - 48) * 100);
				//~ cout << tStr.at(a) << "  " << tInt << endl;
			}
			a++;
				cout << (int)tStr.at(a) << endl;
			if( tStr.at(a) != 0 )
			{
				tInt = tInt + (((int)tStr.at(a) - 48) * 10);
				//~ cout << tStr.at(a) << "  " << tInt << endl;
			}
			a++;
				cout << (int)tStr.at(a) << endl;
			tInt = tInt + ((int)tStr.at(a) - 48);
				//~ cout << tStr.at(a) << "  " << tInt << endl;
				
//END CONVERT CHAR TO INT
//END CONVERT CHAR TO INT
				
			a += 2;
			iMap[x][y][0] = tInt;
			//~ cout << "iMap[" << x << "][" << y << "] ---- " << iMap[x][y][0] << endl;
			//~ cout << iMap[39][y] << " " << x << " " << y << endl;
			//~ cout << tInt << endl;
			
			x++;
			tInt = 0;
		}
		y++;
		x = 0;
    }
}

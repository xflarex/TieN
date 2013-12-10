#include "incl.hpp"

bool loadFile()
{
	ifstream levelFile("./level2.tn");
	string tempLine;
	int tInt = 0;
	
	for( int x = 5, y = 0 ; levelFile >> tempLine ; )
	{
		cout << tempLine << endl;
		while( x < tempLine.size() )
		{
//CONVERT CHAR TO INT
//CONVERT CHAR TO INT
			
				//~ cout << (int)tempLine.at(a) << endl;
			//~ if( tempLine.at(a) != 0 )
			//~ {
				//~ cInt = (((int)tempLine.at(a) - 48) * 10);
				//cout << tempLine.at(a) << "  " << tInt << endl;
				//~ editFile( x, y, 0, 0, cInt );
			//~ }
			//~ a++;
			//~ if( tempLine.at(a) != 0 )
			//~ {
				//~ cInt = ((int)tempLine.at(a) - 48);
				//cout << tempLine.at(a) << "  " << tInt << endl;
				//~ editFile( x, y, 0, 0, cInt );
			//~ }
			//~ a++;
			//~ iMap[x][y][1] = cInt;
			if( tempLine.at(x) != 0 )
			{
				tInt = (((int)tempLine.at(x) - 48) * 100);
				cout << tempLine.at(x) << "  " << tInt << endl;
			}
			x++;
				//~ cout << (int)tempLine.at(x) << endl;
			if( tempLine.at(x) != 0 )
			{
				tInt = tInt + (((int)tempLine.at(x) - 48) * 10);
				cout << tempLine.at(x) << "  " << tInt << endl;
			}
			x++;
				//~ cout << (int)tempLine.at(x) << endl;
			tInt = tInt + ((int)tempLine.at(x) - 48);
				cout << tempLine.at(x) << "  " << tInt << endl;
			editFile( x, y, 0, 0, tInt );
				
//END CONVERT CHAR TO INT
//END CONVERT CHAR TO INT

			x += 6;
		}
		y++;
		x = 0;
	}
}

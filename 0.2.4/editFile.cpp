#include "incl.hpp"

void editFile( int x, int y, int w, int c, int n )
{
	if(tChosen == true)
	{
		int capacity = 8;
		char xChr[4];
		sprintf(xChr,"%d", n);
		
		if( n == 0 )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-1) = xChr[0];
			tileMap.at(y).at((x*capacity)+capacity-2) = '0';
			tileMap.at(y).at((x*capacity)+capacity-3) = '0';
		}
		else if( n < 10 && ( n > 0 ) )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-1) = xChr[0];
			tileMap.at(y).at((x*capacity)+capacity-2) = '0';
			tileMap.at(y).at((x*capacity)+capacity-3) = '0';
		}
		else if( ( n >= 10 ) && ( n < 100 ) )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-1) = xChr[1];
			tileMap.at(y).at((x*capacity)+capacity-2) = xChr[0];
			tileMap.at(y).at((x*capacity)+capacity-3) = '0';
		}
		else if( ( n >= 100) && (n < 1000 ) )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-1) = xChr[2];
			tileMap.at(y).at((x*capacity)+capacity-2) = xChr[1];
			tileMap.at(y).at((x*capacity)+capacity-3) = xChr[0];
		}
		else
		{
			cout << "ERROR @editFile: IT'S OVER 1000!!!!!!!!!!!!" << endl;
		}
		
		//~ //tileMap viewer
		//~ for( int a = 0 ; a < tileMap.size() ; a++ )
		//~ {
			//~ cout << a << " " << tileMap.at(a) << endl;
		//~ }
		//~ cout << endl;
	}
	else if( cChosen == true )
	{
		int capacity = 8;
		char xChr[4];
		sprintf(xChr,"%d", c);
		
		if( c == 0 )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-4) = xChr[0];
			tileMap.at(y).at((x*capacity)+capacity-5) = '0';
		}
		else if( c < 10 && (c > 0) )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-4) = xChr[0];
			tileMap.at(y).at((x*capacity)+capacity-5) = '0';
		}
		else if( ( c >= 10 ) && ( c < 100 ) )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-4) = xChr[1];
			tileMap.at(y).at((x*capacity)+capacity-5) = xChr[0];
		}
		else
		{
			cout << "ERROR: IT'S OVER 100!!!!!!!!!!!!" << endl;
		}
	}
	else if( w != 0 )
	{
		int capacity = 8;
		char xChr[4];
		sprintf(xChr,"%d", w);
		
		if( w == 0 )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-4) = xChr[0];
			tileMap.at(y).at((x*capacity)+capacity-5) = '0';
		}
		else if( w < 10 && (c > 0) )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-4) = xChr[0];
			tileMap.at(y).at((x*capacity)+capacity-5) = '0';
		}
		else if( ( w >= 10 ) && ( w < 10 ) )
		{
			cout << "y: " << y << "x: " << x << endl;
			tileMap.at(y).at((x*capacity)+capacity-4) = xChr[1];
			tileMap.at(y).at((x*capacity)+capacity-5) = xChr[0];
		}
		else
		{
			cout << "ERROR: IT'S OVER 100!!!!!!!!!!!!" << endl;
		}
	}
	else
	{
		cout << "ERROR @ editFile 1000" << endl;
	}
}

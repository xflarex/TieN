#include "incl.hpp"

void newFile()
{
	int h = (SCREEN_HEIGHT / tPx);
	int w = (SCREEN_WIDTH / tPx);
	int capacity = 8;
	char cZeros[w*capacity];
	cout << sizeof(cZeros) << endl;
	string sZeros;
	
	for( int a = 0 ; a < w*capacity ; a++ )
	{
		//marker
		cZeros[a] = ',';
		a++;
		//tile: 100s place
		cZeros[a] = '0';
		a++;
		//tile: 10s place
		cZeros[a] = '0';
		a++;
		//tile: 1s place
		cZeros[a] = '0';
		a++;
		//tile: collision state 10s place
		cZeros[a] = '0';
		a++;
		//tile: collision state: '0' == no collision
		cZeros[a] = '0';
		a++;
		//tile: wildcard event 10s place
		cZeros[a] = '0';
		a++;
		//tile: wildcard event(e.g. predetermined battle)
		cZeros[a] = '0';
		
		cout << "cZeros[a] = " << cZeros[a] << " :: " << a << endl;
	}
	cZeros[sizeof(cZeros)] = 0 ;
	sZeros = cZeros;
	cout << sZeros << endl;
	
	for( int a = 0 ; a < h ; a++ )
	{
		tileMap.push_back(sZeros);
	}
	
	
	
	//~ //tileMap viewer
	//~ for( int a = 0 ; a < tileMap.size() ; a++ )
	//~ {
		//~ cout << a << " " << tileMap.at(a) << endl;
	//~ }
}

#include "incl.hpp"

void saveFile()
{
	ofstream output_file("./level2.tn");
	ostream_iterator<string> output_iterator(output_file, "\n");
	copy(tileMap.begin(), tileMap.end(), output_iterator);
}

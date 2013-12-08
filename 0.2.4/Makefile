#compiler
CC = g++
#compiler flags
CFLAGS = -g -Wall
#includes
INCLUDES = -I/usr/include
#library paths
LDFLAGS = $('pkg-config sdl --cflags --libs')
#libraries
LIBS = -lSDL -lSDL_image -lSDL_ttf -lSDL_gfx
#executable file
TARGET = main
#sources
SOURCES = main.cpp init.cpp loadTiles.cpp tiles.cpp timer.cpp grid.cpp clean_up.cpp leftPressed.cpp leftDrag.cpp getInput.cpp load_image.cpp copySurface.cpp editFile.cpp loadFile.cpp mouseSelection.cpp newFile.cpp saveFile.cpp tileView.cpp collisionView.cpp cyanTransparency.cpp
#objects
OBJECTS=$(SOURCES:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $(TARGET) $(SOURCES) $(CFLAGS) $(INCLUDES) $(LDFLAGS) $(LIBS)

.cpp.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

clean:
	$(RM) *.o *~ $(TARGET)

depend: $(SOURCES)
	makedepend $(INCLUDES) $^

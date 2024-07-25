input = bird.cpp game.cpp land.cpp main.cpp pipe.cpp texture.cpp sound.cpp
output = test

include = "-ISDL\INCLUDE"
lib = "-LSDL\LIB"

arg = -w "-Wl,-subsystem,windows"
linker = -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer

aaa:
	g++ $(input) $(include) $(lib) $(arg) $(linker) -o $(output)
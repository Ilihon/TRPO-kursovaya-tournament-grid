DIR_BIN = ./bin
DIR_BUILD = ./build
DIR_SRC = ./src

.PHONY: clean format all run

all: $(DIR_BIN)/main

$(DIR_BIN)/main: $(DIR_BUILD)/main.o $(DIR_BUILD)/menu.o $(DIR_BUILD)/draw.o $(DIR_BUILD)/steam.o $(DIR_BUILD)/column.o
	g++ -Wall -Werror -o $(DIR_BIN)/main $(DIR_BUILD)/main.o $(DIR_BUILD)/menu.o $(DIR_BUILD)/draw.o $(DIR_BUILD)/steam.o $(DIR_BUILD)/column.o -lsfml-graphics -lsfml-window -lsfml-system
$(DIR_BUILD)/main.o: $(DIR_SRC)/main.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/main.o -c $(DIR_SRC)/main.cpp -lsfml-graphics -lsfml-window -lsfml-system
$(DIR_BUILD)/menu.o: $(DIR_SRC)/menu.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/menu.o -c $(DIR_SRC)/menu.cpp -lsfml-graphics -lsfml-window -lsfml-system
$(DIR_BUILD)/draw.o: $(DIR_SRC)/draw.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/draw.o -c $(DIR_SRC)/draw.cpp -lsfml-graphics -lsfml-window -lsfml-system
$(DIR_BUILD)/steam.o: $(DIR_SRC)/steam.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/steam.o -c $(DIR_SRC)/steam.cpp -lsfml-graphics -lsfml-window -lsfml-system
$(DIR_BUILD)/column.o: $(DIR_SRC)/column.cpp
	g++ -Wall -Werror -o $(DIR_BUILD)/column.o -c $(DIR_SRC)/column.cpp -lsfml-graphics -lsfml-window -lsfml-system

run: all
	$(DIR_BIN)/main

clean:
	rm -f $(DIR_BIN)/main
	rm -f $(DIR_BUILD)/*.o
	

#ifndef MENU_H
#define MENU_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int svit;
extern int winner_pos;
extern char winner[30];

using namespace sf;
using namespace std;

void menu(RenderWindow& window);

#endif

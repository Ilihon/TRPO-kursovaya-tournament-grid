#ifndef DRAW_H
#define DRAW_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace sf;
using namespace std;

void draw(
        RenderWindow& window,
        char* team[],
        Font font,
        int size,
        int a[],
        int b[],
        char* rnd2[]);

#endif

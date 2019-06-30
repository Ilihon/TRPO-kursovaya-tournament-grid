#ifndef COLUMN_H
#define COLUMN_H

#include "draw.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace sf;
using namespace std;

int column(
        RenderWindow& window,
        char* team[],
        Font font,
        int size,
        char* rnd2[],
        char* rnd3[],
        char* rnd4[],
        char* rnd5[],
        int a1[],
        int b2[],
        int c3[],
        int d4[],
        int r2,
        int r3,
        int r4,
        int r5);

#endif

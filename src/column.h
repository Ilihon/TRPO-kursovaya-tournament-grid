#ifndef COLUMN_H
#define COLUMN_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "draw.h"

using namespace sf;
using namespace std;

void column(
        RenderWindow& window,
        char* team[],
        Font font,
        int size,
        char* rnd2[],
        char* rnd3[],
        char* rnd4[],
        char* rnd5[],
        int a[],
        int b[],
        int c3[],
        int d[],
        int r2,
        int r3,
        int r4,
        int r5);

#endif

#include "column.h"

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
        int r5)
{
    if (Keyboard::isKeyPressed(Keyboard::Return)) {
        int t = 36, c = 0, x = 0, newsize = size, t2 = 1;
        Text text("", font, 10);
        text.setFillColor(Color::Red);
        draw(window, team, font, size, a, b, rnd2);
        window.display();

        if (size % 2 == 1)
            newsize = size / 2 + 1;
        else if (size == 2)
            newsize = 0;
        else
            newsize = size / 2;

        a[0] = 0;
        for (int i = 1; i < size + 1; i++) {
            if ((a[i] != 0) && (x < newsize) && (a[i] < 1000) && (a[i] > -1)) {
                if (c == 2) {
                    t += 61;
                    c = 0;
                }

                for (int j = 1; j < 1000000; j++) {
                    j = j;
                }

                text.setString(rnd2[a[i]]);
                text.setPosition(280, t);
                rnd3[t2] = rnd2[a[i]];

                window.draw(text);
                window.display();

                t += 25;
                c++;
                x++;
                t2++;
            }
        }
        if (r2 > 0)
            r3 = 1;

        if (r3 == 1) {
            int t = 1, c = 0, x = 0, newsize = size, t2 = 0;

            Text text("", font, 10);
            text.setFillColor(Color::Red);
            if ((size % 4 < 4) && (size != 4) && (size != 8) && (size != 12)
                && (size != 16) && (size != 20) && (size != 24) && (size != 28)
                && (size != 32) && (size > 4))
                newsize = size / 4 + 1;
            else if (size > 4)
                newsize = size / 4;
            else
                newsize = size / 4 - 1;
            c = 0;
            t2 = 97;

            for (int i = 1; i < (size); i++) {
                if ((b[i] != 0) && (x < newsize)) {
                    if (c == 2) {
                        t2 += 169;
                        c = 0;
                    }

                    for (int j = 1; j < 1000000; j++) {
                        j = j;
                    }

                    text.setString(rnd3[b[i]]);
                    text.setPosition(540, t2);
                    rnd4[t] = rnd3[b[i]];

                    window.draw(text);
                    window.display();

                    c++;
                    t2 += 25;
                    t++;
                }
            }
            r3 = 2;
        }
        if ((r3 == 2) && (r4 > 0)) {
            int t = 1, c = 0, x = 0, newsize = size, t2 = 1;

            if ((size % 8 < 8) && (size > 4) && (size != 8) && (size != 16)
                && (size != 24) && (size != 32) && (size > 8))
                newsize = size / 8 + 1;
            else if (size > 8)
                newsize = size / 8;
            else
                newsize = size / 8 - 1;
            c = 0;
            t = 205;
            for (int i = 1; i < (size); i++) {
                if ((c3[i] != 0) && (x < newsize)) {
                    if (c == 2) {
                        t += 389;
                        c = 0;
                    }

                    for (int j = 1; j < 1000000; j++) {
                        j = j;
                    }

                    text.setString(rnd4[c3[i]]);
                    text.setPosition(808, t);
                    rnd5[t2] = rnd4[c3[i]];

                    window.draw(text);
                    window.display();

                    c++;
                    t += 25;
                    t2++;
                }
            }
            r4 = 2;
        }
        if ((r4 == 2) && (r5 > 0)) {
            if (size > 16)
                newsize = 2;
            else
                newsize = 0;

            t = 423;
            x = 0;
            for (int i = 1; i < size; i++) {
                if ((d[i] != 0) && (x < newsize)) {
                    for (int j = 1; j < 1000000; j++) {
                        j = j;
                    }

                    text.setString(rnd5[d[i]]);
                    text.setPosition(1008, t);

                    window.draw(text);
                    window.display();

                    t += 25;
                    x++;
                }
            }
        }
    }
}


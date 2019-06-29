#include "draw.h"

void draw(RenderWindow& window, char* team[], Font font, int size, int a[], int b[], char* rnd2[])
{
    int m = 10, t = 36; //переменные используемые в отрисовке сетке,
                        //для увелечения дистанции мду элементами

    int c = 0, newsize = size; // счетчик, оторые исп для рисования ячеек
    int stop = 0; //Для остановки циклов

    Text text("", font, 10);
    text.setFillColor(Color::Red);

    RectangleShape rectangle(Vector2f(182, 20));
    rectangle.setFillColor(Color::Green);
    RectangleShape kvad(Vector2f(20, 20));
    kvad.setFillColor(Color::Black);

    // отрисовка 1го столбца------------------------------
    for (int i = 1; i < size + 1; i++) {
        if (c == 2) {
            m += 7;
            c = 0;
        }
        for (int j = 1; j < 1000000; j++) {
            j = j;
        }

        text.setString(team[i]);
        text.setPosition(20, m);

        rnd2[i] = team[i];

        rectangle.setFillColor(Color::Green);
        rectangle.setPosition(18, m);

        window.draw(rectangle);
        window.draw(text);

        window.display();

        m += 24;
        c++;
    }

    // отрисовка 2го столбца------------------------------
    if (stop == 0) {
        if (size % 2 == 1)
            newsize = size / 2 + 1;
        else if (size == 2)
            newsize = 0;
        else
            newsize = size / 2;

        c = 0;
        for (int i = 0; i < (newsize); i++) {
            if (c == 2) {
                t += 61;
                c = 0;
            }

            for (int j = 1; j < 1000000; j++) {
                j = j;
            }

            rectangle.setFillColor(Color::Green);
            rectangle.setPosition(278, t);

            window.draw(rectangle);
            window.display();
            c++;
            t += 25;
        }
        stop = 1;
    }

    //отрисовка 3го столбца--------------------------------
    if (stop == 1) {
        if ((size % 4 < 4) && (size != 4) && (size != 8) && (size != 12)
            && (size != 16) && (size != 20) && (size != 24) && (size != 28)
            && (size != 32) && (size > 4))
            newsize = size / 4 + 1;
        else if (size > 4)
            newsize = size / 4;
        else
            newsize = size / 4 - 1;
        c = 0;
        t = 97;
        for (int i = 0; i < (newsize); i++) {
            if (c == 2) {
                t += 169;
                c = 0;
            }

            for (int j = 1; j < 1000000; j++) {
                j = j;
            }

            rectangle.setFillColor(Color::Green);
            rectangle.setPosition(538, t);

            window.draw(rectangle);
            window.display();
            c++;
            t += 25;
        }
        stop = 2;
    }
    //отрисовка 4го столбца--------------------------------
    if (stop == 2) {
        if ((size % 8 < 8) && (size > 8) && (size != 8) && (size != 16)
            && (size != 24) && (size != 32))
            newsize = size / 8 + 1;
        else if (size > 8)
            newsize = size / 8;
        else
            newsize = size / 8 - 1;
        c = 0;
        t = 205;
        for (int i = 0; i < newsize; i++) {
            if (c == 2) {
                t += 389;
                c = 0;
            }

            for (int j = 1; j < 1000000; j++) {
                j = j;
            }

            rectangle.setFillColor(Color::Green);
            rectangle.setPosition(808, t);

            window.draw(rectangle);
            window.display();
            c++;
            t += 25;
        }
        stop = 3;
    }
    //отрисовка 5го столбца--------------------------------
    int i = 0;
    if (size > 16)
        newsize = 2;
    else
        newsize = 0;

    if ((stop == 3) && (i < newsize)) {
        t = 423;
        for (int i = 0; i < newsize; i++) {
            for (int j = 1; j < 1000000; j++) {
                j = j;
            }

            rectangle.setFillColor(Color::Green);
            rectangle.setPosition(1008, t);

            window.draw(rectangle);
            window.display();
            t += 25;
        }
    }
    //конец---отрисовки----------------------------------------
}

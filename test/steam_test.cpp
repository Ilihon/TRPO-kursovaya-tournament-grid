#include "steam_test.h"

int steam(RenderWindow& window, int size, Vector2i position)
{
    bool isMenu = 1;
    int teamnum = -1;
    int t = 10;
    int c = 0;
    int newsize = size;

    RectangleShape kvad(Vector2f(20, 20));
    kvad.setFillColor(Color::Black);

    while (isMenu) {
        //проверка 1го столбца-------------------------------
        for (int i = 0; i < size; i++) {
            if (c == 2) {
                t += 7;
                c = 0;
            }

            if (IntRect(18, t, 182, 22).contains(position)) {
                teamnum = i;

                if (c == 0) { // первый опонент

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(200, t);
                    window.draw(kvad);

                    if (i != size - 1) {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(200, t + 24);
                        window.draw(kvad);
                    }

                } else if (c == 1) { // второй опонент

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(200, t);
                    window.draw(kvad);

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(200, t - 24);
                    window.draw(kvad);
                }
                isMenu = false;
                return (teamnum);
            }

            t += 24;
            c++;
        }
        //--------------------------------------------------

        t = 36;
        newsize = (size + 1) / 2;
        c = 0;

        //проверка 2го столбца-------------------------------
        for (int i = 0; i < newsize; i++) {
            if (c == 2) {
                t += 61;
                c = 0;
            }

            if (IntRect(278, t, 182, 22).contains(position)) {
                teamnum = i + 100;

                if (c == 0) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(460, t);
                    window.draw(kvad);

                    if (i != newsize - 1) {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(460, t + 25);
                        window.draw(kvad);
                    }

                } else if (c == 1) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(460, t);
                    window.draw(kvad);

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(460, t - 25);
                    window.draw(kvad);
                }
                isMenu = false;
                return (teamnum);
            }

            t += 25;
            c++;
        }
        //--------------------------------------------------

        newsize = (newsize + 1) / 2;
        c = 0;
        t = 97;

        //проверка 3го столбца-------------------------------
        for (int i = 0; i < newsize; i++) {
            if (c == 2) {
                t += 169;
                c = 0;
            }

            if (IntRect(538, t, 182, 22).contains(position)) {
                teamnum = i + 200;

                if (c == 0) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(720, t);
                    window.draw(kvad);

                    if (i != newsize - 1) {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(720, t + 25);
                        window.draw(kvad);
                    }

                } else if (c == 1) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(720, t);
                    window.draw(kvad);

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(720, t - 25);
                    window.draw(kvad);
                }
                isMenu = false;
                return (teamnum);
            }

            c++;
            t += 25;
        }
        //--------------------------------------------------

        newsize = (newsize + 1) / 2;
        c = 0;
        t = 205;

        //проверка 4го столбца-------------------------------
        for (int i = 0; i < newsize; i++) {
            if (c == 2) {
                t += 389;
                c = 0;
            }

            if (IntRect(808, t, 182, 22).contains(position)) {
                teamnum = i + 300;

                if (c == 0) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(990, t);
                    window.draw(kvad);

                    if (i != (newsize - 1)) {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(990, t + 25);
                        window.draw(kvad);
                    }

                } else if (c == 1) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(990, t);
                    window.draw(kvad);

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(990, t - 25);
                    window.draw(kvad);
                }
                isMenu = false;
                return (teamnum);
            }
            c++;
            t += 25;
        }
        //--------------------------------------------------

        newsize = (newsize + 1) / 2;
        t = 423;
        c = 0;

        //проверка 5го столбца-------------------------------
        for (int i = 0; i < newsize; i++) {
            if (IntRect(1008, t, 182, 22).contains(position)) {
                teamnum = i + 400;

                if (c == 0) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(1190, t);
                    window.draw(kvad);

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(1190, t + 25);
                    window.draw(kvad);

                } else if (c == 1) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(1190, t);
                    window.draw(kvad);

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(1190, t - 25);
                    window.draw(kvad);
                }
                isMenu = false;
                return (teamnum);
            }
            t += 25;
            c++;
        }

        //  if (Mouse::isButtonPressed(Mouse::Left)) {
        isMenu = false;
        return (teamnum);
        //  }
    }
    return -1;
}

#include "steam.h"

int steam(RenderWindow& window, int size)
{
    bool isMenu = 1;
    int teamnum = 0;
    int m = 10, t = 36;
    int c = 0;
    int newsize = size;

    RectangleShape kvad(Vector2f(20, 20));
    kvad.setFillColor(Color::Black);

    while (isMenu) {
        for (int i = 1; i < size + 1; i++) {
            if (c == 2) {
                m += 7;
                c = 0;
            }

            kvad.setFillColor(Color::Black);

            if ((IntRect(18, m, 182, 22).contains(Mouse::getPosition(window)))
                && (size > 1)) {
                teamnum = i;

                if (c % 2 == 0) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(200, m);

                    window.draw(kvad);
                    window.display();

                    if (size % 2 == 1) {
                        if (i != size) {
                            kvad.setFillColor(Color::Black);
                            kvad.setPosition(200, m + 24);

                            window.draw(kvad);
                            window.display();
                        }
                    } else {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(200, m + 24);

                        window.draw(kvad);
                        window.display();
                    }

                } else if (c % 2 == 1) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(200, m);

                    window.draw(kvad);
                    window.display();

                    if (size % 2 == 1) {
                        if (i != size) {
                            kvad.setFillColor(Color::Black);
                            kvad.setPosition(200, m - 24);

                            window.draw(kvad);
                            window.display();
                        }
                    } else {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(200, m - 24);

                        window.draw(kvad);
                        window.display();
                    }
                }
                isMenu = false;
                return (teamnum);
            }

            m += 24;
            c++;
        }

        if (size % 2 == 1)
            newsize = size / 2 + 1;
        else
            newsize = size / 2;
        c = 0;

        for (int i = 0; i < (newsize); i++) {
            if (c == 2) {
                t += 61;
                c = 0;
            }

            if ((IntRect(278, t, 182, 22).contains(Mouse::getPosition(window)))
                && (size > 1)) {
                teamnum = i + 101;

                if (c % 2 == 0) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(460, t);

                    window.draw(kvad);
                    window.display();

                    if (newsize % 2 == 1) {
                        if (i != (newsize - 1)) {
                            kvad.setFillColor(Color::Black);
                            kvad.setPosition(460, t + 25);

                            window.draw(kvad);
                            window.display();
                        }
                    } else {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(460, t + 25);

                        window.draw(kvad);
                        window.display();
                    }

                } else if (c % 2 == 1) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(460, t);

                    window.draw(kvad);
                    window.display();

                    if (newsize % 2 == 1) {
                        if (i != (newsize - 1)) {
                            kvad.setFillColor(Color::Black);
                            kvad.setPosition(460, t - 25);

                            window.draw(kvad);
                            window.display();
                        }
                    } else {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(460, t - 25);

                        window.draw(kvad);
                        window.display();
                    }
                }
                isMenu = false;
                return (teamnum);
            }

            c++;
            t += 25;
        }

        if ((size % 4 < 4) && (size != 4) && (size != 8) && (size != 12)
            && (size != 16) && (size != 20) && (size != 24) && (size != 28)
            && (size != 32))
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

            if ((IntRect(538, t, 182, 22).contains(Mouse::getPosition(window)))
                && (size > 1)) {
                teamnum = i + 201;

                if (c % 2 == 0) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(720, t);

                    window.draw(kvad);
                    window.display();

                    if (newsize % 2 == 1) {
                        if (i != (newsize - 1)) {
                            kvad.setFillColor(Color::Black);
                            kvad.setPosition(720, t + 25);

                            window.draw(kvad);
                            window.display();
                        }
                    } else {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(720, t + 25);

                        window.draw(kvad);
                        window.display();
                    }

                } else if (c % 2 == 1) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(720, t);

                    window.draw(kvad);
                    window.display();

                    if (newsize % 2 == 1) {
                        if (i != (newsize - 1)) {
                            kvad.setFillColor(Color::Black);
                            kvad.setPosition(720, t - 25);

                            window.draw(kvad);
                            window.display();
                        }
                    } else {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(720, t - 25);

                        window.draw(kvad);
                        window.display();
                    }
                }
                isMenu = false;
                return (teamnum);
            }

            c++;
            t += 25;
        }

        if ((size % 8 < 8) && (size > 4) && (size != 8) && (size != 16)
            && (size != 24) && (size != 32))
            newsize = size / 8 + 1;
        else if (size > 8)
            newsize = size / 8;
        else
            newsize = size / 8 - 1;
        c = 0;
        t = 205;
        for (int i = 0; i < (newsize); i++) {
            if (c == 2) {
                t += 389;
                c = 0;
            }

            if ((IntRect(808, t, 182, 22).contains(Mouse::getPosition(window)))
                && (size > 1)) {
                teamnum = i + 301;

                if (c % 2 == 0) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(990, t);

                    window.draw(kvad);
                    window.display();

                    if (newsize % 2 == 1) {
                        if (i != (newsize - 1)) {
                            kvad.setFillColor(Color::Black);
                            kvad.setPosition(990, t + 25);

                            window.draw(kvad);
                            window.display();
                        }
                    } else {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(990, t + 25);

                        window.draw(kvad);
                        window.display();
                    }

                } else if (c % 2 == 1) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(990, t);

                    window.draw(kvad);
                    window.display();

                    if (newsize % 2 == 1) {
                        if (i != (newsize - 1)) {
                            kvad.setFillColor(Color::Black);
                            kvad.setPosition(990, t - 25);

                            window.draw(kvad);
                            window.display();
                        }
                    } else {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(990, t - 25);

                        window.draw(kvad);
                        window.display();
                    }
                }
                isMenu = false;
                return (teamnum);
            }

            c++;
            t += 25;
        }

        if (size > 16)
            newsize = 2;
        else
            newsize = 0;

        t = 423;
        c = 0;
        for (int i = 0; i < newsize; i++) {
            if ((IntRect(1008, t, 182, 22).contains(Mouse::getPosition(window)))
                && (size > 1)) {
                if (c % 2 == 0) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(1190, t);

                    window.draw(kvad);
                    window.display();

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(1190, t + 25);

                    window.draw(kvad);
                    window.display();

                } else if (c % 2 == 1) {
                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(1190, t);

                    window.draw(kvad);
                    window.display();

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(1190, t - 25);

                    window.draw(kvad);
                    window.display();
                }
                isMenu = false;
                return (teamnum);
            }
            t += 25;
            c++;
        }

        if (Mouse::isButtonPressed(Mouse::Left)) {
            isMenu = false;
            return (teamnum);
        }
    }
    return 0;
}

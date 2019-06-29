#include "menu.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace sf;
using namespace std;

int steam(RenderWindow& window, int size);
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

int main()
{
    /////////////////
    setlocale(LC_ALL, "Rus");

    cout << "Enter team num(1-32): ";
sno:
    int size = 0; //кол-во комманд

    char** team;
    char** rnd2;
    char** rnd3;
    char** rnd4;
    char** rnd5;
    int x = 2, /*c = 1,*/ r2 = 0, r3 = 0, r4 = 0, r5 = 0, R = 0;

    string buffer = "";
    //  cin >> size;

    while (true) {
        getline(cin, buffer);

        // Безопасный перевод из строки в число.
        stringstream myStream(buffer);
        if ((myStream >> size))
            break;
        // cout << "Неверный ввод, повторите..." << endl;
        puts("Uncorrect team count!");
        puts("Please try again!");
    }

    if (size < 2 || size > 32) {
        puts("Uncorrect team count!");
        puts("Please try again!");
        goto sno;
    }

    team = new char*[size];

//сгенерировать или считать имена комманд
yes:
    cout << "Enter team names? (y/n) \n";
    char g = '0'; //
    cin >> g;
    if ((g != 'y') && (g != 'n')) {
        cout << "Yes OR Not?\n";
        goto yes;
    }

    if (g == 'y') { //считываем имена комманд
        for (int i = 0; i < size + 1; i++) {
            team[i] = new char[30];
            if (team[i] == NULL) {
                printf("Failed to allocate memory");
                return 1; // выход по ошибке, код ошибки 1
            }
            cin.getline(team[i], 30);
        }
    } else { //генерируем имена комманд
        for (int i = 0; i < size + 1; i++) {
            team[i] = new char[30];
            if (team[i] == NULL) {
                printf("Failed to allocate memory");
                return 1; // выход по ошибке, код ошибки 1
            }
            char str[30] = "TeamNum";
            char num[30];
            sprintf(num, "%d", i);
            strcat(str, num);
            strcpy(team[i], str);
        }
    }

    //////////////

    int a[size + 1], b[size], c3[size], d[size];
    for (int i = 0; i < size; i++) {
        a[i] = 0;
        b[i] = 0;
        c3[i] = 0;
        d[i] = 0;
    }
    a[size + 1] = 0;

    rnd2 = new char*[size];

    /////////////////проверка на выделение памяти
    if (rnd2 == NULL) {
        printf("Failed to allocate memory");
        return 1; // выход по ошибке, код ошибки 1
    }

    rnd3 = new char*[size];

    /////////////////проверка на выделение памяти
    if (rnd3 == NULL) {
        printf("Failed to allocate memory");
        return 1; // выход по ошибке, код ошибки 1
    }

    rnd4 = new char*[size];

    /////////////////проверка на выделение памяти
    if (rnd4 == NULL) {
        printf("Failed to allocate memory");
        return 1; // выход по ошибке, код ошибки 1
    }

    rnd5 = new char*[size];

    /////////////////проверка на выделение памяти
    if (rnd5 == NULL) {
        printf("Failed to allocate memory");
        return 1; // выход по ошибке, код ошибки 1
    }

    for (int i = 0; i < size; i++) {
        rnd2[i] = new char[30];

        /////////////////проверка на выделение памяти
        if (rnd2[i] == NULL) {
            printf("Failed to allocate memory");
            return 1; // выход по ошибке, код ошибки 1
        }

        rnd3[i] = new char[30];

        /////////////////проверка на выделение памяти
        if (rnd3[i] == NULL) {
            printf("Failed to allocate memory");
            return 1; // выход по ошибке, код ошибки 1
        }

        rnd4[i] = new char[30];

        /////////////////проверка на выделение памяти
        if (rnd4[i] == NULL) {
            printf("Failed to allocate memory");
            return 1; // выход по ошибке, код ошибки 1
        }

        rnd5[i] = new char[30];

        /////////////////проверка на выделение памяти
        if (rnd5[i] == NULL) {
            printf("Failed to allocate memory");
            return 1; // выход по ошибке, код ошибки 1
        }

        *rnd2[i] = ' ';
        *rnd3[i] = ' ';
        *rnd4[i] = ' ';
        *rnd5[i] = ' ';
    }

    RenderWindow window(VideoMode(1500, 900), "Menu");

    Texture men;
    men.loadFromFile("images/loading.jpg");
    Sprite menu1(men);

    Font font;
    font.loadFromFile("font/ubuntu.ttf");

    RectangleShape rectangle(Vector2f(182, 20));
    rectangle.setFillColor(Color::Green);

    Text text("", font, 40), text2("", font, 20);
    text.setFillColor(Color::Red);
    text.setStyle(Text::Bold);
    text.setString("Press SPACE to start");
    text.setPosition(900, 200);

    window.clear();
    window.draw(menu1);
    window.draw(text);
    window.display();

    // int cot = 0;

    while (window.isOpen()) {
        Event event;

        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();

            if (event.type == Event::KeyPressed)
                if ((event.key.code == Keyboard::Space)) {
                Again:
                    menu(window);

                    Text text("", font, 10);
                    text.setFillColor(Color::Red);

                    draw(window, team, font, size, a, b, rnd2);
                    break;
                }

            if (Keyboard::isKeyPressed(Keyboard::Escape))
                goto Again;
            if (Mouse::isButtonPressed(Mouse::Left)) {
                x = steam(window, size);

                // 1rst column--------------
                if (x < 33) {
                    x = x % 100;
                    int pl = 0;
                    pl = x;
                    if (pl % 2 == 0)
                        pl = pl / 2;
                    else
                        pl = (pl / 2) + 1;

                    a[pl] = x;
                }

                // 2nd column--------------
                if ((x > 99) && (x < 118)) {
                    x = x % 100;
                    int pl = 0;
                    pl = x;
                    if (pl % 2 == 0)
                        pl = pl / 2;
                    else
                        pl = (pl / 2) + 1;

                    b[pl] = x;
                    r2++;
                }

                // 3rd column--------------
                if ((x > 199) && (x < 218)) {
                    x = x % 100;
                    int pl = 0;
                    pl = x;
                    if (pl % 2 == 0)
                        pl = pl / 2;
                    else
                        pl = (pl / 2) + 1;

                    c3[pl] = x;
                    r4++;
                }

                // 4th column--------------
                if ((x > 299) && (x < 318)) {
                    x = x % 100;
                    int pl = 0;
                    pl = x;
                    if (pl % 2 == 0)
                        pl = pl / 2;
                    else
                        pl = (pl / 2) + 1;

                    d[pl] = x;
                    r5++;
                }

                break;
            }
            for (R = 0; R < 1000; R++)
                R = R;
            R = 0;
            column(window,
                   team,
                   font,
                   size,
                   rnd2,
                   rnd3,
                   rnd4,
                   rnd5,
                   a,
                   b,
                   c3,
                   d,
                   r2,
                   r3,
                   r4,
                   r5);
        }
    }

    return 0;
}

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
        // window.clear();
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

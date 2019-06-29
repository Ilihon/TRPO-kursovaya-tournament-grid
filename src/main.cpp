#include "column.h"
#include "draw.h"
#include "menu.h"
#include "steam.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace sf;
using namespace std;

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

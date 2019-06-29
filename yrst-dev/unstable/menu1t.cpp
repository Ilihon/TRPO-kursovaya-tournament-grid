#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace sf;
using namespace std;

void menu(RenderWindow& window);
void draw(
        RenderWindow& window,
        char* team[],
        Font font,
        int size,
        int a[],
        int b[],
        char* rnd2[]);
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
    int size; //кол-во комманд
    cin >> size;

    char** team;
    char** rnd2;
    char** rnd3;
    char** rnd4;
    char** rnd5;
    int x = 2, c = 1, r2 = 0, r3 = 0, r4 = 0, r5 = 0, R = 0;

    while (size < 1 || size > 32) {
        puts("Uncorrect team count!");
        puts("Please try again!");
        scanf("%d", &size);
    }

    team = new char*[size];

    //сгенерировать или считать имена комманд
    cout << "Enter team names? (y/n) \n";
    char g = '0'; //
    cin >> g;
    while ((g != 'y') && (g != 'n')) {
        cout << "Yes OR Not?\n";
        cin >> g;
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
    font.loadFromFile("ubuntu.ttf");

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
                    /*if (x % 2 == 1) {
                        rnd2[x] = team[x];

                        a[x] = 1;
                        a[x + 1] = 0;
                    } else {
                        rnd2[x] = team[x];

                        a[x] = 1;
                        a[x - 1] = 0;
                    }*/

                    x = x % 100;
                    int empty = x, pl = 0;
                    pl = x;
                    if (pl % 2 == 0)
                        pl = pl / 2;
                    else
                        pl = (pl / 2) + 1;
                    printf("%d\n", pl);
                    a[pl] = x;
                }

                // 2nd column--------------
                if ((x > 99) && (x < 118)) {
                    x = x % 100;
                    int empty = x, pl = 0;
                    pl = x;
                    if (pl % 2 == 0)
                        pl = pl / 2;
                    else
                        pl = (pl / 2) + 1;
                    printf("%d\n", pl);
                    b[pl] = x;
                    r2++;
                }

                // 3rd column--------------
                if ((x > 199) && (x < 218)) {
                    x = x % 100;
                    int empty = x, pl = 0;
                    pl = x;
                    if (pl % 2 == 0)
                        pl = pl / 2;
                    else
                        pl = (pl / 2) + 1;
                    printf("%d\n", pl);
                    c3[pl] = x;
                    r4++;
                }

                // 4th column--------------
                if ((x > 299) && (x < 318)) {
                    x = x % 100;
                    int empty = x, pl = 0;
                    pl = x;
                    if (pl % 2 == 0)
                        pl = pl / 2;
                    else
                        pl = (pl / 2) + 1;
                    printf("%d\n", pl);
                    d[pl] = x;
                    r5++;
                }

                printf("GOTCHA\n");
                break;
            }
            //  draw(window, team, font, size, a, b);
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

                printf("%d\n AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n",
                       a[i]);
                printf("%d\n IIIIIIIIIIIIIIIIIIIIIIIIIII", i);
                text.setString(rnd2[a[i]]);
                text.setPosition(280, t);
                rnd3[t2] = rnd2[a[i]];
                printf("%s\n", rnd3[t2]);
                printf("%d\n", t2);

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
                    printf("%s 4rd\n", rnd4[t]);
                    printf("%d 4rd\n", t);

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
                    printf("%s 55rd\n", rnd5[t2]);
                    printf("%d 55rd\n", t2);

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

void(draw)(
        RenderWindow& window,
        char* team[],
        Font font,
        int size,
        int a[],
        int b[],
        char* rnd2[])
{
    // window.clear();

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
            /*  kvad.setFillColor(Color::Black);
              kvad.setPosition(990, t);

              window.draw(kvad);*/
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

void menu(RenderWindow& window)
{
    window.clear();

    Texture menuTexture1, menuTexture2, menuTexture3, menuBackground;
    menuTexture1.loadFromFile("images/1111.png");
    menuTexture2.loadFromFile("images/2222.png");
    menuTexture3.loadFromFile("images/3333.png");
    menuBackground.loadFromFile("images/fon.png");

    Font font;
    font.loadFromFile("ubuntu.ttf");

    Text text("", font, 40), text2("", font, 20), text3("", font, 20),
            text4("", font, 20), text5("", font, 20);
    text.setFillColor(Color::Red);
    text2.setFillColor(Color::Red);
    text.setStyle(Text::Bold);
    text3.setFillColor(Color::Red);
    text4.setFillColor(Color::Red);
    text5.setFillColor(Color::Red);

    text.setString("Tournament Grid");
    text2.setString(
            "                             ABOUT PROGRAMM\n\n This program is "
            "an "
            "Olympic tournament grid "
            "generator.\n Control is carried out by pressing the LMB on the "
            "chase with the command that you want to advance further.\nIn "
            "order to advance the teams to the next round, it is necessary to "
            "press the enter key.\nThe menu is returned by pressing the ESC "
            "key.\n \n                             "
            "IMPORTANT!!\n\nBefore you advance the team "
            "further - make sure that you have selected all the winners in the "
            "current column,\n only in this case you can press the enter key.");
    text3.setString("Creators:\n IP-813 Stoyak Yuri\n IP-813 Burdukovsky Ilya");
    text4.setString(" - Start's the grid generator.");
    text5.setString(" - Read the info about programm first.");

    text.setPosition(550, 100);

    Sprite menu1(menuTexture1), menu2(menuTexture2), menu3(menuTexture3),
            menuBg(menuBackground);

    bool isMenu = 1;
    int menuNum = 0, fon = 0;

    menu1.setPosition(620, 200);
    menu2.setPosition(620, 250);
    menu3.setPosition(630, 350);
    menuBg.setPosition(1200, 710);

    text4.setPosition(750, 205);
    text5.setPosition(755, 255);

    while (isMenu) {
        menu1.setColor(Color::White);
        menu2.setColor(Color::White);
        menu3.setColor(Color::White);
        menuNum = 0;
        window.clear(Color(8, 186, 222));

        if (IntRect(620, 200, 125, 50).contains(Mouse::getPosition(window))) {
            menu1.setColor(Color::Blue);
            menuNum = 1;
        }
        if (IntRect(620, 250, 130, 50).contains(Mouse::getPosition(window))) {
            menu2.setColor(Color::Blue);
            menuNum = 2;
        }
        if (IntRect(630, 350, 110, 50).contains(Mouse::getPosition(window))) {
            menu3.setColor(Color::Blue);
            menuNum = 3;
        }

        if (Mouse::isButtonPressed(Mouse::Left)) {
            if (menuNum == 1) {
                fon += 1;

                isMenu = false;
            }
            if (menuNum == 2) {
                text2.setPosition(100, 250);
                text3.setPosition(1200, 800);
                window.draw(text2);
                window.draw(text3);
                window.display();
                while (!Keyboard::isKeyPressed(Keyboard::Escape)) {
                }
                window.clear();
            }
            if (menuNum == 3) {
                window.close();
                isMenu = false;
            }
        }

        window.draw(menuBg);
        window.draw(menu1);
        window.draw(text);
        window.draw(text4);
        window.draw(text5);
        window.draw(menu2);
        window.draw(menu3);
        window.display();

        if (fon > 0) {
            Texture stk;
            stk.loadFromFile("images/stk.jpg");

            Sprite setk(stk);

            window.draw(setk);
            window.display();
        }
    }
}

int steam(RenderWindow& window, int size)
{
    bool isMenu = 1;
    int menuNum = 100;
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
                printf("%d\n", teamnum);

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
                printf("%d\n", teamnum);

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
                printf("%d\n", teamnum);

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
                printf("%d\n", teamnum);

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

        int i = 0;
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

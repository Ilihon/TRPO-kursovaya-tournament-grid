#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace sf;
using namespace std;

void menu(RenderWindow& window);
int steam(RenderWindow& window, int size);
int type(RenderWindow& window, int c, int te, int size, char** rnd2, int x);

int main()
{
    printf("Введите количество команд (Меньше 33):\n");

    char** team;
    char** rnd2;
    int size = 0;

    scanf("%d", &size);

    while ((size > 32) || (size < 2)) {
        printf("Неправильно задано количество команд.\nПовторите попытку:\n");
        scanf("%d", &size);
    }

    int a[size];
    for (int i = 0; i < size; i++)
        a[i] = 0;

    team = new char*[size + 1];
    printf("Введите названия команд:\n");

    for (int i = 0; i < size + 1; i++) {
        team[i] = new char[30];
        cin.getline(team[i], 30);
    }
    rnd2 = new char*[((size / 2) + 1)];
    for (int i = 0; i < ((size / 2) + 1); i++) {
        rnd2[i] = new char[30];
        *rnd2[i] = ' ';
    }

    RenderWindow window(VideoMode(1600, 1024), "Menu");

    Texture men;
    men.loadFromFile("images/loading.png");
    Sprite menu1(men);

    Font font;
    font.loadFromFile("ubuntu.ttf");

    Text text("", font, 40), text2("", font, 20);
    text.setFillColor(Color::Red);
    text.setStyle(Text::Bold);
    text.setString("Press TAB to start");
    text.setPosition(400, 200);

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
                if ((event.key.code == Keyboard::Tab)) {
                    menu(window);

                    bool isMenu = 1; // Все работает, пока меню
                    int m = -40, t = 35,
                        te = -25; //переменные используемые в отрисовке сетке,
                                  //для увелечения дистанции мду элементами
                    int menuNum = 0; //для выхода из программы
                    int c = 1; // счетчик, оторые исп для рисования ячеек
                    int stop = 0, st = 0; //Для остановки циклов
                    int teamnum = 0; // номер команды из 1го массива, который
                                     // записывается во 2ой
                    int x = 0; //Переменная, в которую записываем рез-т функции
                               //стим

                    Text text("", font, 10);
                    text.setFillColor(Color::Red);

                    Texture stk;
                    stk.loadFromFile("images/stk.jpg");

                    Sprite setk(stk);

                    RectangleShape rectangle(Vector2f(202, 20));
                    rectangle.setFillColor(Color::Green);

                    window.draw(setk);
                    window.display();

                    // отрисовка 1го столбца------------------------------
                    for (int i = 0; i < size + 1; i++) {
                        if (c == 2) {
                            m += 25;
                            c = 0;
                        }

                        text.setString(team[i]);
                        text.setPosition(20, m);

                        rectangle.setFillColor(Color::Green);
                        rectangle.setPosition(18, m);
                        window.draw(rectangle);
                        window.draw(text);

                        window.display();

                        m += 18;
                        c++;
                    }

                    // отрисовка 2го столбца------------------------------
                    if (stop == 0) {
                        c = 0;
                        for (int i = 0; i < (size / 2); i++) {
                            if (c == 2) {
                                t += 70;
                                c = 0;
                            }
                            rectangle.setFillColor(Color::Green);
                            rectangle.setPosition(298, t);

                            window.draw(rectangle);
                            window.display();
                            c++;
                            t += 25;
                        }
                        stop = 1;
                    }
                    //конец---отрисовки----------------------------------------

                    /*  while (isMenu) {
                          // setk.setColor(Color::White);
                          //определение дальнейших действий: 200 - выход, 1 - 33
                          //передача команды
                          if (Mouse::isButtonPressed(Mouse::Middle)) {
                              x = steam(window, size, teamnum);
                              if ((x == 200) || (x == 100))
                                  menuNum = x;
                              else if ((x > 1) && (x < 33)) {
                                  teamnum = x;
                                  //   st = 0;
                              }
                          }
                          //конец определения
                          //-------------------------TEAM-MANAGMENT------------------------------------------
                          if ((x < 33) && (x > 0)) {
                              rnd2[x] = team[x];
                              printf("%s\n PROVEROCHNOR", rnd2[x]);
                          }
                          //  printf("ОНА ЕЩЕ ЖИВА, СУКА");
                          //------------------END-OF-TEAM-MNGMNT------------------------------------------
                          //условие выхода--------------
                          if (x == 200) {
                              window.close();
                              isMenu = false;
                          }
                          if (Mouse::isButtonPressed(Mouse::Right)) {
                              isMenu = false;
                          }
                          //конец условия-----------------
                      }*/
                    //  for (int i = 0; i < ((size / 2) + 1); i++)
                    do {
                        if (Mouse::isButtonPressed(Mouse::Middle)) {
                            x = steam(window, size);
                            a[x] = x;
                            st += 1;
                        }
                        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
                            isMenu = false;
                            window.close();
                        }
                        if (x == 200) {
                            window.close();
                            isMenu = false;
                        }
                    } while (st < size / 2);

                    for (int i = 0; i < size; i++)
                        if (a[x] != 0)
                            printf("%d\n", a[x]);

                    /*  while (isMenu) {
                          if (Mouse::isButtonPressed(Mouse::Middle)) {
                              x = steam(window, size);
                              c = 1;
                              t = 58;
                          }
                          if ((x != 0) && (Mouse::isButtonPressed(Mouse::Left))
                              && (c < 2)) {
                              text.setString(team[x]);
                              text.setPosition(300, t);
                              window.draw(text);
                              window.display();

                              t += 18;
                              c++;
                          }
                          c = 1;
                          if (Keyboard::isKeyPressed(Keyboard::Escape)) {
                              isMenu = false;
                              window.close();
                          }
                          if (x == 200) {
                              window.close();
                              isMenu = false;
                          }
                      } */
                }
        }
    }

    return 0;
}

void menu(RenderWindow& window)
{
    Texture menuTexture1, menuTexture2, menuTexture3, menuBackground;
    menuTexture1.loadFromFile("images/1111.png");
    menuTexture2.loadFromFile("images/2222.png");
    menuTexture3.loadFromFile("images/3333.png");
    menuBackground.loadFromFile("images/Background.jpg");
    Sprite menu1(menuTexture1), menu2(menuTexture2), menu3(menuTexture3),
            menuBg(menuBackground);
    bool isMenu = 1;
    int menuNum = 0;
    menu1.setPosition(400, 200);
    menu2.setPosition(400, 250);
    menu3.setPosition(400, 350);
    menuBg.setPosition(0, 0);

    while (isMenu) {
        menu1.setColor(Color::White);
        menu2.setColor(Color::White);
        menu3.setColor(Color::White);
        menuNum = 0;
        window.clear(Color(129, 181, 221));

        if (IntRect(400, 200, 300, 50).contains(Mouse::getPosition(window))) {
            menu1.setColor(Color::Blue);
            menuNum = 1;
        }
        if (IntRect(400, 250, 300, 50).contains(Mouse::getPosition(window))) {
            menu2.setColor(Color::Blue);
            menuNum = 2;
        }
        if (IntRect(400, 350, 300, 50).contains(Mouse::getPosition(window))) {
            menu3.setColor(Color::Blue);
            menuNum = 3;
        }

        if (Mouse::isButtonPressed(Mouse::Left)) {
            if (menuNum == 1) {
                // window.setSize(Style::Fullscreen));
                isMenu = false;
            }
            if (menuNum == 2) {
                window.display();
                while (!Keyboard::isKeyPressed(Keyboard::Escape))
                    ;
            }
            if (menuNum == 3) {
                window.close();
                isMenu = false;
            }
        }

        window.draw(menuBg);
        window.draw(menu1);
        window.draw(menu2);
        window.draw(menu3);
        window.display();
    }
}

int steam(RenderWindow& window, int size)
{
    bool isMenu = 1;
    int menuNum = 100;
    int teamnum = 0;
    while (isMenu) {
        if ((IntRect(20, 24, 200, 20).contains(Mouse::getPosition(window)))
            && (size > 1)) {
            teamnum = 1;
            // printf("%d\n", teamnum);
        }

        if ((IntRect(20, 45, 200, 20).contains(Mouse::getPosition(window)))
            && (size > 1)) {
            teamnum = 2;
            // printf("%d\n", teamnum);
        }

        if ((IntRect(20, 87, 200, 18).contains(Mouse::getPosition(window)))
            && (size > 2)) {
            teamnum = 3;
            // printf("%d\n", teamnum);
        }

        if ((IntRect(20, 107, 200, 18).contains(Mouse::getPosition(window)))
            && (size > 3)) {
            teamnum = 4;
            //  printf("%d\n", teamnum);
        }

        if ((IntRect(20, 210, 200, 18).contains(Mouse::getPosition(window)))
            && (size > 4)) {
            teamnum = 5;
            //  printf("%d\n", teamnum);
        }

        if ((IntRect(20, 240, 200, 18).contains(Mouse::getPosition(window)))
            && (size > 5)) {
            teamnum = 6;
            printf("%d\n", teamnum);
        }

        if ((IntRect(20, 280, 200, 18).contains(Mouse::getPosition(window)))
            && (size > 6)) {
            teamnum = 7;
        }

        if ((IntRect(20, 310, 200, 18).contains(Mouse::getPosition(window)))
            && (size > 7)) {
            teamnum = 8;
            printf("%d\n", teamnum);
        }
        if (Mouse::isButtonPressed(Mouse::Left)) {
            isMenu = false;
            return (teamnum);
        }
        if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            menuNum = 200;
            return (menuNum);
            isMenu = false;
        }
    }
    return 0;
}

int type(RenderWindow& window, int c, int te, int size, char** rnd2, int x)
{
    Font font;
    font.loadFromFile("ubuntu.ttf");

    Text text("", font, 10);
    text.setFillColor(Color::Red);

    int st = 0;
    printf("TYTT");

    for (int i = x / 2; i < (size / 2) + 1; i++) {
        if (!(*rnd2[i] == ' ')) {
            printf("YA TUT");
            if (c == 2) {
                te += 60;
                c = 0;
            }
            printf("%d\n SSSSSS", c);
            printf("%d\nTETETETE", te);
            text.setString(rnd2[i]);
            text.setPosition(300, te);

            window.draw(text);
            window.display();

            te += 25;
            c++;
        }
    }
    return (st);
}

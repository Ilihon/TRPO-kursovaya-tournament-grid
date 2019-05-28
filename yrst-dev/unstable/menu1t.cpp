#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace sf;
using namespace std;

void menu(RenderWindow& window);
void steam(RenderWindow& window);

/*void pole(RenderWindow& window, char** team, int size)
{
    Texture stk;
    stk.loadFromFile("images/stk.jpeg");
    Sprite setk(stk);

    Font font;
    font.loadFromFile("ubuntu.ttf");
    Text text("", font, 40);
    text.setFillColor(Color::Red);
    text.setStyle(Text::Bold);
    text.setPosition(400, 200);
    text.setString("sss");
    window.draw(text);

    bool isMenu = 1;

    while (isMenu) {
            for (int i = 0; i < size + 1; i++) {
            text.setPosition(400, 200 + i * 10);
            text.setString(team[i]);
            window.draw(text);
        }

        window.clear();
        window.draw(setk);
        window.display();
    }
}
*/

int main()
{
    printf("Введите количество команд (Меньше 33):\n");

    char** team;
    char* rnd2[16];
    int size = 0;
    scanf("%d", &size);
    while ((size > 32) || (size < 2)) {
        printf("Неправильно задано количество команд.\n Повторите попытку:\n");
        scanf("%d", &size);
    }

    team = new char*[size + 1];
    printf("Введите названия команд:\n");

    for (int i = 0; i < size + 1; i++) {
        team[i] = new char[30];
        cin.getline(team[i], 30);
    }

    for (int i = 0; i < 16 + 1; i++) {
        rnd2[i] = new char[30];
    }

    RenderWindow window(VideoMode(1200, 720), "Menu");

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
                    window.close();

                    RenderWindow setka(VideoMode(1920, 1080), "Setka");

                    Text text("", font, 20);
                    text.setFillColor(Color::Red);

                    Texture stk, exit;
                    stk.loadFromFile("images/stk.jpeg");
                    exit.loadFromFile("images/3333.png");

                    Sprite setk(stk), ext(exit);
                    ext.setPosition(900, 600);

                    setka.clear();
                    setka.draw(setk);
                    setka.draw(ext);
                    setka.display();

                    bool isMenu = 1;
                    int m = 40;
                    int menuNum = 0;
                    int c = 1;
                    int teamnum = 0;

                    for (int i = 0; i < size + 1; i++) {
                        printf("%d\n", c);

                        if (c == 2) {
                            m += 40;
                            c = 0;
                        }

                        text.setString(team[i]);
                        text.setPosition(20, m);
                        setka.draw(text);
                        setka.display();

                        m += 17;
                        c++;
                    }

                    // steam(window);

                    while (isMenu) {
                        setk.setColor(Color::White);

                        //-------------------------TEAM-MGMNT------------------------------------------
                        if (IntRect(20, 70, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 1;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 101, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 2;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 140, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 3;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 170, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 4;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 210, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 5;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 240, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 6;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 280, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 7;
                        }

                        if (IntRect(20, 310, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 8;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 70, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 9;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 101, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 10;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 140, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 11;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 170, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 12;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 210, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 13;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 240, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 14;
                            printf("%d\n", teamnum);
                        }

                        if (IntRect(20, 280, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 15;
                        }

                        if (IntRect(20, 310, 300, 80)
                                    .contains(Mouse::getPosition(setka))) {
                            teamnum = 16;
                            printf("%d\n", teamnum);
                        }

                        if (Mouse::isButtonPressed(Mouse::Left)) {
                            if (teamnum == 8) {
                                rnd2[teamnum] = team[teamnum];
                                printf("%s\n", rnd2[teamnum]);
                            }
                        }

                        //------------------END-OF-TEAM-MNGMNT------------------------------------------

                        if (IntRect(900, 600, 300, 50)
                                    .contains(Mouse::getPosition(setka))) {
                            ext.setColor(Color::Blue);
                            menuNum = 1;
                        }

                        if (Mouse::isButtonPressed(Mouse::Left)) {
                            if (menuNum == 1) {
                                window.close();
                                isMenu = false;
                            }
                        }
                    }
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
            if (menuNum == 1)
                isMenu = false;
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

/*void steam(RenderWindow& window)
{
    bool isMenu = 1;
    int teamnum = 0;
    while (isMenu) {
        if (IntRect(20, 70, 50, 40).contains(Mouse::getPosition(window))) {
            teamnum = 1;
        }
    }
    return();
}*/

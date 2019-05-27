#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace sf;
using namespace std;

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
    printf("Enter number of teams\n");

    char** team;
    int size = 0;
    scanf("%d", &size);
    team = new char*[size + 1];
    printf("Input string:\n");
    for (int i = 0; i < size + 1; i++) {
        team[i] = new char[255];
        cin.getline(team[i], 255);
    }

    // Print string array
    for (int i = 0; i < size + 1; i++) {
        cout << team[i] << endl;
    }

    RenderWindow window(VideoMode(1200, 720), "kyrsch");

    Texture men;
    men.loadFromFile("images/loading.png");
    Sprite menu1(men);

    Font font;
    font.loadFromFile("ubuntu.ttf");
    Text text("", font, 40);
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

                    // pole(window, team, size);
                    Texture stk, exit;
                    stk.loadFromFile("images/stk.jpeg");
                    exit.loadFromFile("images/3333.png");
                    Sprite setk(stk), ext(exit);
                    ext.setPosition(800, 600);
                    menu1.setColor(Color::Red);

                    window.clear();
                    window.draw(setk);
                    window.draw(ext);
                    window.display();

                    bool isMenu = 1;
                    int m = 170;
                    int menuNum = 0;

                    for (int i = 0; i < size + 1; i++) {
                        text.setPosition(50, m += 30);
                        text.setString(team[i]);

                        window.draw(text);
                        window.display();
                    }
                    while (isMenu) {
                        if (IntRect(800, 600, 300, 50)
                                    .contains(Mouse::getPosition(window))) {
                            menuNum = 3;
                        }
                        if (Mouse::isButtonPressed(Mouse::Left)) {
                            if (menuNum == 3) {
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

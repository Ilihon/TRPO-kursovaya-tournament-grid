#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

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
        if (IntRect(400, 300, 300, 50).contains(Mouse::getPosition(window))) {
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

int main()
{
    RenderWindow window(sf::VideoMode(960, 540), "kyrsch");
    menu(window);
    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}

#include "menu.h"


void menu(RenderWindow& window)
{
    window.clear();
    while(svit==1){

    Texture menuTexture1, menuTexture2, menuTexture3, menuBackground;
    menuTexture1.loadFromFile("images/1111.png");
    menuTexture2.loadFromFile("images/2222.png");
    menuTexture3.loadFromFile("images/3333.png");
    menuBackground.loadFromFile("images/fon.png");

    Font font;
    font.loadFromFile("font/ubuntu.ttf");

    Text text("", font, 40), text2("", font, 20), text3("", font, 20),
            text4("", font, 20), text5("", font, 20);
    text.setFillColor(Color::Red);
    text2.setFillColor(Color::Red);
    text.setStyle(Text::Bold);
    text3.setFillColor(Color::Red);
    text4.setFillColor(Color::Red);
    text5.setFillColor(Color::Red);

    text.setString("Tournament Grid Generator");
    text2.setString(
            "                             ABOUT PROGRAMM\n\n This program is "
            "an "
            "Olympic tournament grid "
            "generator.\n Control is carried out by pressing the LMB on the "
            "chase with the command that you want to advance further.\nIn "
            "order to advance the teams to the next round, it is necessary to "
            "press the enter key.\nThe menu is returned by pressing the ESC "
            "key.\n \n");
    text3.setString("Creators:\n IP-813 Stoyak Yuri\n IP-813 Burdukovsky Ilya");
    text4.setString(" - Start's the grid generator.");
    text5.setString(" - Read the info about programm first.");

    text.setPosition(460, 100);

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


        Event event;
        window.pollEvent(event);
        if (event.type == Event::Closed){
          svit=10;
          window.close();
          isMenu = false;
        }


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
                fon = 1;
                svit=2;
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
                svit=10;
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

        if (fon == 1) {
            Texture stk;
            stk.loadFromFile("images/stk.jpg");

            Sprite setk(stk);

            window.draw(setk);
            window.display();
        }
    }
  }
  while(svit==3){
    Texture WinnerBackground;
    WinnerBackground.loadFromFile("images/winnerbackground.jpg");
    Sprite WinBg(WinnerBackground);
    WinBg.setPosition(-80, 0);


    Font font;
    font.loadFromFile("font/ubuntu.ttf");

    int v=strlen(winner);

    Text text_win(winner, font, 40);
    text_win.setFillColor(Color::Red);
    text_win.setStyle(Text::Bold);
    text_win.setPosition(740-v*12, 520);

    Text congrats("Conrats!", font, 80);
    congrats.setFillColor(Color::Red);
    congrats.setStyle(Text::Bold);
    congrats.setPosition(600, 80);



    bool isMenu = 1;
    while (isMenu) {


          Event event;
          window.pollEvent(event);
          if (event.type == Event::Closed){
            svit=10;
            window.close();
            isMenu = false;
          }



          window.draw(WinBg);
          window.draw(congrats);
          window.draw(text_win);
          window.display();
          if (Keyboard::isKeyPressed(Keyboard::Escape)) {
            isMenu = false;
            svit=1;
            winner_pos=3;
            strcpy(winner," ");
          }
    }
  }
  return;
}

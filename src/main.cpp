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

int svit=0;
int winner_pos=0;
char winner[30]=" ";

int main()
{
    //////////////////
    setlocale(LC_ALL, "Rus");
    char sizestring[256];
    int size; //кол-во комманд
    cout << "Enter team num(2-32): ";
    cin.getline(sizestring,256);
    size = atoi(sizestring);
    while (size < 2 || size > 32) {
        puts("Uncorrect team count!");
        cout <<"Please enter team num again: ";
        cin.getline(sizestring,256);
        size = atoi(sizestring);
    }

    char** team;
    char** rnd2;
    char** rnd3;
    char** rnd4;
    char** rnd5;

    team = new char*[size];

    /////////////////проверка на выделение памяти
    if (team == NULL) {
        printf("Failed to allocate memory");
        return 1; // выход по ошибке, код ошибки 1
    }

    //сгенерировать или считать имена комманд
    cout << "Enter team namesf? (y/n) ";
    char g[256]; //
    cin.getline(g,256);

    while ((strcmp(g, "y") != 0) && (strcmp(g, "Y") != 0)
           && (strcmp(g, "n") != 0) && (strcmp(g, "N") != 0)) {
        cout << "Uncorrect answer, only Yes or Not: ";
        cin.getline(g,256);
    }

    if ((strcmp(g, "y") == 0) || (strcmp(g, "Y") == 0)) { //считываем имена комманд
      puts("You can enter yout team names:");
        for (int i = 0; i < size; i++) {
            team[i] = new char[30];

            /////////////////проверка на выделение памяти
            if (team[i] == NULL) {
                printf("Failed to allocate memory");
                return 1; // выход по ошибке, код ошибки 1
            }
            cin.getline(sizestring, 256);
            while(strlen(sizestring)>30){
                puts("Please, enter team name with 30 or less characters");
                cin.getline(sizestring, 256);
            }
            while(strcmp(sizestring," ")==0){
                puts("Please, enter non empty team name");
                cin.getline(sizestring, 256);
            }
            strcpy(team[i],sizestring);
        }
    } else { //генерируем имена комманд
        for (int i = 0; i < size; i++) {
            team[i] = new char[30];

            /////////////////проверка на выделение памяти
            if (team[i] == NULL) {
                printf("Failed to allocate memory");
                return 1; // выход по ошибке, код ошибки 1
            }

            char str[30] = "TeamNum";
            char num[30];
            sprintf(num, "%d", i + 1);
            strcat(str, num);
            strcpy(team[i], str);
        }
    }

    //////////////
    int a1[size], b2[size], c3[size], d4[size];
    for (int i = 0; i < size; i++) {
        a1[i] = -1;
        b2[i] = -1;
        c3[i] = -1;
        d4[i] = -1;
    }


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
    //float scrX = window.getSize().x;
    //float scrY = window.getSize().y;
    //	RenderWindow window(VideoMode(scrX, scrY), "Menu", Style::Fullscreen);
    RenderWindow window(VideoMode(1500, 900), "Menu");
    //RenderWindow window(VideoMode::getDesktopMode(), "Menu", Style::Fullscreen);

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

    int r2 = 0, r3 = 0, r4 = 0, r5 = 0;

    while (window.isOpen()) {
        Event event;

        while (window.pollEvent(event)) {
            if (event.type == Event::Closed){
              for(int i=0;i<size;i++){
                delete (team[i]);
                delete (rnd2[i]);
                delete (rnd3[i]);
                delete (rnd4[i]);
                delete (rnd5[i]);
              }
              delete (team);
              delete (rnd2);
              delete (rnd3);
              delete (rnd4);
              delete (rnd5);
              window.close();
              return 0;
           }

            if (event.type == Event::KeyPressed)
                if ((event.key.code == Keyboard::Space)&&(svit==0)){
                Again:{
                  svit=1;
                    r2 = 0, r3 = 0, r4 = 0, r5 = 0;
                    for (int i = 0; i < size; i++) {
                    *rnd2[i] = ' ';
                    *rnd3[i] = ' ';
                    *rnd4[i] = ' ';
                    *rnd5[i] = ' ';
                    a1[i]=-1;
                    b2[i]=-1;
                    c3[i]=-1;
                    d4[i]=-1;
                    }
                    menu(window);
                  }

                    Text text("", font, 10);
                    text.setFillColor(Color::Red);

                    draw(window, team, font, size);
                    break;
                }
            if ((Keyboard::isKeyPressed(Keyboard::Escape))&&(svit>0)) {
                goto Again;
            }
            if ((Mouse::isButtonPressed(Mouse::Left))&&(svit==2)) {
                Vector2i position = Mouse::getPosition(window);
                int x = steam(window, size, position);
                // 1rst column--------------
                if ((x >= 0) && (x <= 31)) {
                    if(size==2){
                      winner_pos=x;
                    }
                    int pl;
                    pl = x / 2;
                    a1[pl] = x;
                    r2 = 1;
                }

                // 2nd column--------------
                if ((x >= 100) && (x <= 115)) {
                    x = x % 100;
                    if(size<=4){
                      winner_pos=x;
                    }
                    int pl;
                    pl = x / 2;
                    b2[pl] = x;
                    r3 = 1;
                }

                // 3rd column--------------
                if ((x >= 200) && (x <= 207)) {
                    x = x % 100;
                    if(size<=8){
                      winner_pos=x;
                    }
                    int pl;
                    pl = x / 2;
                    c3[pl] = x;
                    r4 = 1;
                }

                // 4th column--------------
                if ((x >= 300) && (x <= 303)) {
                    x = x % 100;
                    if(size<=16){
                      winner_pos=x;
                    }
                    int pl;
                    pl = x / 2;
                    d4[pl] = x;
                    r5 = 1;
                }

                // 5th column--------------
                if (x == 400) {
                  winner_pos=0;
                }
                if (x==401){
                  winner_pos=1;
                }

                break;
            }

            if ((Keyboard::isKeyPressed(Keyboard::Return))&&(svit==2)) {
                column(window,
                       team,
                       font,
                       size,
                       rnd2,
                       rnd3,
                       rnd4,
                       rnd5,
                       a1,
                       b2,
                       c3,
                       d4,
                       r2,
                       r3,
                       r4,
                       r5);
            }
        }
    }
      for(int i=0;i<size;i++){
        delete (team[i]);
        delete (rnd2[i]);
        delete (rnd3[i]);
        delete (rnd4[i]);
        delete (rnd5[i]);
      }
      delete (team);
      delete (rnd2);
      delete (rnd3);
      delete (rnd4);
      delete (rnd5);
      cout << winner_pos;
      cout << winner;
    return 0;
}

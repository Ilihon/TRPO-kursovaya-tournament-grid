#include <SFML/Graphics.hpp>
#include <iostream>
#include <sstream>
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
        int size);
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
        int a1[],
        int b2[],
        int c3[],
        int d4[],
        int r2,
        int r3,
        int r4,
        int r5);

int main()
{
    /////////////////
    setlocale(LC_ALL, "Rus");
    char sizestring[2];
    int size; //кол-во комманд
    cout << "Enter team num(1-32): ";
    cin >> sizestring;
    size = atoi(sizestring);

    while (size < 1 || size > 32) {
        puts("Uncorrect team count!");
        puts("Please enter team num again!");
        cin >> sizestring;
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
    cout << "Enter team namesf? (y/n) \n";
    char g[1]; //
    cin >> g;
    while ((strcmp(g,"y")!=0) && (strcmp(g,"Y")!=0) && (strcmp(g,"n")!=0) && (strcmp(g,"N")!=0)) {
        cout << "Yes OR Not?\n";
        cin>>g;
    }

    if ((strcmp(g,"y")==0) || (strcmp(g,"Y")==0)){ //считываем имена комманд
        for (int i = 0; i < size; i++) {
            team[i] = new char[30];

      /////////////////проверка на выделение памяти
            if (team[i] == NULL) {
                printf("Failed to allocate memory");
                return 1; // выход по ошибке, код ошибки 1
            }
            cin.getline(team[i], 30);
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
            sprintf(num, "%d", i+1);
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


    int r2 = 0, r3 = 0, r4 = 0, r5 = 0;
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

                    draw(window, team, font, size);
                    break;
                }

            if (Keyboard::isKeyPressed(Keyboard::Escape))
                goto Again;
            if (Mouse::isButtonPressed(Mouse::Left)) {
                int x = steam(window, size);
                // 1rst column--------------
                if ((x>=0) && (x <= 31)) {
              int pl;
      pl = x/2;

                  printf("%d\n", pl);
                  a1[pl] = x;
      r2=1;
                }

                // 2nd column--------------
                if ((x >= 100) && (x <= 115)) {
            x = x % 100;
            int pl;
            pl = x/2;

            printf("%d\n", pl);
            b2[pl] = x;
            r3=1;
                }

                // 3rd column--------------
                if ((x >= 200) && (x <= 207)) {
                      x = x % 100;
                      int pl;
                      pl = x /2;

                      printf("%d\n", pl);
                      c3[pl] = x;
                      r4=1;
                }

                // 4th column--------------
                if ((x >= 300) && (x <= 303)) {
                      x = x % 100;
                      int pl;
          pl = x/2;

                      printf("%d\n", pl);
                      d4[pl] = x;
                      r5=1;
                }

                break;
            }
            for (int j = 0; j < 1000; j++)
                j = j;

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
        int a1[],
        int b2[],
        int c3[],
        int d4[],
        int r2,
        int r3,
        int r4,
        int r5)
{
    if (Keyboard::isKeyPressed(Keyboard::Return)) {
        Text text("", font, 10);
        text.setFillColor(Color::Red);
        // window.clear();
        draw(window, team, font, size);
        window.display();

  int t, c, newsize;
        newsize = (size+1) / 2;
        if (size <= 2)
            newsize = 0;
  //1ый раунд -> 2ой раунд----------------------
        if ((newsize>0) && (r2==1)) {
          t = 36, c = 0;
    for (int i = 0; i < size; i++) {
            if (c == 2) {
                t += 61;
                c = 0;
            }

            for (int j = 1; j < 100000; j++) {
                j = j;
            }

            if(a1[i] != -1){
        printf("%d\n 1AAAAAAAAAAAAAAAAAAAAAAAAAA\n", a1[i]);
              printf("%d\n 1IIIIIIIIIIIIIIIIIIIIIIIIII\n", i);
        strcpy(rnd2[i],team[a1[i]]);
              printf("%s\n", rnd2[i]);
      }
      else{
        strcpy(rnd2[i]," ");
      }

            text.setString(rnd2[i]);
            text.setPosition(280, t);
            window.draw(text);
            window.display();

            t += 25;
            c++;
              }
        }
  //--------------------------------------------

  int oldsize=newsize;
  newsize = (newsize+1) / 2;
        if (oldsize <= 2)
            newsize = 0;

  //2ой раунд -> 3ий раунд----------------------
        if ((newsize>0) && (r3 == 1)) {
              t = 97, c = 0;
              for (int i = 0; i < oldsize; i++) {
                  if (c == 2) {
                          t += 169;
                    c = 0;
                  }

                  for (int j = 1; j < 1000000; j++) {
                    j = j;
                  }

      if(b2[i] != -1){
        printf("%d\n 2AAAAAAAAAAAAAAAAAAAAAAAAAA\n", b2[i]);
              printf("%d\n 2IIIIIIIIIIIIIIIIIIIIIIIIII\n", i);
        strcpy(rnd3[i],rnd2[b2[i]]);
              printf("%s\n", rnd3[i]);
      }
      else{
        strcpy(rnd3[i]," ");
      }

                  text.setString(rnd3[i]);
            text.setPosition(540, t);
            window.draw(text);
            window.display();


                  t += 25;
                  c++;
    }
        }
  //--------------------------------------------

  oldsize=newsize;
  newsize = (newsize+1) / 2;
        if (oldsize <= 2)
            newsize = 0;

  //3ий раунд -> 4ый раунд----------------------
        if ((newsize>0) && (r4 = 1)) {
              t = 205; c = 0;
              for (int i = 0; i < size; i++) {
                  if (c == 2) {
                          t += 389;
                          c = 0;
                      }

                      for (int j = 1; j < 1000000; j++) {
                          j = j;
                      }

      if(c3[i] != -1){
        printf("%d\n 3AAAAAAAAAAAAAAAAAAAAAAAAAA\n", c3[i]);
              printf("%d\n 3IIIIIIIIIIIIIIIIIIIIIIIIII\n", i);
        strcpy(rnd4[i],rnd3[c3[i]]);
              printf("%s\n", rnd4[i]);
      }
      else{
        strcpy(rnd4[i]," ");
      }

      text.setString(rnd4[i]);
      text.setPosition(808, t);
            window.draw(text);
            window.display();

                      t += 25;
                      c++;
              }
        }
  //--------------------------------------------

        oldsize=newsize;
  newsize = (newsize+1) / 2;
        if (oldsize <= 2)
            newsize = 0;

  //4ый раунд -> 5ый раунд----------------------
        if ((newsize>0) && (r5 = 1)) {
              t = 423;
              for (int i = 0; i < oldsize; i++) {

                      for (int j = 1; j < 1000000; j++) {
                          j = j;
                      }

      if(d4[i] != -1){
        printf("%d\n 4AAAAAAAAAAAAAAAAAAAAAAAAAA\n", d4[i]);
              printf("%d\n 4IIIIIIIIIIIIIIIIIIIIIIIIII\n", i);
        strcpy(rnd5[i],rnd4[d4[i]]);
              printf("%s\n", rnd5[i]);
      }
      else{
        strcpy(rnd5[i]," ");
      }

      text.setString(rnd5[i]);
      text.setPosition(1008, t);
            window.draw(text);
            window.display();

                      t += 25;

            }
        }
  //--------------------------------------------

    }
}

void(draw)(
        RenderWindow& window,
        char* team[],
        Font font,
        int size)
{
    window.clear();

    Texture stk;
    stk.loadFromFile("images/stk.jpg");

    Sprite setk(stk);

    window.draw(setk);
    window.display();

    int t = 10; //переменнfz используемая в отрисовке сетке,
                        //для увелечения дистанции мду элементами

    int c = 0, newsize = size; // счетчик, оторые исп для рисования ячеек
    int stop = 0; //Для остановки циклов

    Text text("", font, 10);
    text.setFillColor(Color::Red);

    RectangleShape rectangle(Vector2f(182, 20));
    rectangle.setFillColor(Color::Green);
    RectangleShape kvad(Vector2f(20, 20));
    rectangle.setFillColor(Color::Black);


    // отрисовка 1го столбца------------------------------
    for (int i = 0; i < size; i++) {
        if (c == 2) {
            t += 7;
            c = 0;
        }
        for (int j = 1; j < 1000000; j++) {
            j = j;
        }

        text.setString(team[i]);
        text.setPosition(20, t);

        rectangle.setFillColor(Color::Green);
        rectangle.setPosition(18, t);

        /*
        kvad.setFillColor(Color::Black);
        kvad.setPosition(200, t);
        window.draw(kvad);
        */

        window.draw(rectangle);
        window.draw(text);

        window.display();

        t += 24;
        c++;
    }

    // отрисовка 2го столбца------------------------------
    newsize = (size+1) / 2;
    if (size <= 2)
           newsize = 0;
    if ((stop == 0) && (newsize>0))  {
        c = 0;
        t = 36;
        for (int i = 0; i < newsize; i++) {
            if (c == 2) {
                t += 61;
                c = 0;
            }

            for (int j = 1; j < 1000000; j++) {
                j = j;
            }

            rectangle.setFillColor(Color::Green);
            rectangle.setPosition(278, t);

            /*
            kvad.setFillColor(Color::Black);
            kvad.setPosition(460, t);
            window.draw(kvad);
            */

            window.draw(rectangle);
            window.display();
            c++;
            t += 25;
        }
        stop = 1;
    }

    //отрисовка 3го столбца--------------------------------
    if (newsize<=2)
  newsize=0;
    newsize = (newsize+1)/2;
    if ((stop == 1) && (newsize>0)) {
        c = 0;
        t = 97;
        for (int i = 0; i < newsize; i++) {
            if (c == 2) {
                t += 169;
                c = 0;
            }

            for (int j = 1; j < 1000000; j++) {
                j = j;
            }

            rectangle.setFillColor(Color::Green);
            rectangle.setPosition(538, t);

            /*
            kvad.setFillColor(Color::Black);
            kvad.setPosition(720, t);
            window.draw(kvad);
            */

            window.draw(rectangle);
            window.display();
            c++;
            t += 25;
        }
        stop = 2;
    }

    //отрисовка 4го столбца--------------------------------
    if (newsize<=2)
  newsize=0;
    newsize=(newsize+1)/2;
    if ((stop == 2) && (newsize>0))  {
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

            /*
            kvad.setFillColor(Color::Black);
            kvad.setPosition(990, t);
            window.draw(kvad);
            */

            window.draw(rectangle);
            window.display();
            c++;
            t += 25;
        }
        stop = 3;
    }

    //отрисовка 5го столбца--------------------------------
    if ((stop == 3)&&(newsize>2)) {
  newsize=(newsize+1)/2;
        t = 423;
        for (int i = 0; i < newsize; i++) {
            for (int j = 1; j < 1000000; j++) {
                j = j;
            }

            rectangle.setFillColor(Color::Green);
            rectangle.setPosition(1008, t);

              /*
             kvad.setFillColor(Color::Black);
             kvad.setPosition(1190, t);
             window.draw(kvad);
             */

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
            "key.\n \n");
    text3.setString("Creators:\n IP-813 Stoyak Yuri\n IP-813 Burdukovsky Ilya");
    text4.setString(" - Start's the grid generator.");
    text5.setString(" - Read the info about programm first.");

    text.setPosition(550, 100);

    Sprite menu1(menuTexture1), menu2(menuTexture2), menu3(menuTexture3),
            menuBg(menuBackground);

    bool isMenu = 1;
    int menuNum = 0;

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
    }
}

int steam(RenderWindow& window, int size)
{
    bool isMenu = 1;
    int teamnum = -1;
    int t = 10;
    int c = 0;
    int newsize = size;

    RectangleShape kvad(Vector2f(20, 20));
    kvad.setFillColor(Color::Black);

    while (isMenu) {

  //проверка 1го столбца-------------------------------
        for (int i = 0; i < size; i++) {
            if (c == 2) {
                  t += 7;
                  c = 0;
              }

              if (IntRect(18, t, 182, 22).contains(Mouse::getPosition(window))) {
                  teamnum = i;

                  if (c == 0) { // первый опонент

                        kvad.setFillColor(Color::Red);
                        kvad.setPosition(200, t);
                        window.draw(kvad);
                        window.display();

                      if (i != size-1) {
                            kvad.setFillColor(Color::Black);
                            kvad.setPosition(200, t + 24);
                            window.draw(kvad);
                             window.display();
          }

                  } else if (c == 1) { // второй опонент

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(200, t);
                    window.draw(kvad);
                    window.display();

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(200, t - 24);
                    window.draw(kvad);
                    window.display();
                }
                isMenu = false;
              return (teamnum);
            }

            t += 24;
            c++;
        }
  //--------------------------------------------------

        t = 36;
        newsize = (size+1) / 2;
        c = 0;

  //проверка 2го столбца-------------------------------
        for (int i = 0; i < newsize; i++) {
            if (c == 2) {
                t += 61;
                c = 0;
            }

            if (IntRect(278, t, 182, 22).contains(Mouse::getPosition(window))) {
                teamnum = i + 100;
                printf("%d\n", teamnum);

                if (c == 0) {

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(460, t);
                    window.draw(kvad);
                    window.display();

                    if (i != newsize - 1) {
                      kvad.setFillColor(Color::Black);
                      kvad.setPosition(460, t + 25);
        window.draw(kvad);
                      window.display();
                    }

                } else if (c == 1) {

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(460, t);
                    window.draw(kvad);
                    window.display();

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(460, t - 25);
                    window.draw(kvad);
                    window.display();

                }
              isMenu = false;
              return (teamnum);
            }

            t += 25;
            c++;
        }
  //--------------------------------------------------

        newsize = (newsize+1) / 2;
        c = 0;
        t = 97;

  //проверка 3го столбца-------------------------------
        for (int i = 0; i < newsize; i++) {
            if (c == 2) {
                t += 169;
                c = 0;
            }

            if (IntRect(538, t, 182, 22).contains(Mouse::getPosition(window))) {
                teamnum = i + 200;
                printf("%d\n", teamnum);

                if (c == 0) {

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(720, t);
                    window.draw(kvad);
                    window.display();

                    if (i != newsize - 1) {
                        kvad.setFillColor(Color::Black);
                        kvad.setPosition(720, t + 25);
                      window.draw(kvad);
                      window.display();
                    }

                } else if (c == 1) {

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(720, t);
                    window.draw(kvad);
                    window.display();

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(720, t - 25);
                    window.draw(kvad);
                    window.display();

                }
              isMenu = false;
              return (teamnum);
            }

            c++;
            t += 25;
        }
  //--------------------------------------------------

        newsize = (newsize+1)/2;
        c = 0;
        t = 205;

  //проверка 4го столбца-------------------------------
        for (int i = 0; i < newsize; i++) {
            if (c == 2) {
                t += 389;
                c = 0;
            }

            if (IntRect(808, t, 182, 22).contains(Mouse::getPosition(window))) {
                teamnum = i + 300;
                printf("%d\n", teamnum);

                if (c == 0) {

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(990, t);
                    window.draw(kvad);
                    window.display();

                    if (i != (newsize - 1)) {
                      kvad.setFillColor(Color::Black);
                        kvad.setPosition(990, t + 25);
                        window.draw(kvad);
                        window.display();
                    }

                } else if (c == 1) {

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(990, t);
                    window.draw(kvad);
                    window.display();


                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(990, t - 25);
                    window.draw(kvad);
                    window.display();

                }
              isMenu = false;
              return (teamnum);
     }
            c++;
            t += 25;
        }
  //--------------------------------------------------

        newsize = (newsize+1)/2;
        t = 423;
        c = 0;

  //проверка 5го столбца-------------------------------
        for (int i = 0; i < newsize; i++) {
            if (IntRect(1008, t, 182, 22).contains(Mouse::getPosition(window))) {
    teamnum = i + 400;
                printf("%d\n", teamnum);
                if (c == 0) {

                    kvad.setFillColor(Color::Red);
                    kvad.setPosition(1190, t);
                    window.draw(kvad);
                    window.display();

                    kvad.setFillColor(Color::Black);
                    kvad.setPosition(1190, t + 25);
                    window.draw(kvad);
                    window.display();

                } else if (c == 1) {

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
    return -1;
}

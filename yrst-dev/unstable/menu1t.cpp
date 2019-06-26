#include <SFML/Graphics.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace sf;
using namespace std;

void menu(RenderWindow &window);
void draw(RenderWindow &window, char *team[], Font font, int size);
int steam(RenderWindow &window, int size);

int main() {
  /////////////////
  setlocale(LC_ALL, "Rus");
  cout << "Enter team num(1-32): ";
  int size; //кол-во комманд
  cin >> size;

  char **team;
  char **rnd2;
  char **rnd3;
  int x = 2, c = 1, r2 = 0, r3 = 0;

  while (size < 1 || size > 32) {
    puts("Uncorrect team count!");
    puts("Please !");
    scanf("%d", &size);
  }

  team = new char *[size];

  //сгенерировать или считать имена комманд
  cout << "Enter team names? (y/n) \n";
  char g = '0'; //
  cin >> g;
  while ((g != 'y') && (g != 'n')) {
    cout << "Yes OR Not?\n";
    cin >> g;
  }

<<<<<<< HEAD
  if (g == 'y') { //считываем имена комманд
    for (int i = 0; i < size + 1; i++) {
      team[i] = new char[30];
      cin.getline(team[i], 30);
    }
  } else { //генерируем имена комманд
    for (int i = 0; i < size + 1; i++) {
      team[i] = new char[30];
      char str[30] = "TeamNum";
      char num[30];
      sprintf(num, "%d", i);
      strcat(str, num);
      strcpy(team[i], str);
=======
    if (g == 'y') { //считываем имена комманд
        for (int i = 0; i < size + 1; i++) {
            team[i] = new char[30];
	    if ( team[i] == NULL ) { 
		printf("Failed to allocate memory");
		return 1; // выход по ошибке, код ошибки 1
 	    }
            cin.getline(team[i], 30);
        }
    } else { //генерируем имена комманд
        for (int i = 0; i < size + 1; i++) {
            team[i] = new char[30];
            if ( team[i] == NULL ) { 
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

    int a[size];
    for (int i = 0; i < size; i++)
        a[i] = 0;

    rnd2 = new char*[size + 1];
    if ( rnd2 == NULL ) { 
	printf("Failed to allocate memory");
	return 1; // выход по ошибке, код ошибки 1
    }
    for (int i = 0; i < size + 1; i++) {
        rnd2[i] = new char[30];
        if ( rnd2[i] == NULL ) { 
		printf("Failed to allocate memory");
		return 1; // выход по ошибке, код ошибки 1
 	}
        *rnd2[i] = ' ';
>>>>>>> 765973be23895430f075adde6029444d80c2106d
    }
  }

  //////////////

  int a[size], b[size];
  for (int i = 0; i < size; i++) {
    a[i] = 0;
    b[i] = 0;
  }

  rnd2 = new char *[size];
  rnd3 = new char *[size];
  for (int i = 0; i < size; i++) {
    rnd2[i] = new char[30];
    rnd3[i] = new char[30];
    *rnd2[i] = ' ';
    *rnd3[i] = ' ';
  }

  RenderWindow window(VideoMode(1500, 900), "Menu");

  Texture men;
  men.loadFromFile("images/loading.png");
  Sprite menu1(men);

  Font font;
  font.loadFromFile("ubuntu.ttf");

  RectangleShape rectangle(Vector2f(182, 20));
  rectangle.setFillColor(Color::Green);

  Text text("", font, 40), text2("", font, 20);
  text.setFillColor(Color::Red);
  text.setStyle(Text::Bold);
  text.setString("Press SPACE to start");
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
        if ((event.key.code == Keyboard::Space)) {
        Again:
          menu(window);

          Text text("", font, 10);
          text.setFillColor(Color::Red);

          draw(window, team, font, size);
          break;

          /*  int y = 35;
            bool sec = 1;
            printf("TYT\n");
            for (int i = 0; i < (size / 2); i++) {
                while (sec) {
                    printf("TYT2\n");
                    if
(Mouse::isButtonPressed(Mouse::Left)) { printf("TYT3\n");
                        x = steam(window, size);
                        sec = false;
                    }
                }
                printf("TYT4\n");
                text.setString(team[x]);
                text.setPosition(298, y);

                window.draw(text);
                window.display();

                y += 25;
            }

            /*  while (isMenu) {
                  // setk.setColor(Color::White);
                  //определение дальнейших действий:
200 - выход,
            1
              - 33
                  //передача команды
                  if
(Mouse::isButtonPressed(Mouse::Middle)) { x =
steam(window, size, teamnum); if ((x == 200) || (x ==
100)) menuNum = x; else if ((x > 1) && (x < 33)) {
                          teamnum = x;
                          //   st = 0;
                      }
                  }
                  //конец определения
                  //-------------------------TEAM-MANAGMENT------------------------------------------
                  if ((x < 33) && (x > 0)) {
                      rnd2[x] = team[x];
                      printf("%s\n PROVEROCHNOR",
rnd2[x]);
                  }
                  //------------------END-OF-TEAM-MNGMNT------------------------------------------
                  //условие выхода--------------
                  if (x == 200) {
                      window.close();
                      isMenu = false;
                  }
                  if
(Mouse::isButtonPressed(Mouse::Right)) { isMenu = false;
                  }
                  //конец условия-----------------
              }*/
          //  for (int i = 0; i < ((size / 2) + 1); i++)
          /*do {
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
                if ((x != 0) &&
          (Mouse::isButtonPressed(Mouse::Left))
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
      if (Keyboard::isKeyPressed(Keyboard::Escape))
        goto Again;
      if (Mouse::isButtonPressed(Mouse::Left)) {
        x = steam(window, size);
        if (x < 33) {
          if (x % 2 == 1) {
            rnd2[x] = team[x];
            //  rnd3[x] = rnd2[x];
            a[x] = 1;
            a[x + 1] = 0;
          } else {
            rnd2[x] = team[x];
            //  rnd3[x] = rnd2[x];
            a[x] = 1;
            a[x - 1] = 0;
          }
        }
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
        printf("GOTCHA\n");
        break;
      }

      if (Keyboard::isKeyPressed(Keyboard::Return)) {
        int t = 36, c = 0, x = 0, newsize = size, t2 = 1;
        Text text("", font, 10);
        text.setFillColor(Color::Red);
        window.clear();
        draw(window, team, font, size);
        window.display();

        if (size % 2 == 1)
          newsize = size / 2 + 1;
        else
          newsize = size / 2;

        for (int i = 1; i < size + 1; i++) {
          if ((a[i] != 0) && (x < newsize)) {
            if (c == 2) {
              t += 61;
              c = 0;
            }

            text.setString(rnd2[i]);
            text.setPosition(280, t);
            rnd3[t2] = rnd2[i];
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

        if (r3 = 1)
        /*if (Keyboard::isKeyPressed(Keyboard::Return)) */ {
          //  window.clear();
          //  draw(window, team, font, size);
          window.display();

          int t = 36, c = 0, x = 0, newsize = size, t2 = 0;

          Text text("", font, 10);
          text.setFillColor(Color::Red);
          if ((size % 4 < 4) && (size != 4) && (size != 8) && (size != 12) &&
              (size != 16) && (size != 20) && (size != 24) && (size != 28) &&
              (size != 32))
            newsize = size / 4 + 1;
          else if (size > 4)
            newsize = size / 4;
          else
            newsize = size / 4 - 1;
          c = 0;
          t2 = 97;

          for (int i = 1; i < (size); i++) {
            if ((b[i] != 0) && (x < newsize + 1)) {
              if (c == 2) {
                t2 += 169;
                c = 0;
              }

              text.setString(rnd3[b[i]]);
              text.setPosition(540, t2);

              window.draw(text);
              window.display();

              c++;
              t2 += 25;
            }
          }
        }
      }
    }
  }

  return 0;
}

void(draw)(RenderWindow &window, char *team[], Font font, int size) {
  window.clear();

  Texture stk;
  stk.loadFromFile("images/stk.jpg");

  Sprite setk(stk);

  window.draw(setk);
  window.display();

  int m = 10, t = 36; //переменные используемые в отрисовке сетке,
                      //для увелечения дистанции мду элементами

  int c = 0, newsize = size; // счетчик, оторые исп для рисования ячеек
  int stop = 0; //Для остановки циклов

  Text text("", font, 10);
  text.setFillColor(Color::Red);

  RectangleShape rectangle(Vector2f(182, 20));
  rectangle.setFillColor(Color::Green);

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
    if ((size % 4 < 4) && (size != 4) && (size != 8) && (size != 12) &&
        (size != 16) && (size != 20) && (size != 24) && (size != 28) &&
        (size != 32))
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
    if ((size % 8 < 8) && (size != 8) && (size > 4) && (size != 16) &&
        (size != 24) && (size != 32))
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

      for (int j = 1; j < 1000000; j++) {
        j = j;
      }

      rectangle.setFillColor(Color::Green);
      rectangle.setPosition(808, t);

      window.draw(rectangle);
      window.display();
      c++;
      t += 25;
    }
    stop = 3;
  }
  //отрисовка 5го столбца--------------------------------
  int i = 1;
  if ((stop == 3) && (i <= (size / 16))) {
    t = 423;
    for (int i = 0; i < size / 16; i++) {
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

void menu(RenderWindow &window) {
  window.clear();

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
        isMenu = false;
      }
      if (menuNum == 2) {
        while (!Keyboard::isKeyPressed(Keyboard::Escape))
          window.display();
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

int steam(RenderWindow &window, int size) {
  bool isMenu = 1;
  int menuNum = 100;
  int teamnum = 0;
  int m = 10, t = 36;
  int c = 0;
  int newsize = size;

  while (isMenu) {
    for (int i = 1; i < size + 1; i++) {
      if (c == 2) {
        m += 7;
        c = 0;
      }
      if ((IntRect(20, m, 182, 20).contains(Mouse::getPosition(window))) &&
          (size > 1)) {
        teamnum = i;
        printf("%d\n", teamnum);
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

      if ((IntRect(278, t, 182, 20).contains(Mouse::getPosition(window))) &&
          (size > 1)) {
        teamnum = i + 101;
        printf("%d\n", teamnum);
      }

      c++;
      t += 25;
    }

    /*  if ((IntRect(18, 10, 182,
      20).contains(Mouse::getPosition(window)))
          && (size > 1)) {
          teamnum = 1;
          printf("%d\n", teamnum);
      }

      if ((IntRect(18, 34, 182,
      20).contains(Mouse::getPosition(window)))
          && (size > 1)) {
          teamnum = 2;
          printf("%d\n", teamnum);
      }

      if ((IntRect(18, 65, 182,
      18).contains(Mouse::getPosition(window)))
          && (size > 2)) {
          teamnum = 3;
          printf("%d\n", teamnum);
      }

      if ((IntRect(18, 89, 182,
      18).contains(Mouse::getPosition(window)))
          && (size > 3)) {
          teamnum = 4;
          printf("%d\n", teamnum);
      }

      if ((IntRect(18, 110, 182,
      18).contains(Mouse::getPosition(window)))
          && (size > 4)) {
          teamnum = 5;
          printf("%d\n", teamnum);
      }

      if ((IntRect(18, 134, 182,
      18).contains(Mouse::getPosition(window)))
          && (size > 5)) {
          teamnum = 6;
          printf("%d\n", teamnum);
      }

      if ((IntRect(18, 165, 182,
      18).contains(Mouse::getPosition(window)))
          && (size > 6)) {
          teamnum = 7;
      }

      if ((IntRect(18, 189, 182,
      18).contains(Mouse::getPosition(window)))
          && (size > 7)) {
          teamnum = 8;
          printf("%d\n", teamnum);
      }
      */
    if (Mouse::isButtonPressed(Mouse::Left)) {
      isMenu = false;
      return (teamnum);
    }
  }
  return 0;
}

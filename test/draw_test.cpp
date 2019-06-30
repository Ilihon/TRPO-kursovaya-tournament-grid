#include "draw_test.h"

int draw(int size)
{
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

      text.setString(team[i]);
      text.setPosition(20, t);

      rectangle.setFillColor(sf::Color(133,250,165));
      rectangle.setPosition(18, t);

      window.draw(rectangle);
      window.draw(text);
      t += 24;
      c++;
  }

  // отрисовка 2го столбца------------------------------
  newsize = (size+1) / 2;
  if (size <= 2)
         newsize = 0;
  if ((stop == 0) && (newsize>0)) {
      c = 0;
      t = 36;
      for (int i = 0; i < newsize; i++) {
          if (c == 2) {
              t += 61;
              c = 0;
          }

          rectangle.setFillColor(sf::Color(133,250,165));
          rectangle.setPosition(278, t);

          window.draw(rectangle);
          c++;
          t += 25;
      }
      stop = 1;
  }
  else{
    return 2;
  }

  //отрисовка 3го столбца--------------------------------
  if (newsize<=2)
    newsize=0;
  newsize = (newsize+1)/2;
  if ((stop == 1) && (newsize>0))  {
      c = 0;
      t = 97;
      for (int i = 0; i < newsize; i++) {
          if (c == 2) {
              t += 169;
              c = 0;
          }
          rectangle.setFillColor(sf::Color(133,250,165));
          rectangle.setPosition(538, t);

          window.draw(rectangle);
          c++;
          t += 25;
      }
      stop = 2;
  }
  else{
    return 3;
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

              rectangle.setFillColor(sf::Color(133,250,165));
              rectangle.setPosition(808, t);

              window.draw(rectangle);
              c++;
              t += 25;
          }
          stop = 3;
      }
      else{
        return 4;
      }

          //отрисовка 5го столбца--------------------------------
          if ((stop == 3)&&(newsize>2)) {
            newsize=(newsize+1)/2;
              t = 423;
              for (int i = 0; i < newsize; i++) {

                  rectangle.setFillColor(sf::Color(133,250,165));
                  rectangle.setPosition(1008, t);

                  window.draw(rectangle);
                  window.display();
                  t += 25;
              }
          }
          else{
            return 5;
          }
          //конец---отрисовки----------------------------------------
      return 1;
      }

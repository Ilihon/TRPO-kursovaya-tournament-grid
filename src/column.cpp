#include "column.h"

int column(
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
    //  if (Keyboard::isKeyPressed(Keyboard::Return)) {
    Text text("", font, 10);
    text.setFillColor(Color::Red);
    // window.clear();
    draw(window, team, font, size);
    window.display();

    int t, c, newsize,win_proof;
    newsize = (size + 1) / 2;
    if (size <= 2){
        strcpy(winner,team[winner_pos]);
        svit=3;
        newsize = 0;
        return 0;
    }
    // 1ый раунд -> 2ой раунд----------------------
    win_proof=0;
    if ((newsize > 0) && (r2 == 1)) {
        t = 36, c = 0;
        for (int i = 0; i < size; i++) {
            if (c == 2) {
                t += 61;
                c = 0;
            }

            if (a1[i] != -1) {
                strcpy(rnd2[i], team[a1[i]]);
            } else {
                strcpy(rnd2[i], " ");
            }

            text.setString(rnd2[i]);
            text.setPosition(280, t);
            window.draw(text);
            window.display();

            t += 25;
            c++;
        }
        for (int i =0; i<newsize;i++){
          if(strcmp(rnd2[i]," ")==0){
            win_proof=1;
          }
        }
    }

    //--------------------------------------------
    int oldsize = newsize;
    newsize = (newsize + 1) / 2;
    if (oldsize <= 2){
        strcpy(winner,rnd2[winner_pos]);
            if ((win_proof==0)&&(strcmp(winner," ")!=0)){
                svit=3;
            }
        newsize = 0;
        return 1;
    }

    // 2ой раунд -> 3ий раунд----------------------
    if ((newsize > 0) && (r3 == 1)) {
        t = 97, c = 0;
        for (int i = 0; i < oldsize; i++) {
            if (c == 2) {
                t += 169;
                c = 0;
            }

            if (b2[i] != -1) {
                strcpy(rnd3[i], rnd2[b2[i]]);
            } else {
                strcpy(rnd3[i], " ");
            }

            text.setString(rnd3[i]);
            text.setPosition(540, t);
            window.draw(text);
            window.display();

            t += 25;
            c++;
        }
        for (int i =0; i<newsize;i++){
          if(strcmp(rnd3[i]," ")==0){
            win_proof=1;
          }
        }
    }
    //--------------------------------------------

    oldsize = newsize;
    newsize = (newsize + 1) / 2;
    if (oldsize <= 2){
        strcpy(winner,rnd3[winner_pos]);
        if ((win_proof==0)&&(strcmp(winner," ")!=0)){
          svit=3;
        }
        newsize = 0;
        return 2;
    }

    // 3ий раунд -> 4ый раунд----------------------
    if ((newsize > 0) && (r4 = 1)) {
        t = 205;
        c = 0;
        for (int i = 0; i < size; i++) {
            if (c == 2) {
                t += 389;
                c = 0;
            }

            if (c3[i] != -1) {
                strcpy(rnd4[i], rnd3[c3[i]]);
            } else {
                strcpy(rnd4[i], " ");
            }

            text.setString(rnd4[i]);
            text.setPosition(808, t);
            window.draw(text);
            window.display();

            t += 25;
            c++;
        }
        for (int i =0; i<newsize;i++){
          if(strcmp(rnd4[i]," ")==0){
            win_proof=1;
          }
        }
    }
    //--------------------------------------------

    oldsize = newsize;
    newsize = (newsize + 1) / 2;
    if (oldsize <= 2){
        strcpy(winner,rnd4[winner_pos]);
        if ((win_proof==0)&&(strcmp(winner," ")!=0)){
          svit=3;
        }
        newsize = 0;
        return 3;
    }

    // 4ый раунд -> 5ый раунд----------------------
    if ((newsize > 0) && (r5 = 1)) {
        t = 423;
        for (int i = 0; i < oldsize; i++) {

            if (d4[i] != -1) {
                strcpy(rnd5[i], rnd4[d4[i]]);
            } else {
                strcpy(rnd5[i], " ");
            }

            text.setString(rnd5[i]);
            text.setPosition(1008, t);
            window.draw(text);
            window.display();

            t += 25;
        }
        for (int i =0; i<newsize;i++){
          if(strcmp(rnd5[i]," ")==0){
            win_proof=1;
          }
        }
        strcpy(winner,rnd4[winner_pos]);
        if ((win_proof==0)&&(strcmp(winner," ")!=0)){
          svit=3;
        }
    }
    //--------------------------------------------

    return 4;
}

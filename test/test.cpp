#include "../src/menu.h"
#include "../src/draw.h"
#include "../src/steam.h"
#include "../src/column.h"
#include "gtest/gtest.h"
int svit=0;
int winner_pos=0;
char winner[30]=" ";


//Draw-----------------------------------------------------
TEST(Draw, TeamNum1)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=1;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 2;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum2)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=2;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 2;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum3)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=3;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 3;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum4)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=4;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 3;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum5)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=5;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum6)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=6;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum7)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=7;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum8)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=8;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete(team[i]);
    }
    delete(team);
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum9)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=9;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete(team[i]);
    }
    delete(team);
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum10)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=10;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum11)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=11;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum12)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=12;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum13)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=13;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum14)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=14;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum15)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=15;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum16)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=16;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum17)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=17;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum18)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=18;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum19)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=19;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);;
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum20)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=20;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum21)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=21;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum22)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=22;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum23)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=23;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum24)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=24;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum25)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=25;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(Draw, TeamNum26)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=26;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum27)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=27;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum28)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=28;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum29)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=29;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum30)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=30;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum31)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=31;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum32)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    char** team;
    team = new char*[size];

    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    int result = draw(window, team, font, size);
    window.close();
    for(int i=0;i<size;i++){
      delete (team[i]);
    }
    delete(team);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
//--------------------------------------------------


//Steam1---------------------------------------------

TEST(Steam, Background)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(1, 1);
    int result = steam(window, size, position);
    window.close();
    int expected = -1;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum1)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 20);
    int result = steam(window, size, position);
    window.close();
    int expected = 0;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum2)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 50);
    int result = steam(window, size, position);
    window.close();
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum3)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 80);
    int result = steam(window, size, position);
    window.close();
    int expected = 2;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum4)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 110);
    int result = steam(window, size, position);
    window.close();
    int expected = 3;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum5)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100,140);
    int result = steam(window, size, position);
    window.close();
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum6)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 160);
    int result = steam(window, size, position);
    window.close();
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum7)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 190);
    int result = steam(window, size, position);
    window.close();
    int expected = 6;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum8)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 220);
    int result = steam(window, size, position);
    window.close();
    int expected = 7;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum9)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 250);
    int result = steam(window, size, position);
    window.close();
    int expected = 8;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum10)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 270);
    int result = steam(window, size, position);
    window.close();
    int expected = 9;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum11)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 300);
    int result = steam(window, size, position);
    window.close();
    int expected = 10;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum12)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 330);
    int result = steam(window, size, position);
    window.close();
    int expected = 11;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum13)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 360);
    int result = steam(window, size, position);
    window.close();
    int expected = 12;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum14)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 380);
    int result = steam(window, size, position);
    window.close();
    int expected = 13;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum15)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 410);
    int result = steam(window, size, position);
    window.close();
    int expected = 14;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum16)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 440);
    int result = steam(window, size, position);
    window.close();
    int expected = 15;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum17)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 470);
    int result = steam(window, size, position);
    window.close();
    int expected = 16;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum18)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 490);
    int result = steam(window, size, position);
    window.close();
    int expected = 17;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum19)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 520);
    int result = steam(window, size, position);
    window.close();
    int expected = 18;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum20)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 550);
    int result = steam(window, size, position);
    window.close();
    int expected = 19;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum21)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 580);
    int result = steam(window, size, position);
    window.close();
    int expected = 20;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum22)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 600);
    int result = steam(window, size, position);
    window.close();
    int expected = 21;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum23)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 630);
    int result = steam(window, size, position);
    window.close();
    int expected = 22;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum24)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 660);
    int result = steam(window, size, position);
    window.close();
    int expected = 23;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum25)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 690);
    int result = steam(window, size, position);
    window.close();
    int expected = 24;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum26)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 710);
    int result = steam(window, size, position);
    window.close();
    int expected = 25;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum27)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 740);
    int result = steam(window, size, position);
    window.close();
    int expected = 26;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum28)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 770);
    int result = steam(window, size, position);
    window.close();
    int expected = 27;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum29)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 800);
    int result = steam(window, size, position);
    window.close();
    int expected = 28;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum30)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 820);
    int result = steam(window, size, position);
    window.close();
    int expected = 29;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum31)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 850);
    int result = steam(window, size, position);
    window.close();
    int expected = 30;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum32)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 880);
    int result = steam(window, size, position);
    window.close();
    int expected = 31;
    EXPECT_EQ(expected, result);
}
//--------------------------------------------------


//Steam2---------------------------------------------

TEST(Steam, Round2_TeamNum1)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 50);
    int result = steam(window, size, position);
    window.close();
    int expected = 100;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum2)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 80);
    int result = steam(window, size, position);
    window.close();
    int expected = 101;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum3)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 160);
    int result = steam(window, size, position);
    window.close();
    int expected = 102;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum4)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 180);
    int result = steam(window, size, position);
    window.close();
    int expected = 103;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum5)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 270);
    int result = steam(window, size, position);
    window.close();
    int expected = 104;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum6)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 300);
    int result = steam(window, size, position);
    window.close();
    int expected = 105;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum7)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 370);
    int result = steam(window, size, position);
    window.close();
    int expected = 106;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum8)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 400);
    int result = steam(window, size, position);
    window.close();
    int expected = 107;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum9)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 480);
    int result = steam(window, size, position);
    window.close();
    int expected = 108;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum10)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 520);
    int result = steam(window, size, position);
    window.close();
    int expected = 109;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum11)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 600);
    int result = steam(window, size, position);
    window.close();
    int expected = 110;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum12)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 630);
    int result = steam(window, size, position);
    window.close();
    int expected = 111;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum13)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 710);
    int result = steam(window, size, position);
    window.close();
    int expected = 112;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum14)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 740);
    int result = steam(window, size, position);
    window.close();
    int expected = 113;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum15)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 820);
    int result = steam(window, size, position);
    window.close();
    int expected = 114;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round2_TeamNum16)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(290, 850);
    int result = steam(window, size, position);
    window.close();
    int expected = 115;
    EXPECT_EQ(expected, result);
}
//--------------------------------------------------


//Steam3---------------------------------------------

TEST(Steam, Round3_TeamNum1)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(600, 110);
    int result = steam(window, size, position);
    window.close();
    int expected = 200;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round3_TeamNum2)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(600, 130);
    int result = steam(window, size, position);
    window.close();
    int expected = 201;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round3_TeamNum3)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(600, 320);
    int result = steam(window, size, position);
    window.close();
    int expected = 202;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round3_TeamNum4)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(600, 350);
    int result = steam(window, size, position);
    window.close();
    int expected = 203;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round3_TeamNum5)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(600, 550);
    int result = steam(window, size, position);
    window.close();
    int expected = 204;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round3_TeamNum6)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(600, 570);
    int result = steam(window, size, position);
    window.close();
    int expected = 205;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round3_TeamNum7)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(600, 770);
    int result = steam(window, size, position);
    window.close();
    int expected = 206;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round3_TeamNum8)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(600, 790);
    int result = steam(window, size, position);
    window.close();
    int expected = 207;
    EXPECT_EQ(expected, result);
}
//--------------------------------------------------


//Steam4---------------------------------------------

TEST(Steam, Round4_TeamNum1)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(820, 220);
    int result = steam(window, size, position);
    window.close();
    int expected = 300;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round4_TeamNum2)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(820, 240);
    int result = steam(window, size, position);
    window.close();
    int expected = 301;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round4_TeamNum3)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(820, 660);
    int result = steam(window, size, position);
    window.close();
    int expected = 302;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round4_TeamNum4)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(820, 680);
    int result = steam(window, size, position);
    window.close();
    int expected = 303;
    EXPECT_EQ(expected, result);
}
//--------------------------------------------------


//Steam5---------------------------------------------

TEST(Steam, Round5_TeamNum1)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(1020, 430);
    int result = steam(window, size, position);
    window.close();
    int expected = 400;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round5_TeamNum2)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(1020, 450);
    int result = steam(window, size, position);
    window.close();
    int expected = 401;
    EXPECT_EQ(expected, result);
}
//--------------------------------------------------

//Column---------------------------------------------
TEST(Column, TeamNum2)
{
    int size=2;
    int a1[size], b2[size], c3[size], d4[size];
    for (int i = 0; i < size; i++) {
        a1[i] = -1;
        b2[i] = -1;
        c3[i] = -1;
        d4[i] = -1;
    }

    char** team;
    char** rnd2;
    char** rnd3;
    char** rnd4;
    char** rnd5;

    team = new char*[size];
    rnd2 = new char*[size];
    rnd3 = new char*[size];
    rnd4 = new char*[size];
    rnd5 = new char*[size];
    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    for (int i = 0; i < size; i++) {
        rnd2[i] = new char[30];
        rnd3[i] = new char[30];
        rnd4[i] = new char[30];
        rnd5[i] = new char[30];

        *rnd2[i] = ' ';
        *rnd3[i] = ' ';
        *rnd4[i] = ' ';
        *rnd5[i] = ' ';
    }


    int r2 = 1, r3 = 1, r4 = 1, r5 = 1;
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    RenderWindow window(VideoMode(1500, 900), "Menu");


    int result = column(window,team,font,size,rnd2,rnd3,rnd4,rnd5,a1,b2,c3,d4,r2,r3,r4,r5);

    window.close();
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
    int expected = 0;

    EXPECT_EQ(expected, result);
}

TEST(Column, TeamNum4)
{
    int size=4;
    int a1[size], b2[size], c3[size], d4[size];
    for (int i = 0; i < size; i++) {
        a1[i] = -1;
        b2[i] = -1;
        c3[i] = -1;
        d4[i] = -1;
    }

    char** team;
    char** rnd2;
    char** rnd3;
    char** rnd4;
    char** rnd5;

    team = new char*[size];
    rnd2 = new char*[size];
    rnd3 = new char*[size];
    rnd4 = new char*[size];
    rnd5 = new char*[size];
    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    for (int i = 0; i < size; i++) {
        rnd2[i] = new char[30];
        rnd3[i] = new char[30];
        rnd4[i] = new char[30];
        rnd5[i] = new char[30];

        *rnd2[i] = ' ';
        *rnd3[i] = ' ';
        *rnd4[i] = ' ';
        *rnd5[i] = ' ';
    }


    int r2 = 1, r3 = 1, r4 = 1, r5 = 1;
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    RenderWindow window(VideoMode(1500, 900), "Menu");


    int result = column(window,team,font,size,rnd2,rnd3,rnd4,rnd5,a1,b2,c3,d4,r2,r3,r4,r5);

    window.close();
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
    int expected = 1;

    EXPECT_EQ(expected, result);
}

TEST(Column, TeamNum8)
{
    int size=8;
    int a1[size], b2[size], c3[size], d4[size];
    for (int i = 0; i < size; i++) {
        a1[i] = -1;
        b2[i] = -1;
        c3[i] = -1;
        d4[i] = -1;
    }

    char** team;
    char** rnd2;
    char** rnd3;
    char** rnd4;
    char** rnd5;

    team = new char*[size];
    rnd2 = new char*[size];
    rnd3 = new char*[size];
    rnd4 = new char*[size];
    rnd5 = new char*[size];
    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    for (int i = 0; i < size; i++) {
        rnd2[i] = new char[30];
        rnd3[i] = new char[30];
        rnd4[i] = new char[30];
        rnd5[i] = new char[30];

        *rnd2[i] = ' ';
        *rnd3[i] = ' ';
        *rnd4[i] = ' ';
        *rnd5[i] = ' ';
    }


    int r2 = 1, r3 = 1, r4 = 1, r5 = 1;
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    RenderWindow window(VideoMode(1500, 900), "Menu");


    int result = column(window,team,font,size,rnd2,rnd3,rnd4,rnd5,a1,b2,c3,d4,r2,r3,r4,r5);

    window.close();
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
    int expected = 2;

    EXPECT_EQ(expected, result);
}

TEST(Column, TeamNum16)
{
    int size=16;
    int a1[size], b2[size], c3[size], d4[size];
    for (int i = 0; i < size; i++) {
        a1[i] = -1;
        b2[i] = -1;
        c3[i] = -1;
        d4[i] = -1;
    }

    char** team;
    char** rnd2;
    char** rnd3;
    char** rnd4;
    char** rnd5;

    team = new char*[size];
    rnd2 = new char*[size];
    rnd3 = new char*[size];
    rnd4 = new char*[size];
    rnd5 = new char*[size];
    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    for (int i = 0; i < size; i++) {
        rnd2[i] = new char[30];
        rnd3[i] = new char[30];
        rnd4[i] = new char[30];
        rnd5[i] = new char[30];

        *rnd2[i] = ' ';
        *rnd3[i] = ' ';
        *rnd4[i] = ' ';
        *rnd5[i] = ' ';
    }


    int r2 = 1, r3 = 1, r4 = 1, r5 = 1;
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    RenderWindow window(VideoMode(1500, 900), "Menu");


    int result = column(window,team,font,size,rnd2,rnd3,rnd4,rnd5,a1,b2,c3,d4,r2,r3,r4,r5);

    window.close();
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
    int expected = 3;

    EXPECT_EQ(expected, result);
}

TEST(Column, TeamNum32)
{
    int size=32;
    int a1[size], b2[size], c3[size], d4[size];
    for (int i = 0; i < size; i++) {
        a1[i] = -1;
        b2[i] = -1;
        c3[i] = -1;
        d4[i] = -1;
    }

    char** team;
    char** rnd2;
    char** rnd3;
    char** rnd4;
    char** rnd5;

    team = new char*[size];
    rnd2 = new char*[size];
    rnd3 = new char*[size];
    rnd4 = new char*[size];
    rnd5 = new char*[size];
    for (int i = 0; i < size; i++) {
        team[i] = new char[30];
        char str[30] = "TeamNum";
        char num[30];
        sprintf(num, "%d", i+1);
        strcat(str, num);
        strcpy(team[i], str);
    }
    for (int i = 0; i < size; i++) {
        rnd2[i] = new char[30];
        rnd3[i] = new char[30];
        rnd4[i] = new char[30];
        rnd5[i] = new char[30];

        *rnd2[i] = ' ';
        *rnd3[i] = ' ';
        *rnd4[i] = ' ';
        *rnd5[i] = ' ';
    }


    int r2 = 1, r3 = 1, r4 = 1, r5 = 1;
    Font font;
    font.loadFromFile("font/ubuntu.ttf");
    RenderWindow window(VideoMode(1500, 900), "Menu");


    int result = column(window,team,font,size,rnd2,rnd3,rnd4,rnd5,a1,b2,c3,d4,r2,r3,r4,r5);

    window.close();
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
    int expected = 4;

    EXPECT_EQ(expected, result);
}






//--------------------------------------------------







int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

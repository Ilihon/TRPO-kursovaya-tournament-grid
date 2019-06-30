#include "../src/menu.h"
#include "../src/draw.h"
#include "../src/steam.h"
#include "../src/column.h"
#include "gtest/gtest.h"

//Draw-----------------------------------------------------
TEST(Draw, TeamNum1)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=1;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 2;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum2)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=2;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 2;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum3)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=3;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 3;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum4)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=4;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 3;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum5)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=5;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum6)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=6;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum7)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=7;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum8)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=8;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum9)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=9;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum10)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=10;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum11)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=11;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum12)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=12;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum13)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=13;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum14)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=14;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum15)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=15;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum16)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=16;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum17)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=17;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum18)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=18;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum19)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=19;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum20)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=20;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum21)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=21;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum22)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=22;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum23)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=23;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum24)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=24;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum25)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=25;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum25)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=25;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum25)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=25;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum26)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=26;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum27)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=27;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum28)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=28;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum29)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=29;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum30)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=30;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum31)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=31;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Draw, TeamNum32)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    char team[size][30];
    for (int i = 0; i < size; i++) {
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
    int expected = 1;
    EXPECT_EQ(expected, result);
}
//--------------------------------------------------


//Steam---------------------------------------------
TEST(Steam, Round1_TeamNum1)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 20);
    int result = steam(window, size, position);
    int expected = 0;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum2)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 50);
    int result = steam(window, size, position);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum3)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 80);
    int result = steam(window, size, position);
    int expected = 2;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum4)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 110);
    int result = steam(window, size, position);
    int expected = 3;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum5)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100,140);
    int result = steam(window, size, position);
    int expected = 4;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum6)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 160);
    int result = steam(window, size, position);
    int expected = 5;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum7)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 190);
    int result = steam(window, size, position);
    int expected = 6;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum8)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 220);
    int result = steam(window, size, position);
    int expected = 7;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum9)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 250);
    int result = steam(window, size, position);
    int expected = 8;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum10)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 270);
    int result = steam(window, size, position);
    int expected = 9;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum11)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 300);
    int result = steam(window, size, position);
    int expected = 10;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum12)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 330);
    int result = steam(window, size, position);
    int expected = 11;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum13)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 360);
    int result = steam(window, size, position);
    int expected = 12;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum14)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 380);
    int result = steam(window, size, position);
    int expected = 13;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum15)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 410);
    int result = steam(window, size, position);
    int expected = 14;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum16)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 440);
    int result = steam(window, size, position);
    int expected = 15;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum17)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 470);
    int result = steam(window, size, position);
    int expected = 16;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum18)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 490);
    int result = steam(window, size, position);
    int expected = 17;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum19)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 520);
    int result = steam(window, size, position);
    int expected = 18;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum20)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 550);
    int result = steam(window, size, position);
    int expected = 19;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum21)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 580);
    int result = steam(window, size, position);
    int expected = 20;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum22)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 600);
    int result = steam(window, size, position);
    int expected = 21;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum23)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 630);
    int result = steam(window, size, position);
    int expected = 22;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum24)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 660);
    int result = steam(window, size, position);
    int expected = 23;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum25)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 690);
    int result = steam(window, size, position);
    int expected = 24;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum26)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 710);
    int result = steam(window, size, position);
    int expected = 25;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum27)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 740);
    int result = steam(window, size, position);
    int expected = 26;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum28)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 770);
    int result = steam(window, size, position);
    int expected = 27;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum29)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 800);
    int result = steam(window, size, position);
    int expected = 28;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum30)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 820);
    int result = steam(window, size, position);
    int expected = 29;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum31)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 850);
    int result = steam(window, size, position);
    int expected = 30;
    EXPECT_EQ(expected, result);
}

TEST(Steam, Round1_TeamNum32)
{
    RenderWindow window(VideoMode(1500, 900), "Menu");
    int size=32;
    Vector2i position = Vector2i(100, 880);
    int result = steam(window, size, position);
    int expected = 31;
    EXPECT_EQ(expected, result);
}


int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

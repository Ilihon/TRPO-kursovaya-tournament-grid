#include "../src/menu.h"
#include "../src/draw.h"
#include "../src/steam.h"
#include "../src/column.h"
#include "gtest/gtest.h"

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



int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

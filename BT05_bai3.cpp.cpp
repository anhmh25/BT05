#include <iostream>

using namespace std;

#define col 100

void draw_char(char image[][col], int x, int y, char kitu);
void draw_text(char image[][col], string text, int x, int y);

int main()
{
    char image[100][100] = { ' ' };
    draw_text(image, "kevin", 0, 0);
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 40; j++)
        {
            cout << image[i][j];
        }
        cout << endl;
    }
    return 0;
}

void draw_char(char image[][col], int x, int y, char kitu)
{
    int kituin = (int)(kitu);
    switch (kituin)
    {
        //E
    case 101: case 69:
    {
        for (int j = y; j < y + 6; j++) image[x][j] = '#';
        image[x + 1][y] = '#';
        for (int j = y; j < y + 5; j++) image[x + 2][j] = '#';
        image[x + 3][y] = '#'; image[x + 4][y] = '#';
        for (int j = y; j < y + 6; j++) image[x + 5][j] = '#';
        break;
    }
    //I
    case 105: case 73:
    {
        for (int i = x; i < x + 6; i++) image[i][y + 3] = '#';
        break;
    }
    //K
    case 107: case 75:
    {
        for (int i = x; i < x + 6; i++) image[i][y] = '#';
        image[x + 2][y + 1] = '#'; image[x + 2][y + 2] = '#';
        for (int i = 0; i < 3; i++) image[x + i][y + 5 - i] = '#';
        for (int i = 3; i < 6; i++) image[x + i][y + i] = '#';
        break;
    }
    //N
    case 110: case 78:
    {
        for (int i = x; i < x + 6; i++) image[i][y] = '#';
        for (int i = x; i < x + 6; i++) image[i][y + 5] = '#';
        for (int i = 1; i < 5; i++) image[x + i][y + i] = '#';
        break;
    }
    //V
    case 118: case 86:
    {
        for (int i = x; i < x + 4; i++) image[i][y] = '#';
        for (int i = x; i < x + 4; i++) image[i][y + 5] = '#';
        image[x + 4][y + 1] = '#'; image[x + 4][y + 4] = '#';
        image[x + 5][y + 2] = '#'; image[x + 5][y + 3] = '#';
        break;
    }
    }
}
void draw_text(char image[][col], string text, int x, int y)
{
    int n = text.length();
    for (int i = 0; i < n; i++)
    {
        draw_char(image, x, y, text[i]);
        y += 8;
    }
}
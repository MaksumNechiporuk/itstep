#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
#include<conio.h>
#include<ctype.h>
#include<SFML/Graphics.hpp>
//Game settings
const int rowsCount = 10;
const int columnsCount = 15;

const unsigned char symbolHero = 2;
const unsigned char symbolWall = 177;
const unsigned char symbolBox = 254;
const unsigned char symbolExit = 176;

const unsigned char levelData0[rowsCount][columnsCount + 1] = {
	"*****2*********",
	"*  X    *   X**",
	"* X *** X   * *",
	"#X X  X ##X  #",
    "# X   ## #    #",
    "#######     #X#",
    "#   X   XX #X #",
    "#XXX # # X   ##",
    "#1 X #   X X  #",
    "###############",


                                                              };

bool isGameActive = true;
unsigned char levelData[rowsCount][columnsCount];
int heroRow = 0;
int heroColumn = 0;

void SetupSystem()
{
	srand(time(0));
}
void Initialise()
{
	for (int i = 0; i < rowsCount; i++)
	{
		for (int j = 0; j < columnsCount; j++)
		{
			unsigned char symbol = levelData0[i][j];
		
			switch (symbol)
			{
			case '*':case '#':
				{
					levelData[i][j] = symbolWall;
					break;
				}
			case '1':
			{
				levelData[i][j] = symbolHero;

				heroRow = i;
				heroColumn = j;
				break;
			}

			case '2':
			{
				levelData[i][j] = symbolExit;
				break;
			}
			case 'X':
			{
				levelData[i][j] = symbolBox;
				break;
			}
			default:
			{
				levelData[i][j] = symbol;
				break;
			}
			}
		}
	}

}
void Render()
{
	system("cls");
	printf("\n\n\t");
	for (int i = 0; i < rowsCount; i++)
	{
		for (int j = 0; j < columnsCount; j++)
		{
			unsigned char symbol = levelData[i][j];
			printf("%c", symbol);
		}
		printf("\n\t");
	}
}
void Update()
{
	unsigned char inputChar = _getch();
}
void Shutdown()
{
	system("cls");
	printf("\n\tPress any key to continue...");
	_getch();
}
int main()
{
	SetupSystem();
	Initialise();
	do {
		Render();
		Update();
	} while (isGameActive);
	Shutdown();
	return 0;
}

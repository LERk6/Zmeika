#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));

    int width = 20, //ширина карты
        height = 20; //высота карты
    char mapArray[height][width],   //карта
         u = ' '; //выход

    while (u!=27) //проверка на клавишу esc(27)
    {
        system("cls");

        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                if (i==0 || i==height-1)
                {
                        mapArray[i][j] = '#';
                } else {
                    if (j==0 || j==width-1)
                    {
                        mapArray[i][j]='#';
                    } else {
                        mapArray[i][j]=' ';
                    }
                }

                printf("%c",mapArray[i][j]);
                
            }
            printf("\n");
        
        }

        printf("Press ESC to exit the game.\n");
        u = getch();

        switch (u)
        {
            case 27:
                do
                {
                    system("cls");
                    printf("###########################\n");
                    printf("#                         #\n");
                    printf("#   Quit the game?[y/n]   #\n");
                    printf("#                         #\n");
                    printf("###########################\n");
                    u = getch();  
                } while (u!='y' && u!='Y' && u!='n' && u!='N');
                if (u=='y' || u=='Y')  
                        u = 27;
                break;
            case 72: //клавиша стрелочки вверх
            case 'w':
            case 'W':
                break;    
            
            case 75: //клавиша стрелочки влево    
            case 'a':
            case 'A':
                break;
            
            case 77: //клавиша стрелочки вправо
            case 'd':
            case 'D':
                break;
            
            case 80: //клавиша стрелочки вниз
            case 's':
            case 'S':
                break;
            
            
        }
    }

    return 0;
}
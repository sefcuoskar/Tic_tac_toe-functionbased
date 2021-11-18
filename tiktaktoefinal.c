#include<stdio.h>
#include<conio.h>

char field[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int checkwin_status();
void board();
int main()
{
    char mark;
    int player = 1, i, choice, k;

    do{
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d input a position 1-9: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        if (choice == 1 && field[1] == '1')
            field[1] = mark;

        else if(choice == 2 && field[2] == '2')
            field[2] = mark;

        else if(choice == 3 && field[3] == '3')
            field[3] = mark;

        else if(choice == 4 && field[4] == '4')
            field[4] = mark;

        else if(choice == 5 && field[5] == '5')
            field[5] = mark;

        else if(choice == 6 && field[6] == '6')
            field[6] = mark;

        else if(choice == 7 && field[7] == '7')
            field[7] = mark;

        else if(choice == 8 && field[8] == '8')
            field[8] = mark;

        else if(choice == 9 && field[9] == '9')
            field[9] = mark;

        else
        {
            printf("Invalid move!");

            player--;
            getch();
        }
        i = checkwin_status();

        player++;
    }while (i ==  -1);

    board();

    if (i == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    getch();
    return 0;
}


void board()
{
system("cls");
printf("\n\n\t     TIC TAC TOE \n\n");
printf("\n     Player 01: X and Player 02: O\n");
printf("\t __________________\n");
printf("\t|     |     |     |\n");
printf("\t|  %c  |  %c  |  %c  |\n", field[1], field[2], field[3]);
printf("\t|_____|_____|_____|\n");
printf("\t|     |     |     |\n");
printf("\t|  %c  |  %c  |  %c  |\n", field[4], field[5], field[6]);
printf("\t|_____|_____|_____|\n");
printf("\t|     |     |     |\n");
printf("\t|  %c  |  %c  |  %c  |\n", field[7], field[8], field[9]);
printf("\t|_____|_____|_____|\n");
}

int checkwin_status()
{
if(field[1] == field[2] && field[2] == field[3])
    return 1;
else if(field[4] == field[5] && field[5] == field[6])
    return 1;
else if(field[7] == field[8] && field[8] == field[9])
    return 1;
else if(field[1] == field[4] && field[4] == field[7])
    return 1;
else if(field[2] == field[5] && field[5] == field[8])
    return 1;
else if(field[3] == field[6] && field[6] == field[9])
    return 1;
else if(field[1] == field[5] && field[5] == field[9])
    return 1;
else if(field[3] == field[5] && field[5] == field[7])
    return 1;
else if(field[1] != '1' && field[2] != '2' && field[3] != '3' && field[4] != '4' && field[5] != '5' && field[6] != '6' && field[7] != '7' && field[8] != '8' && field[9] != '9')

    return 0;
else
    return -1;
}

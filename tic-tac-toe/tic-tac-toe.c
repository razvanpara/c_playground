#include <stdio.h>

#define GRID_SIZE 10
#define MAX_TURNS 9
#define XCHAR 'x'
#define OCHAR 'o'

//decl
void displayBoard(char *board);
char getDisplayChar(int cell, char *board);
_Bool playTurn(int cell, char val, char *board);
_Bool checkIfGridPositionsEqChar(int p1, int p2, int p3, char c, char *board);
_Bool checkIfGameOver(char turnType, char *board);
void changeTurn(char *currentTurn);
//impl
void displayBoard(char *board)
{
    printf(" ___ ___ ___\n");
    for (int i = 1; i < GRID_SIZE; i += 3)
    {
        printf("|   |   |   |\n"
               "| %c | %c | %c |\n"
               "|___|___|___|\n",
               getDisplayChar(i, board), getDisplayChar(i + 1, board), getDisplayChar(i + 2, board));
    }
}
char getDisplayChar(int cell, char *board)
{
    char c = *(board + cell);
    c = c == '\0' ? cell + '0' : c; // changing the value of the char to index if not set
    return c;
}
_Bool playTurn(int cell, char val, char *board)
{
    if (cell >= 1 && cell <= 9 && *(board + cell) == '\0')
    {
        *(board + cell) = val;
        return 1;
    }
    return 0;
}
_Bool checkIfGridPositionsEqChar(int p1, int p2, int p3, char c, char *board)
{
    return *(board + p1) == c &&
           *(board + p2) == c &&
           *(board + p3) == c;
}
_Bool checkIfGameOver(char turnType, char *board)
{
    return checkIfGridPositionsEqChar(1, 2, 3, turnType, board) ||
           checkIfGridPositionsEqChar(3, 6, 9, turnType, board) ||
           checkIfGridPositionsEqChar(7, 8, 9, turnType, board) ||
           checkIfGridPositionsEqChar(1, 4, 7, turnType, board) ||
           checkIfGridPositionsEqChar(1, 5, 9, turnType, board) ||
           checkIfGridPositionsEqChar(3, 5, 7, turnType, board) ||
           checkIfGridPositionsEqChar(2, 5, 8, turnType, board) ||
           checkIfGridPositionsEqChar(4, 5, 6, turnType, board);
}
void changeTurn(char *currentTurn)
{
    *currentTurn = *currentTurn == XCHAR ? OCHAR : XCHAR;
}
int main()
{
    char board[10] = {'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0'};
    int turn = 0;
    char turnType = XCHAR;
    printf("TIC TAC TOE:\n");
    while (turn++ < MAX_TURNS)
    {
        displayBoard(board);
        int input;
        printf("%c's Turn:\n", turnType);
        scanf("%i", &input);
        while (!playTurn(input, turnType, board))
        {
            printf("%i is invalid position, enter again:\n", input);
            scanf("%i", &input);
        }
        if (checkIfGameOver(turnType, board))
        {
            printf("%c has won!", turnType);
            break;
        }
        changeTurn(&turnType);
    }
    printf("\nGame ended:\nLast board state:\n");
    displayBoard(board);
    return 0;
}
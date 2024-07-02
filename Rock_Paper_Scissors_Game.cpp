#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char getComputerMove()
{
    int Move = rand() % 3;
    if (Move == 0)
    {
        return 'r';
    }
    else if (Move == 1)
    {
        return 'p';
    }
    return 's';
}
int getResult(char playerMove, char computerMove)
{
    if (playerMove == computerMove)
    {
        return 0;
    }
    if (playerMove == 's' && computerMove == 'p')
    {
        return 1;
    }
    if (playerMove == 's' && computerMove == 'r')
    {
        return -1;
    }
    if (playerMove == 'p' && computerMove == 'r')
    {
        return 1;
    }
    if (playerMove == 'p' && computerMove == 's')
    {
        return -1;
    }
    if (playerMove == 'r' && computerMove == 'r')
    {
        return -1;
    }
    if (playerMove == 'r' && computerMove == 's')
    {
        return 1;
    }
}
int main()
{
    srand(time(0));
    char playerMove;
    int playerwin = 0, computerwin = 0;
    cout << "\n\n\n\t\t\tWelcome to Stone Paper Scissor Game\n ";
    do
    {
        cout << "\n\t\tEnter r for ROCK, p for PAPRE, s for SCISSOR\n\t\t\t\t\t";
        while (1)
        {
            cin >> playerMove;
            if (playerMove == 'r' || playerMove == 'p' || playerMove == 's')
            {
                break;
            }
            else
            {
                cout << "Invalid input!!!!!.\nPlease enter r, p, or s." << endl;
            }
        }
        char ComputerMove = getComputerMove();
        int Result = getResult(playerMove, ComputerMove);
        if (Result == 0)
        {
            cout << "\n\t\tGame Draw!\n";
        }
        else if (Result == 1)
        {
            cout << "\n\t\t\t You Win!!\n";
            playerwin++;
        }
        else
        {
            cout << "\n\t\t\tOhh! Computer win!\n";
            computerwin++;
        }
        cout << "\t\t\tYour Move : " << playerMove << endl;
        cout << "\t\t\tComputer's Move : " << ComputerMove << endl;
    } while (playerwin < 3 && computerwin < 3);
    if (playerwin == 3)
    {
        cout << "\n\t\tCongratulations! Player won the game!\n";
    }
    else
    {
        cout << "\n\t\tOhh! Computer won the game!\n";
    }
    system("cls");
    cout << "\t\tFinal Score:\n";
    cout << "\t\tPlayer: " << playerwin << "  Computer: " << computerwin << endl;

    return 0;
}

#include <cstdlib>
#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
void easy()
{
    int secretNumver = 1+(rand() % 20);
    int playerChoice;
    int ChoiceLeft = 10;
    cout << "\n You have 10 choices for finding the secret number between 1 to 20.";
    for (int i = 1; i <= 10; i++)
    {
        cout << "\n\nEnetr the number: ";
        cin >> playerChoice;
        if (playerChoice == secretNumver)
        {
            system("CLS");
            cout << "well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "\t\t\t Thanks for playing..." << endl;
            break;
        }
        else
        {
            cout << "Nope, " << playerChoice << " is not the right number\n";
            if (playerChoice > secretNumver)
            {
                cout << "The secret number is smaller than the number your have chosen" << endl;
            }
            else
            {
                cout << "The secret number is greater than the number your have chosen" << endl;
            }
            ChoiceLeft--;
            cout << ChoiceLeft << " choies left." << endl;
            if (ChoiceLeft == 0)
            {
                cout << "Yout Couldn't find the secret number,it was " << secretNumver << endl;
                cout << " Play the game again to win!!\n\n";
            }
        }
    }
}
void medium()
{
    int secretNumver = 1+(rand() % 20);
    int playerChoice;
    int ChoiceLeft = 7;
    cout << "\n You have 7 choices for finding the secret number between 1 to 20";
    for (int i = 1; i <= 10; i++)
    {
        cout << "\n\nEnetr the number: ";
        cin >> playerChoice;
        if (playerChoice == secretNumver)
        {
            system("CLS");
            cout << "well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "\t\t\t Thanks for playing..." << endl;
            break;
        }
        else
        {
            cout << "Nope, " << playerChoice << " is not the right number\n";
            if (playerChoice > secretNumver)
            {
                cout << "The secret number is smaller than the number your have chosen" << endl;
            }
            else
            {
                cout << "The secret number is greater than the number your have chosen" << endl;
            }
            ChoiceLeft--;
            cout << ChoiceLeft << " choies left." << endl;
            if (ChoiceLeft == 0)
            {
                cout << "Yout Couldn't find the secret number,it was " << secretNumver << endl;
                cout << " Play the game again to win!!\n\n";
            }
        }
    }
}
void difficult()
{
    int secretNumver = 1+(rand() % 20);
    int playerChoice;
    int ChoiceLeft = 5;
    cout << "\n You have 5 choices for finding the secret number between 1 to 20";
    for (int i = 1; i <= 5; i++)
    {
        cout << "\n\nEnetr the number: ";
        cin >> playerChoice;
        if (playerChoice == secretNumver)
        {
            system("CLS");
            cout << "well played! You won, " << playerChoice << " is the secret number" << endl;
            cout << "\t\t\t Thanks for playing..." << endl;
            break;
        }
        else
        {
            cout << "Nope, " << playerChoice << " is not the right number\n";
            if (playerChoice > secretNumver)
            {
                cout << "The secret number is smaller than the number your have chosen" << endl;
            }
            else
            {
                cout << "The secret number is greater than the number your have chosen" << endl;
            }
            ChoiceLeft--;
            cout << ChoiceLeft << " choies left." << endl;
            if (ChoiceLeft == 0)
            {
                cout << "Yout Couldn't find the secret number,it was " << secretNumver << endl;
                cout << "Play the game again to win!!\n\n";
            }
        }
    }
}

int main()
{
    srand(time(0));
    cout << "\n\t\t\tWelcome to guessThe Number game!" << endl;
    cout << "You have to guess a number between 1 to 20." << endl
         << "You'll have limited choices based on the "
         << "level you choose.Good Luck!"
         << endl;
    cout << "\n Enter ther different level:\n";
    cout << "1 for easy!\t";
    cout << "2 for medium!\t";
    cout << "3 for difficult!\t";
    cout << "0 for ending the game!\n"
         << endl;
    int difficultyChoice;

    difficultyChoice = getch();
    switch (difficultyChoice)
    {
    case '1':
        easy();
        break;
    case '2':
        medium();
        break;
    case '3':
        difficult();
        break;
    case '0':
        exit(0);
        break;
    default:
        cout << "Wrong choice,enter valid choice to play the game!(0,1,2,3)" << endl;
        break;
    }
}

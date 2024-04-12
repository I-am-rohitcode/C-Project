#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void easy()
{
    int secretNumber = 1 + (rand() % 20);
    int playerChoice;
    int ChoiceLeft = 10;
    cout << "\nYou have 10 choices to find the secret number between 1 to 20." << endl;
    while (ChoiceLeft > 0)
    {
        cout << "\nEnter your choice: ";
        cin >> playerChoice;
        if (playerChoice >= 1 && playerChoice <= 20)
        {
            if (playerChoice == secretNumber)
            {
                cout << "Congratulations! You won. " << playerChoice << " is the secret number." << endl;
                break;
            }
            else
            {
                cout << "Nope, " << playerChoice << " is not the right number." << endl;
                if (playerChoice > secretNumber)
                {
                    cout << "The secret number is smaller than the number you have chosen." << endl;
                }
                else
                {
                    cout << "The secret number is greater than the number you have chosen." << endl;
                }
                ChoiceLeft--;
                cout << ChoiceLeft << " choices left." << endl;
                if (ChoiceLeft == 0)
                {
                    cout << "\nYou couldn't find the secret number. It was " << secretNumber << "." << endl;
                    cout << "Play the game again to win!" << endl;
                }
            }
        }
        else
        {
            cout << "Please enter a number between 1 and 20." << endl;
        }
    }
}

void medium()
{
    int secretNumber = 1 + (rand() % 20);
    int playerChoice;
    int ChoiceLeft = 7;
    cout << "\nYou have 7 choices to find the secret number between 1 to 20." << endl;
    while (ChoiceLeft > 0)
    {
        cout << "\nEnter your choice: ";
        cin >> playerChoice;
        if (playerChoice >= 1 && playerChoice <= 20)
        {
            if (playerChoice == secretNumber)
            {
                cout << "Congratulations! You won. " << playerChoice << " is the secret number." << endl;
                break;
            }
            else
            {
                cout << "Nope, " << playerChoice << " is not the right number." << endl;
                if (playerChoice > secretNumber)
                {
                    cout << "The secret number is smaller than the number you have chosen." << endl;
                }
                else
                {
                    cout << "The secret number is greater than the number you have chosen." << endl;
                }
                ChoiceLeft--;
                cout << ChoiceLeft << " choices left." << endl;
                if (ChoiceLeft == 0)
                {
                    cout << "\nYou couldn't find the secret number. It was " << secretNumber << "." << endl;
                    cout << "Play the game again to win!" << endl;
                }
            }
        }
        else
        {
            cout << "Please enter a number between 1 and 20." << endl;
        }
    }
}

void difficult()
{
    int secretNumber = 1 + (rand() % 20);
    int playerChoice;
    int ChoiceLeft = 5;
    cout << "\nYou have 5 choices to find the secret number between 1 to 20." << endl;
    while (ChoiceLeft > 0)
    {
        cout << "\nEnter your choice: ";
        cin >> playerChoice;
        if (playerChoice >= 1 && playerChoice <= 20)
        {
            if (playerChoice == secretNumber)
            {
                cout << "Congratulations! You won. " << playerChoice << " is the secret number." << endl;
                break;
            }
            else
            {
                cout << "Nope, " << playerChoice << " is not the right number." << endl;
                if (playerChoice > secretNumber)
                {
                    cout << "The secret number is smaller than the number you have chosen." << endl;
                }
                else
                {
                    cout << "The secret number is greater than the number you have chosen." << endl;
                }
                ChoiceLeft--;
                cout << ChoiceLeft << " choices left." << endl;
                if (ChoiceLeft == 0)
                {
                    cout << "\nYou couldn't find the secret number. It was " << secretNumber << "." << endl;
                    cout << "Play the game again to win!" << endl;
                }
            }
        }
        else
        {
            cout << "Please enter a number between 1 and 20." << endl;
        }
    }
}

int main()
{
    srand(time(0));
    cout << "\t\t\tWelcome to Guess The Number Game!" << endl;
    cout << "You have to guess a number between 1 to 20." << endl;
    cout << "You'll have limited choices based on the level you choose. Good Luck!" << endl;
    cout << "\nChoose the difficulty level:\n";
    cout << "1 for Easy\t\t";
    cout << "2 for Medium\t\t";
    cout << "3 for Difficult\t\t";
    cout << "0 to Quit\n"
         << endl;

    int difficultyChoice;
    cin >> difficultyChoice;

    switch (difficultyChoice)
    {
    case 1:
        easy();
        break;
    case 2:
        medium();
        break;
    case 3:
        difficult();
        break;
    case 0:
        cout << "Exiting the game. Goodbye!" << endl;
        break;
    default:
        cout << "Wrong choice. Enter a valid choice to play the game! (0, 1, 2, 3)" << endl;
        break;
    }

    return 0;
}

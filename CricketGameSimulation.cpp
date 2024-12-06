#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Ggames
{
    int runs = 0;
    int computerRuns = 0;
};

Ggames st;

bool toss()
{
    return rand() % 2 == 0;
}

void batting(bool firstInning)
{
    int balls = 30;
    int teamMember = 8;
    int player;
    bool targetReached = false;
    cout << "\n========== Your Batting Innings ==========" << endl;

    while (balls > 0 && teamMember > 0)
    {
        int computer = (rand() % 6) + 1;
        cout << "Enter your number between 1 to 6: ";
        cin >> player;

        if (player < 1 || player > 6)
        {
            cout << "Invalid input. Please enter a number between 1 and 6." << endl;
            continue;
        }

        cout << "System: " << computer << endl;

        if (player == computer)
        {
            teamMember--;
            balls--;
            cout << "OUT!" << endl;
            cout << "Your score is " << st.runs << "/" << (8 - teamMember)
                 << " (" << balls << " balls remaining)" << endl;
            cout << "            =================            " << endl;
        }
        else
        {
            st.runs += player;
            balls--;
            cout << "Your score is " << st.runs << "/" << (8 - teamMember) << endl
                 << " (" << balls << " balls remaining)" << endl;
            cout << "            =================            " << endl;
        }

        if (teamMember == 0)
        {
            cout << "All players are out." << endl;
            break;
        }

        // If this is the first inning, there is no need to check the target yet.
        if (!firstInning && st.runs > st.computerRuns)
        {
            targetReached = true;
            break;
        }
    }

    if (firstInning)
    {
        cout << "Your Total run is " << st.runs << "/" << (8 - teamMember) << endl;
        cout << "==========================================" << endl;
    }
    else
    {
        cout << "Your total runs are " << st.runs << endl;
        if (targetReached)
        {
            cout << "Congratulations! You reached the target!" << endl;
        }
        else
        {
            cout << "Sorry, you did not reach the target!" << endl;
        }
        cout << "==========================================" << endl;
    }
}

void bowling(bool firstInning)
{
    int balls = 30;
    int teamMember = 8;
    bool targetReached = false;
    cout << "\n\n========== Your Bowling Innings ==========" << endl;

    while (balls > 0 && teamMember > 0)
    {
        int player;
        int computer = (rand() % 6) + 1;
        cout << "Enter your number between 1 to 6: ";
        cin >> player;

        if (player < 1 || player > 6)
        {
            cout << "Invalid input. Please enter a number between 1 and 6." << endl;
            continue;
        }

        cout << "You bowled: " << player << endl;
        cout << "System batsman played: " << computer << endl;

        if (player == computer)
        {
            teamMember--;
            balls--;
            cout << "OUT!" << endl;
            cout << "System's score is " << st.computerRuns << "/" << (8 - teamMember)
                 << " (" << balls << " balls remaining)" << endl;
            cout << "            =================            " << endl;
        }
        else
        {
            st.computerRuns += computer;
            balls--;
            cout << "System's score is " << st.computerRuns << "/" << (8 - teamMember) << endl
                 << "Balls left: " << balls << endl;
            cout << "            =================            " << endl;
        }

        if (teamMember == 0)
        {
            cout << "All players are out." << endl;
            break;
        }

        // Check target after bowling, if it's the second inning
        if (!firstInning && st.computerRuns > st.runs)
        {
            targetReached = true;
            break;
        }
    }

    if (firstInning)
    {
        cout << "System's Total run is " << st.computerRuns << "/" << (8 - teamMember) << endl;
        cout << "==========================================" << endl;
    }
    else
    {
        cout << "System's total runs are " << st.computerRuns << endl;
        if (targetReached)
        {
            cout << "Oops! System reached the target!" << endl;
        }
        else
        {
            cout << "System did not reach the target!" << endl;
        }
        cout << "==========================================" << endl;
    }
}

void gameResult()
{
    cout << "==================== Game Result ====================" << endl;
    cout << "Your total runs: " << st.runs << endl;
    cout << "System's total runs: " << st.computerRuns << endl;

    if (st.runs > st.computerRuns)
    {
        cout << "Congratulations! You win the match!" << endl;
    }
    else if (st.runs < st.computerRuns)
    {
        cout << "You lost the match. Better luck next time!" << endl;
    }
    else
    {
        cout << "It's a tie! Well played both teams." << endl;
    }
    cout << "==========================================" << endl;
}

int main()
{
    srand(time(0));

    bool tossResult = toss();
    bool playerWinsToss = false;
    int computerdecision;
    int userChoice;
    cout << "\n\nWelcome to Cricket Game Simulation!" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Choose 0 for heads or 1 for tails: ";
    cin >> userChoice;

    if (userChoice == 0 && tossResult == true)
    {
        playerWinsToss = true;
        cout << "You chose heads and won the toss!" << endl;
    }
    else if (userChoice == 1 && tossResult == false)
    {
        playerWinsToss = true;
        cout << "You chose tails and won the toss!" << endl;
    }
    else
    {
        cout << "You lost the toss!" << endl;
    }

    computerdecision = rand() % 2;

    if (playerWinsToss)
    {
        int decision;
        cout << "Choose 0 to bat or 1 to bowl: ";
        cin >> decision;

        if (decision == 0)
        {
            cout << "You chose to bat!" << endl;
            batting(true); // First innings for batting
            cout << "==========================================" << endl;
            cout << "Target is " << st.runs << endl;
            bowling(false); // Second innings for bowling
        }
        else if (decision == 1)
        {
            cout << "You chose to bowl!" << endl;
            bowling(true); // First innings for bowling
            cout << "==========================================" << endl;
            cout << "Your Target is " << st.computerRuns << endl;
            batting(false); // Second innings for batting
        }
        else
        {
            cout << "Invalid choice. Please choose 0 to bat or 1 to bowl." << endl;
        }
    }
    else
    {
        if (computerdecision == 0)
        {
            cout << "Computer chose to bat!" << endl;
            bowling(true); // First innings for bowling
            cout << "==========================================" << endl;
            cout << "Your Target is " << st.computerRuns << endl;
            batting(false); // Second innings for batting
        }
        else
        {
            cout << "Computer chose to bowl!" << endl;
            batting(true); // First innings for batting
            cout << "==========================================" << endl;
            cout << "Computer target is " << st.runs << endl;
            bowling(false); // Second innings for bowling
        }
    }

    gameResult();
    return 0;
}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    int score = (rand() % 31) + 100; 
    int userscore = 0; 
    int players = 8; 
    cout << "~~~~~~~~~~~CRICKET GAME~~~~~~~~~~~" << endl;
    cout << "Your target: " << score << endl;
    while (true) {
        int player, computer;
        if (userscore > score) {
            cout << "You win by " << players << " Wickets!" << endl;
            break; 
        } else {
            computer = (rand() % 6) + 1;
            cout << "Enter your number between 1 to 6: ";
            cin >> player;
            if (player < 1 || player > 6) {
                cout << "Invalid input. Please enter a number between 1 and 6." << endl;
                continue; 
            }
            cout << "System: " << computer << endl;
            if (player == computer) {
                cout << "OUT! Your score = " << userscore << endl;
                players--;
                cout << "Your score is " << userscore << "/" << players << endl;
                if (players == 0) {
                    cout << "All players are out. Game over." << endl;
                    break; 
                }
            } else {
                userscore += player;
                cout << "Your score is " << userscore << "/" << players << endl;
            }
        }
    }
    return 0;
}

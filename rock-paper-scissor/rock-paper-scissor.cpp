#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    int playerChoice, computerChoice;
    int playerScore = 0, computerScore = 0;

    cout << "Welcome to Rock, Paper, Scissors!\n";

    while (true) {
        cout << "\nChoose your move:\n";
        cout << "1. Rock\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "4. Quit\n";
        cout << "Enter your choice (1-4): ";
        cin >> playerChoice;

        
        if (playerChoice == 4) {
            break;
        }

        srand(time(0));
        computerChoice = rand() % 3 + 1;

        cout << "You chose ";
        switch (playerChoice) {
            case 1: cout << "Rock"; break;
            case 2: cout << "Paper"; break;
            case 3: cout << "Scissors"; break;
        }
        cout << ". Computer chose ";
        switch (computerChoice) {
            case 1: cout << "Rock"; break;
            case 2: cout << "Paper"; break;
            case 3: cout << "Scissors"; break;
        }
        cout << ".\n";

        if (playerChoice == computerChoice) {
            cout << "It's a tie!\n";
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << "You win this round!\n";
            playerScore++;
        } else {
            cout << "Computer wins this round!\n";
            computerScore++;
        }

        cout << "Your score: " << playerScore << "  Computer's score: " << computerScore << "\n";
    }

    cout << "\nGame over!\n";
    if (playerScore > computerScore) {
        cout << "Congratulations! You win!\n";
    } else if (computerScore > playerScore) {
        cout << "Computer wins. Better luck next time!\n";
    } else {
        cout << "It's a tie! No one wins.\n";
    }

    return 0;
}
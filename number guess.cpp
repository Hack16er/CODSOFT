#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int sp, real_num, guess_num, guess_count = 0;
start:

    cout << " WELCOME TO NUMBER GUESSING GAME " << endl;
   
    cout << "Choose one option> " << "\n" << endl;
    cout << "1.>>> Play the Game >>>" << endl;
    cout << "2.>>> Exit the Game >>>" << endl;
    cout << "\n"
         << "Enter Your Option: ";
    cin >> sp;

    switch (sp)
    {
    case 1:
        cout << "\n"
             << "Let's Start the Game" << "\n"
             << endl;
        goto play;
        break;
    case 2:
        cout << "\n"
             << "Thanks for Playing the Game!" << "\n"
             << endl;
        exit(0);
        break;
    default:
        cout << "\n"
             << "Invalid Option Choice... Please Try Again..." << "\n"
             << endl;
        goto start;
    }

play:
    guess_count = 1;
    srand(time(0));
    real_num = rand() % 100 + 1;

    cout << " NUMBER GUESSING GAME " << endl;
    cout << "\n"
         << "Try to guess the number between 1 to 100!" << endl;

    do
    {
        cout << "\n"
             << "Enter your guess number : ";
        cin >> guess_num;
        if (guess_num > real_num)
        {
            guess_count += 1;
            cout << "The number is lower than your guess, try another number";
        }
        else if (guess_num < real_num)
        {
            guess_count += 1;
            cout << "The number is higher than your guess, try another number";
        }
        else
        {
            cout << "\n"
                 << "Great.! You guessed the correct number...!!!";
            if (guess_count == 1)
            {
                cout << "\n"
                     << "You guessed the number in " << guess_count << "st Try.!!!" << "\n"
                     << endl;
            }
            else
            {
                cout << "\n"
                     << "You guessed the number in " << guess_count << " Tries...!" << "\n"
                     << endl;
            }
            goto start;
        }
    } while (guess_num != real_num);

    return 0;
}

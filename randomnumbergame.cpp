#include <iostream>
#include <stdlib.h>
#include <time.h> //seeding the random number generator
using namespace std;
int main()
{
    srand(static_cast<unsigned int>(time(nullptr)));
    int low_limit = 1;
    int high_limit = 100;
    int target_key = rand() % (low_limit - high_limit + 1) + low_limit;
    int guess;
    int attempt = 0;
    cout << ".........welcome to the random number guess game............" << endl;
    cout << "i am thinking a number bt 1 to 100" << endl;
    do
    {

        cout << "enter your guess:" << endl;
        cin >> guess;
        attempt++;
        if (guess < low_limit || guess > high_limit)
        {
            cout << "please enter a number within a valid range..." << endl;
        }
        else if (guess < target_key)
        {
            cout << "too low try again!" << endl;
        }
        else if (guess > target_key)
        {
            cout << "too high try again!" << endl;
        }
        else
        {
            cout << "congratulations you guess the number: " << target_key << endl;
        }

    } while (guess != target_key);
    return 0;
}
// Author's Name: Jonathan Bowman
// Date due: 09/20/2024
// Date submitted: 10/01/2024
// Professor: Dr. Baas
// Description: Guess numbers.

#include <iostream>
#include <string>

using namespace std;

// Functions go here. Not sure what those are yet.
void greetUser (string &name);
//nextGuess goes here
// reportResult goes here

int main () {
    string userName;

    // Greet user and get the user's name
    greetUser (userName);

    const int MAX_GUESSES = 17;
    const int RANGE_LOW =1;
    const int RANGE_HIGH = 131072;

    cout << userName << ", think of a number between " << RANGE_LOW << " and "
         << RANGE_HIGH << ". I have " << MAX_GUESSES << " guesses to find it\n";

    int low = RANGE_LOW, high = RANGE_HIGH;
    bool guessed = false;

    // Set up the loop
    // Set up the switch


    

    return 0;
}

// Add the functions here
// Add a greet function
// This is the next guess based on the range we set
// This reports the results of the game


// Author's Name: Jonathan Bowman
// Date due: 09/20/2024
// Date submitted: 10/01/2024
// Professor: Dr. Baas
// Description: Guess numbers.

#include <iostream>

using namespace std;

// Functions go here. Not sure what those are yet.
void greetUser (string &name);

int main () {
    string userName;
    
    // Greet player and get the player's name
    greetUser (userName);
    
    const int MAX_GUESS = 17;
    const int RANGE_LOW =1;
    const int RANGE_HIGH = 131072;

    
    

    // Max Number of guesses
    cout << "Hi there pick a number between 0 and 131072" << endl;
    cout << "Respond with L for lower, H for higher and S for same" << endl;

    //My variables
    int guessNumber;
    int response;

    cout << "\nIs your number " << guessNumber << "[L|H|S]?" << endl;

    cin >> response  ;
    cout << "you said it was " << response;

    return 0;
}

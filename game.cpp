
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int main() {
  // Setting the maximum value to the power of 13 and 36
  long long int max = pow(13, 36);
  // Setting the seed for the random number generator
  srand(time(0));
  // Generating a random integer between 1 and max
  int answer = rand() % max + 1;
  // If the user inputs the value of pi from flag, then the hexadecimal code on line 23 is printed
  float flag = 3.141592654;
  int guess = 0; // initialize to any number that doesn't equal the answer
  // Prints "Please guess a number between 1 and max"
  cout << "Please guess a number between 1 and " << max << ": ";
  
  // The while loop
  while (guess != answer) {
    cin >> guess;

    // Prints the the hexadecimal code when value of flag is entered in the user prompt
    if (guess == flag) {
      cout << "00110110 00110011 00100000 00110011 00110011 00100000 00110101 00110010 00100000 00110111 00111001 00100000 00110101 00111001 00100000 00110101 00111000 00100000 00110110 01100011 00100000 00110110 01100011 00100000 00110110 00110011 00100000 00110110 01100101 00100000 00110111 00110110 00100000 00110110 00111001 00100000 00110110 01100100 00100000 00110110 00110001 00100000 00110100 00110100 00100000 00110110 00111001 00100000 00110110 01100100 00100000 00110110 00110001 00100000 00110110 00110010 00100000 00110100 00110100 00100000 00110110 01100010 00100000 00110110 00110101 00100000 00110100 01100010 00100000 00110100 00110011 00100000 00110111 00110010 00100000 00110100 01100100 00100000 00110100 01100010 00100000 00110110 00111001 00100000 00110111 01100001 00100000 00110111 00110000 00100000 00110101 00110000 00100000 00110100 01100110 00100000 00110111 00110000 00100000 00110111 00110101 00100000 00110100 01100010 00100000 00110101 01100001 00100000 00110111 00110000 00100000 00110111 00110101 00100000 00110100 01100010 00100000 00110101 01100001 00100000 00110110 01100110 00100000 00110100 00111000 00100000 00110011 00110000 00100000 00110011 01100100" << endl;
      break;
    }
    // Allows the user to input 0 to exit the game
    if (guess == 0) {
      break;
    }
    // Prints that the user got the guess right
    if (guess == answer) {
      cout << "Well done, you guessed it" << endl;
      break;
    } else {
      // Asks the user to guess higher
      if (guess < answer) {
        cout << "Please guess higher" << endl;
      } else { // Asks the user to guess lower
        cout << "Please guess lower" << endl;
      }
    }
  }
  return 0;
}

#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace to simplify code

int main() {
    char letter;  // Variable to store a character input from the user
    int month, year;  // Variables to store the user's birth month and year

    // Prompt the user to enter a single letter and store the input
    cout << "Enter a letter: ";
    cin >> letter;

    // Prompt the user to enter a month (1-12) and store the input
    cout << "Enter a month (1-12): ";
    cin >> month;

    // Prompt the user to enter a year (e.g., 2024) and store the input
    cout << "Enter a year (e.g., 2024): ";
    cin >> year;

    // Extract the last digit of the year
    int first = year % 10;  // Isolate the last digit of the year
    year = year / 10;       // Remove the last digit from the year

    // Extract the second-to-last digit of the year
    int second = year % 10;  // Isolate the second-to-last digit of the year

    // Display the formatted output as "letter\month\second last digit of year last digit of year"
    cout << letter << '\\' << month << '\\' << second << first;

    return 0;  // Indicate successful execution of the program
}

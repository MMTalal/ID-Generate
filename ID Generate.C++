#include <iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace to simplify code

int main() {
    char letter;  // Variable to store the first letter of the user's name
    int month, year;  // Variables to store the user's birth month and year

    // Prompt the user to enter the first letter of their name
    cout << "Enter your first letter (e.g., \"M\" or \"m\" please: ";
    cin >> letter;

    // Check if the entered letter is a valid alphabetic character (uppercase or lowercase)
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z')) 
    {
        // Prompt the user to enter their birth month (1-12)
        cout << "Enter a month (e.g., 1-12) please: ";
        cin >> month;

        // Check if the entered month is valid (between 1 and 12)
        if (month >= 1 && month <= 12) 
        {
            // Prompt the user to enter their birth year (e.g., 1995)
            cout << "Enter a year (e.g., 1995) please: ";
            cin >> year;

            // Check if the entered year is within the valid range (1960-2000)
            if (year >= 1960 && year <= 2000) 
            {
                // Extract the last digit of the year
                int first = year % 10;  // Isolate the last digit of the year
                year = year / 10;       // Remove the last digit from the year

                // Extract the second-to-last digit of the year
                int second = year % 10;  // Isolate the second-to-last digit of the year

                // Display the formatted output based on the month
                if (month < 10) 
                {
                    // For months less than 10, add a leading zero to the month
                    cout << letter << '\\' << "0" << month << '\\' << second << first << endl;
                }

                else 
                {
                    // For months 10-12, display the month as is
                    cout << letter << '\\' << month << '\\' << second << first << endl;
                }
            }

            else 
            {
                // Display an error message if the year is invalid
                cout << "Your year is wrong, please try again!" << endl;
            }
        } 

        else 
        {
            // Display an error message if the month is invalid
            cout << "Your month is wrong, please try again!" << endl;
        }

    } 

    else 
    {
        // Display an error message if the letter is invalid
        cout << "Your letter is wrong, please try again!" << endl;
    }

    return 0;  // Indicate successful execution of the program
}

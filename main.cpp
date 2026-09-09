#include <iostream>
using namespace std;

int main() {
    string userName = "unknown";
    int firstNum = 2;
    int secondNum = 3;
    int statement1;
    int statement2;
    int answer = 0;

    cout << " __  __       _   _       _____      _ " << endl;
    cout << "|  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __ " << endl;
    cout << "| |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__|"<< endl;
    cout << "| |  | | (_| | |_| | | |   | || |_| | || (_) | |   " << endl;
    cout << "|_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|   " << endl;

    cout << "_________________________________________________" << endl;
    cout << "Welcome to the Silly Simply Math Tutor V1!" << endl ;
    cout << "_________________________________________________" << endl;

    cout << "Please under your name: ";
    cin >> userName;
    cout << "Welcome " << userName << "!" << endl;

    cout << "Are you ready to guess the answer?" << endl;
    cin >> statement1;

    cout << "Here we go!" << endl;
    cout << firstNum << " + " << secondNum << " = " << "?" << endl;
    cout << "Please type the answer below!" << endl;
    cin >> statement2;

    cout << "We will tell you the correct answer on our MathTutor Vers. II" << endl;
    cout << "Stay Turn!" << endl;
    cout << R"(
 ____ _                 _
|_  _| |__   __ _ _ __ | | __  _   _  ___  _   _
 | | | '_ \ / _` | '_ \| |/ / | | | |/ _ \| | | |
 | | | | | | (_| | | | |   <  | |_| | (_) | |_| |
 |_| |_| |_|\__,_|_| |_|_|\_\  \__, |\___/ \__,_|
                               |___/             )" << endl;
    return 0;
}               

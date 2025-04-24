#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    cout << "0:Rock\n1:Paper\n2:Scissor\n3:Rocket\n";
    int x;
    cin >> x ;
    while (x > 3 || x < 0) {
        cout << "Error:Enter a number from 0 to 3 to play!\n" ;
        cin >> x ;
    }
    cout << "Your choice:";
    switch (x) {
        case 0:
            cout << "Rock\n";
        break;
        case 1:
            cout << "Paper\n";
        break;
        case 2:
            cout << "Scissor\n";
        break;
        case 3:
            cout << "Rocket\n"; //Super weapon that either wins or draws in case the computer choose it as well
        break;
    }
    cout << "Computer's choice:";
    srand(time(NULL));
    int r = rand() % 4; //To Generate a random number [0,4[
    switch (r) {
        case 0:
            cout << "Rock\n" ;
        break;
        case 1:
            cout << "Paper\n" ;
        break;
        case 2:
            cout << "Scissor\n" ;
        break;
        case 3:
            cout << "Rocket\n" ;
        break;
    }
    if (x == r) {
        cout << "DRAW!\n";
    } else if ((x == 0 && r == 2) ||
               (x == 1 && r == 0) ||
               (x == 2 && r == 1) ||
               (x == 3)) {
        cout << "YOU WIN!\n";
               } else {
                   cout << "COMPUTER WINS!\n";
               }
    return 0;
}

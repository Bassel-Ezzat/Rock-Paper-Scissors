#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    cout << "0:Rock\n1:Paper\n2:Scissor\n";
    int x;
    cin >> x ;
    while (x > 2 || x < 0) {
        cout << "Error:Enter a number from 0 to 2 to play!\n" ;
        cin >> x ;
    }
    cout << "Your Weapon:";
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
    }
    cout << "Computer's Weapon:";
    srand(time(NULL));
    int r = rand() % 3; //To Generate a random number [0,3[
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
    }
    if (x == r) {
        cout << "DRAW!\n";
    } else if ((x == 0 && r == 2) ||
               (x == 1 && r == 0) ||
               (x == 2 && r == 1)){
        cout << "YOU WIN!\n";
               } else {
                   cout << "COMPUTER WINS!\n";
               }
    return 0;
}

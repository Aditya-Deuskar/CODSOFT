#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int input, guessed_number;
    srand(time(0));
    cout << "Please guess a random number between 1 to 50" << endl;
    cin >> input;
    guessed_number = (rand() % 50) + 1;
    cout << "Random generated number is: " << endl;
    cout << guessed_number << endl;
    if(input>guessed_number+5)
    {
        cout<<"Your guess is too high"<<endl;
    }
    else if(input<guessed_number-5)
    {
        cout<<"Your guess is too low"<<endl;
    }
    else if(input==guessed_number)
    {
        cout<<"Your guess is correct!"<<endl;
    }
    else{
        cout<<"You are close, try again!"<<endl;
    }
    return 0;
}
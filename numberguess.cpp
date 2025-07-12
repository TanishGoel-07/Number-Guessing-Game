#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand((unsigned int)time(NULL));
    int number=rand()%100; //0-99 range + 1 that is 1to100 range
    int guess = 0;
    string n1="";
    cout<<"Enter your name ";
    cin>>n1;
    cout<<"Welcome "<<n1<<" in the Number Guessing Game Hope You Make It!"<<endl<<"lets get started"<<endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "Attempt " << i << " of " << 10 << ": Enter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try a smaller number.\n" << endl;
        } else if (guess < number) {
            cout << "Too low! Try a bigger number.\n" << endl;
        } else {
            cout << "Hurray! You guessed it right in " << i << " attempts. Well done, " << n1 << "!\n";
            return 0;
        }
    }
    cout << "\nYou've used all your attempts. The correct number was: " << number << endl;
    cout << "Better luck next time, " << n1<< "!" << endl;

    return 0;
}
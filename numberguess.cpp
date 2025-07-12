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
    do{
        cout<< "Enter Guess (1-100)"<<endl;
        cin>>guess;
        if(guess>number){
            cout<< "Guess is too high!"<<endl;
        }
        else if(guess<number){
            cout<<"Guess is too low!"<<endl;
        }
        else{
            cout<<"Hurray You Won"<<endl;
        }
    } while(guess != number);

}
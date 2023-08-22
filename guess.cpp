#include  <iostream>
#include <ctime>
using namespace std;
int main()
{
    string name;
    cout<<"Hello and Welcome. Please enter your name - ";
    cin>>name;
    srand(time(0));
    int random=rand()%100+1;
    int guess=0;
    int moves=0;
    do{
        moves++;
        cout<<name<<",enter your guess between the numbers 1-100 ";
        cin>>guess;
        if(guess==random)
        cout<<"Congratulatons "<<name<<", Yov have guessed the correct answer after "<<moves<< " moves";
        else if(guess<random)
        cout<<"OH NO! You entered a lower number ";
        else
        cout<<"OH NO! You entered a Higher number ";


    }
    while(guess!=random);


}



#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    srand((unsigned int) time(NULL));
    int number = (rand() % 100) + 1;

    int guess;

    do
    {
        cout<<"Enter Guess (1 - 100) : ";
        cin>>guess;

        if(guess < number)
            cout<<"Guess higher!"<<endl;
        else if(guess > number)
            cout<<"Guess lower!"<<endl;
        else
            cout<<"You won!"<<endl;
    }while(guess != number);

    return 0;
}
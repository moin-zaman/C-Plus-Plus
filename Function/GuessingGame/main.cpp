#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int guessNum, randNum;

//    while(1)
//    {
//        cout << "Please enter any guess from number 1 to 10 : ";
//        cin >> guessNum;
//
//        randNum = rand()%10 + 1;
//
//        if(guessNum == randNum)
//        {
//            cout << "You have won" << endl;
//        }
//        else
//        {
//            cout << "Sorry !! You have lost" << endl;
//            cout << "Random Number was : " << randNum << endl;
//        }
//    }


    cout << "Please enter any guess from number 1 to 10 : ";
    cin >> guessNum;

    randNum = rand()%10 + 1;

    if(guessNum == randNum)
    {
        cout << "You have won" << endl;
    }
    else
    {
        cout << "Sorry !! You have lost" << endl;
        cout << "Random Number was : " << randNum << endl;
    }

    while(randNum != guessNum)
    {
        cout << "Please enter any guess from number 1 to 10 : ";
        cin >> guessNum;

        randNum = rand()%10 + 1;

        if(guessNum == randNum)
        {
            cout << "You have won" << endl;
        }
        else
        {
            cout << "Sorry !! You have lost" << endl;
            cout << "Random Number was : " << randNum << endl;
        }
    }


    //main();

}

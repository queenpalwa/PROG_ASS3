#include <iostream>

using namespace std;

int main()
{
    int score;
    cout << "Enter your SCORE in FINALS in Programming Logic and Design" << endl;
    cin >> score;
    if (score<75)
    {
        cout << "You got a failing mark" << endl;
    }
    else if(score>=75)
    {
        cout << "Congratulations! You passed the FINALS Examination! \n";
    }
    return 0;
}

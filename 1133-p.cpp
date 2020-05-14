//Rest of a Division........
#include <iostream>
using namespace std;
int main()
{
    int X, Y;
    int temp;
    cin >> X >> Y;
    if( X > Y) {
        temp = X;
        X = Y;
        Y = temp;
    }

    for (int i = X+1; i < Y; i++)
    {
        if (i%5==2 || i%5==3)
            cout << i << endl;
    }
    
}
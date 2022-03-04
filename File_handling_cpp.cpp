#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float y;
    float x;
    float n;
    float sum;
    ofstream k;
    cout << " Enter a num :\t";
    cin >> x;
    cout << " Enter a num :\t";
    cin >> y;
    sum = x + y;

    //attempt to open
    k.open("hi.txt");
    //attempt to write
    if (k)
    {
        k << "Number 1:\t" << x;
        k << "\nNumber 2:\t" << y;
        k << "\nSum \t" << sum;
        k.close();
    }
    else
        cout << "error\n";
}

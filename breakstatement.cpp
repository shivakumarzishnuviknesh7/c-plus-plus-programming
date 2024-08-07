#include <iostream>
using namespace std;

int main()
{
    {
        cout << "hallow block 1 \n";
        {
            cout << "hallow block 2 \n";
        }
    }

    int a  = 10;
    int b = 20;

    int sum = a+b;
    cout<< "sum of "<< a <<" and "<< b <<" \n"<< sum ;

    for (int i = 0 ;i<3; i++){
        cout<< " \n value";
        break;
    }
    return 0;
}
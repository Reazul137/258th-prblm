#include<iostream>
using namespace std;
int main()
{
    char grade;

    cout << " Enter your grade : " << endl;
    cin >> grade;

    switch(grade)
    {

        case'A':
          cout << " Grade point is 4.0. ";
        break;

        case'B':
          cout << " Grade point is 3.0. ";
        break;

        case'C':
          cout << " Grade point is 2.0. ";
        break;

        case'D':
          cout << " Grade point is 1.0. ";
        break;

        case'F':
          cout << " Grade point is 0.0. ";
        break;

        default:
            cout << " Invalid Grade";

    }
    return 0;
}

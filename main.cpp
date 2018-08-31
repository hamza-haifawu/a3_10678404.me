#include <iostream>

using namespace std;

int main()
{
    string studentname;
    int studentnum;
    char grade;

  {

    cout << "Enter your student ID:";
    cin >>studentnum;
    cout  << endl;
    cout << "Enter your name:";
    cin >>studentname;
    cout << endl;
    cout << "Enter your grade:";
    cin >> grade;
    cout << endl;
}
    switch (grade){
    case 'A':
        cout << "Outstanding"<< endl;
        break;
    case 'B+':
        cout << "Excellent"<< endl;
        break;
         case 'B':
        cout << "Very Good"<< endl;
        break;
         case 'C+':
        cout << "Good"<< endl;
        break;
         case 'C':
        cout << "Average"<< endl;
        break;
         case 'D+':
        cout << "Below Average"<< endl;
        break;
         case 'D':
        cout << "passed"<< endl;
        break;
         case 'E':
        cout << "Weak"<< endl;
        break;
         case 'F':
        cout << "Fail"<< endl;
        break;
    }
    return 0;
}

// C++ program to demonstate the use of try,catch and throw
// in exception handling.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int x = -1;
//
//    // Some code
//    cout << "Before try \n";
//
//    // try block
//    try {
//        cout << "Inside try \n";
//        if (x < 0) {
//            // throwing an exception
//            throw x;
//            cout << "After throw (Never executed) \n";
//        }
//    }
//
//    // catch block
//    catch (int x) {
//        cout << "Exception Caught \n";
//    }
//
//    cout << "After catch (Will be executed) \n";
//    return 0;
//}

#include <iostream>
using namespace std;

int main()
{
    try
    {
        int user;
        cout << "Enter the number" << endl;
        cin >> user;
        if (user == 1234)
        {
            cout << "welcome" << endl;
        }
        else
        {
            throw user;
        }
    }
    catch (int num)
    {
        cout << "Invalid entry check your pin again " << num << endl;
    }
}





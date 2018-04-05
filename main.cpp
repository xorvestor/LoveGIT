#include <iostream>
#include <cstring>
#include <string.h>
#include <string>

/*  by Xorvestor
    This is my first program.
    If you notice a bug corrupt me. Good Luck
*/

using namespace std;

int main()
{
    setlocale(LC_ALL , "Russian");

    char *istr;
    char str1[80];
    char str2[] = "github";
    char name[50];
    cout << "Hello world!" << endl;
    cout << "This is my fist project to github" << endl;
    cout << "What is your name?" << endl;
    cin >> name;
    cin.get();
    cout << name <<" please enter the githab so that I can see the world " << endl;
    cin.getline(str1,80);

    istr = strstr(str1, str2);
    if ( istr == NULL )
        cout << "You are not love github? =( \nPlease restart programm and enter github.\nI want to live.Please >_<" << endl;
    else
        cout << "Welldone, you successfully filled the project with the githab!\n Good bay and nice day!:)" << endl;

    system("pause");
    return 0;
}

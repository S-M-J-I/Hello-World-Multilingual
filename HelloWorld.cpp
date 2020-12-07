#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;

int main()
{
    string line;
    string hello;
    cout << "Say hello: ";
    cin >> hello;
    ifstream ifs("hello_unicode.txt");
    if (ifs.is_open())
    {
        while (getline(ifs,line))
        {
            cout << line << endl;
            cout << endl;
        }
        ifs.close();
    }

    else 
    {
        cout << "Unable to open files" << endl;
    }

    return 0;
}
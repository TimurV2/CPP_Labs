#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>


using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string line;
    ofstream out;          

    out.open("C:\\Users\\1\\Documents\\CPlusPlus.txt", ios::app);
    cout << "Type text or '0' to end programm\n";
    if (out.is_open())
    {
        while (getline(cin, line)) {
            if (line == "0") { return 0; }
            out << line << endl;
        };
    }
    return 0;
}
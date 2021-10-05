// in this example i discuse read and write file firstly how to write and secondly how to
// read at this which you write

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // you can open file with the use of open()
    ofstream out;
    out.open(" tuto52.txt");
    out << " hello\n";
    out << " i am rishabh bisen from agarwada\n";
    out << " thank you for reading this\n";
    out.close();

    ifstream in;
    string str;
    in.open(" tuto52.txt");
    while (in.eof() == 0)
    {
        getline(in, str);
        cout << str << endl;
    }

    return 0;
}
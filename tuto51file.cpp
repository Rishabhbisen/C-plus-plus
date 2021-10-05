#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //   in this file i/o we have 3 type of classes
    //   1. fstream
    //   2. ifstream
    //   3. ofstream
    //   those 3 file comes from #inclcude<fstream>

    // this is file opinig file and writing
    // string rt = " Rishabh bisen , i am from balaghat";
    // ofstream out(" tuto51.txt");
    // out << rt;

    // this is opening file and reading
    string rt2;
    ifstream hello(" tuto51.txt"); // here hello, you can use difrrant type of name and with the plce out same condition
    hello >> rt2;                  // just like cin>>
    getline(hello, rt2);           // it is use to read full line of contant
    cout << rt2;
    return 0;
}
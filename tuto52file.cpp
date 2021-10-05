// in this tutorial we will discuse about file read and write in a one programme
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream good("tuto52.txt");
    string name;
    cout << " enter your name " << endl;
    cin >> name;
    good << name + " is my name";
    good.close();

    string contant;
    ifstream hin(" tuto52.txt");
    hin >> contant;
    getline(hin, contant);
    cout << " the contant of this file is :" << contant;
    hin.close();

    return 0;
}
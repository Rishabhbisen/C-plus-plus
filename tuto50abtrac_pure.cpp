// abStract base class and pure virtual class function
#include <iostream>

using namespace std;

class rb
{
protected:
    string tital;
    float rating;

public:
    rb(string s, float r)
    {
    }
    virtual void display() = 0;
};
class rbvideo : public rb
{
protected:
    float videolen;

public:
    rbvideo(string s, float r, float vl) : rb(s, r)
    {
        videolen = vl;
    }
    void display()
    {
        cout << " this is an amazing video tital :" << tital << endl;
        cout << " Rating:" << rating << " out of 5 star " << endl;
        cout << " lens of this video is " << videolen << endl;
    }
};
class rbtext : public rb
{
protected:
    int words;

public:
    rbtext(string s, float r, int wc) : rb(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << " this is an amazing video tital tutorial with text " << tital << endl;
        cout << " Rating of this text tutorial is " << rating << endl;
        cout << " no of word in this text turorial is " << words << endl;
    }
};

int main()
{
    string tital;
    float rating, videolen;
    int words;

    // for rb video
    tital = " rishabh bisen youtube video tutorial";
    videolen = 4.56;
    rating = 4.39;
    rbvideo sjvideo(tital, rating, videolen);

    // for rb text
    tital = " rishabh bisen text tutorial";
    words = 343;
    rating = 4.35;
    rbtext sjtext(tital, words, rating);

    rb *tuto[2];
    tuto[0] = &sjvideo;
    tuto[1] = &sjtext;
    tuto[0]->display();
    tuto[1]->display();

    return 0;
}
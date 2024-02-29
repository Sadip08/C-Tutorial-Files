#include <iostream>
using namespace std;
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};

class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "length of this video is:" << videolength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial" << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "number of words in this text tutorial is: " << words << " minutes" << endl;
    }
};
int main()
{
    string title = new char[30];
    float rating, vlen;
    int words;

    // for Code With Harryu VIdeo
    title = "Django tutorial text";
    vlen = 4.56;
    rating = 4.19;
    words = 433;
    CWHVideo djvideo(title, rating, vlen);
    djvideo.display();

    CWHText djText(title,rating,words);
    djText.display();

    CWH * tuts[2];
    tuts[0]= &djvideo;
    tuts[1]= &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 1;
}

// Rule for virtual functions
// 1. they cannot be static
// 2. they are accessed by object pointers 
// 3. virtual functions can be a friend of another class 
// 4. A vitual function in base class might not be used 
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class 
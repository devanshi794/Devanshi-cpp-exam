#include <iostream>
#include <string>

using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void setrect(int len, int wid)
    {
        this->length = len;
        this->width = wid;
    }

    void getRect()
    {
        cout << "The area of rectangle is: " << length * width << endl;
    }
};

int main()
{
    Rectangle Area;

    int length, width;
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    Area.setrect(length, width);
    Area.getRect();

    return 0;
}
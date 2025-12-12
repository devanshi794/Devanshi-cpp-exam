#include <iostream>
using namespace std;

class Shape
{
private:
    string color;
    double area;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }

    void setArea(double a)
    {
        area = a;
    }

    double getArea()
    {
        return area;
    }

    virtual void calculateArea() = 0;
};

class Circle : public Shape
{
private:
    double radius;

public:
    void setRadius(double r)
    {
        radius = r;
    }

    void calculateArea()
    {
        double area = 3.14159 * radius * radius;
        setArea(area);
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    void setDimensions(double l, double w)
    {
        length = l;
        width = w;
    }

    void calculateArea()
    {
        double area = length * width;
        setArea(area);
    }
};

int main()
{

    Circle c;
    c.setColor("Pink");
    c.setRadius(7.0);
    c.calculateArea();

    cout << "Circle Color: " << c.getColor() << endl;
    cout << "Circle Area: " << c.getArea() << endl
         << endl;

    Rectangle r;
    r.setColor("Blue");
    r.setDimensions(4.0, 6.0);
    r.calculateArea();

    cout << "Rectangle Color: " << r.getColor() << endl;
    cout << "Rectangle Area: " << r.getArea() << endl;

    return 0;
}
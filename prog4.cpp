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
    virtual void display() = 0;

    virtual ~Shape() {}
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
        double area = 3.14 * radius * radius;
        setArea(area);
    }

    void display() override
    {
        cout << "Shape: Circle\n";
        cout << "Color: " << getColor() << endl;
        cout << "Area: " << getArea() << endl;
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

    void display() override
    {
        cout << "Shape: Rectangle\n";
        cout << "Color: " << getColor() << endl;
        cout << "Area: " << getArea() << endl;
    }
};

int main()
{

    Circle c;
    c.setColor("Pink");
    c.setRadius(7.0);
    c.calculateArea();

    Rectangle r;
    r.setColor("Blue");
    r.setDimensions(4.0, 6.0);
    r.calculateArea();

    Shape *shapes[2];
    shapes[0] = &c;
    shapes[1] = &r;

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->display();
        cout << endl;
    }

    return 0;
}
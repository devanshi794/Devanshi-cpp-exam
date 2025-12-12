#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    double basicSalary;
    double hra, da, ta, ma, pf;

public:
    void setName(string n)
    {
        name = n;
    }

    void setBasicSalary(double bs)
    {
        basicSalary = bs;
    }
    
    void setHRA(double h)
    {
        hra = basicSalary * 0.05;
    }

    void setDA(double d)
    {
        da = basicSalary * 0.1;
    }

    void setTA(double t)
    {
        ta = basicSalary * 0.03;
    }

    void setMA(double m)
    {
        ma = basicSalary * 0.05;
    }

    void setPF(double p)
    {
        p = 200;
        pf = p;
    }

    string getName()
    {
        return name;
    }

    double getBasicSalary()
    {
        return basicSalary;
    }

    double getHRA()
    {
        return hra;
    }

    double getDA()
    {
        return da;
    }

    double getTA()
    {
        return ta;
    }

    double getMA()
    {
        return ma;
    }

    double getPF()
    {
        return pf;
    }

    double getNetSalary()
    {
        return (basicSalary + hra + da + ta + ma) - pf;
    }
};

int main()
{
    Employee emp;
    string name;
    double basic, hra, da, ta, ma, pf;

    cout << "Enter Employee Name: ";
    getline(cin, name);

    cout << "Enter Basic Salary: ";
    cin >> basic;

    emp.setName(name);
    emp.setBasicSalary(basic);
    emp.setHRA(hra);
    emp.setDA(da);
    emp.setTA(ta);
    emp.setMA(ma);
    emp.setPF(pf);

    cout << "\n--- Employee Salary Details ---\n";
    cout << "Name: " << emp.getName() << endl;
    cout << "Basic Salary: " << emp.getBasicSalary() << endl;
    cout << "HRA: " << emp.getHRA() << endl;
    cout << "DA: " << emp.getDA() << endl;
    cout << "TA: " << emp.getTA() << endl;
    cout << "MA: " << emp.getMA() << endl;
    cout << "PF: " << emp.getPF() << endl;

    cout << "Net Salary: " << emp.getNetSalary() << endl;

    return 0;
}

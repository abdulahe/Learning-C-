#include <iostream>
using namespace std;

// get set method

class employee
{
    int salary;

public:
    void setSalary(int x)
    {
        salary = x;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    employee emp1;
    emp1.setSalary(5000);
    cout << emp1.getSalary() << endl;
    return 0;
}
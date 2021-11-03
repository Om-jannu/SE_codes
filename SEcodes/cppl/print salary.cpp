#include<iostream>
 using namespace std; 
 class employee
{

private:
int salary; public:
void getsalary()
{

cout << "Enter salary : "; cin >> salary;
}

void printsalary()
 
{
cout << "Salary : " << salary;
}
};

int main()
{

employee e;
e.getsalary();
e.printsalary();
return 0;
}


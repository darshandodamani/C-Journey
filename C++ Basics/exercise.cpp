#include <iostream>
#include<math.h>
using namespace std;

/* 
Calculate Net Salary HRA=10% of Basic Salary, TA=5% of Basic Salary, DA=8% of Basic Salary 
Input: Basic Salary, Percentage of Allowance, Percentage of Deductions
Output: Net Salary
*/
int main()
{

float BasicSalary, NetSalary;
float PercentageofAllowance, PercentageofDeductions;

cout<<"Please enter basic Salary"<<endl;
cin>>BasicSalary;

cout<<"Please enter Percentage of Allowance"<<endl;
cin>>PercentageofAllowance;

cout<<"Please enter PercentageofDeductions"<<endl;
cin>>PercentageofDeductions;

NetSalary=BasicSalary + BasicSalary*PercentageofAllowance/100 - BasicSalary*PercentageofDeductions/100;
cout<<"Net Salary is:"<<" "<<NetSalary<<endl;
return 0;
}
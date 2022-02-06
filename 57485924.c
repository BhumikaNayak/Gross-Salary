//Code of Gross Salary
#include<stdio.h>
int main()
{
    int Testcases; //number of Testcases
    scanf("%d\n",&Testcases);
    double GrossSalary=0,BasicSalary,HRA,DA; //declaration of variables
    
    while(Testcases--) //using while loop
    {
        scanf("%lf\n",&BasicSalary);
        
        if(BasicSalary<1500)
        {
            HRA=0.10*BasicSalary;
            DA=0.90*BasicSalary;
            GrossSalary=BasicSalary+HRA+DA;
            printf("%lf\n",GrossSalary);
        }
        else
        {
            HRA=500;
            DA=0.98*BasicSalary;
            GrossSalary=BasicSalary+HRA+DA;
            printf("%lf\n",GrossSalary);
        }
    }
    return 0;
}
//Code By Bhumika Nayak
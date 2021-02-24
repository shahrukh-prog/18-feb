#include<iostream>

using namespace std;

int main ()

{
    int sal;

    float tax, netsal;

    cout<<"Enter salary= ";

    cin>>sal;

    if(sal>30000)

    {
        tax=(sal*0.02);

        netsal=sal-tax;

    }

    else if(sal>=20000)

    {

        tax=sal*0.15;

        netsal=sal-tax;

    }

    else

    {

        tax=sal*0.01;

        netsal=sal-tax;

    }

    cout<<"The salary is: "<<sal<<"\nThe income tax is: "<<tax<<"\nThe net salary after detucting is: "<<netsal;

}


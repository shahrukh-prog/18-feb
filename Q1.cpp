#include <iostream>

using namespace std;

int main ()

{
int s=400;
int j=275;

cout<<"Enter status= ";

char choice;

cin>>choice;

if (choice=='s'||choice=='S')
{

cout<<"Senior salesperson salary per week is= "<<s;

}

else if (choice=='j'||choice=='J')

{

cout<<"Junior salesperson salary per week is= "<<j;
   
}

else

{

cout<<"invalid status !";
}}

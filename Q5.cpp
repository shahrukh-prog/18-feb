#include <iostream>

using namespace std;

int main()
{

int num[4];
int i=0;
int a=1;
while(i<5)
{
cin>>num[i];
i++;

}
cout<<"-------------------"<<endl;
cout<<"num             sum"<<endl;
cout<<"-------------------"<<endl;
i=0;
while(i<5)
{
cout<<num[i]<<"                 "<<num[a=i+1]<<endl;
i++;
}

}


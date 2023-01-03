#include<iostream>
using namespace std;
int main()
{
    float x, y, z, fixed_charge, no_of_units, final_amount, first, second, third;
    cin>>x>>y;
    no_of_units=y-x;
    if(no_of_units<=100)
    cout<<"Nil";
    else if(no_of_units>=200)
    {
        fixed_charge=20;
        final_amount=fixed_charge + z*2;
        cout<<"Rs. "<<final_amount;
    }
    else if(no_of_units<=500)
    {
        fixed_charge=30;
        for(int i=101;i<=no_of_units;i++)
        {
            if(i>100&&i<=200)
            {
                first=0;
                int e=i*2;
                first+=e;
            }
            else if(i>200 && i<=500)
            {
                second=0;
                int f=i*3;
                second+=f;
            }
        }
        final_amount=fixed_charge+first+second;
        cout<<"Rs. "<<final_amount;
    }
    else if(no_of_units>500)
    {
        fixed_charge=50;
        for(int i=101;i<=no_of_units;i++)
        {
            if(i>100 && i<=200)
            {
                first=0;
                float a = i*3.50;
                first = first+a;
            }
            else if(i>201 && i<=500)
            {
                second=0;
                float b=i*4.60;
                second = second+b;
            }
            else if(i>500)
            {
                third=0;
                float c=i*6.60;
                third = third+c;
            }
        }
        final_amount=fixed_charge+first+second+third;
        cout<<"Rs ."<<final_amount;
    }
}

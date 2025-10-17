#include <iostream>
#include<string>
using namespace std;

struct SalesRecord{
    string month;
    float amount;
};

int main()
{
    SalesRecord a[12];
    cout<<"Enter sales data for each month"<<endl;
    for(int i=0;i<12;i++)
    {
        cout<<"Month "<<i+1<<" Name:";
        cin>>a[i].month;
        cout<<"Sales Amount: ";
        cin>>a[i].amount;
    }
    float max=a[0].amount;
    float min=a[0].amount;
    string max_month=a[0].month;
    string min_month=a[0].month;
    for(int i=0;i<12;i++)
    {
        if(a[i].amount>max)
        {
            max_month=a[i].month;
            max=a[i].amount;
        }
        else if(a[i].amount<min)
        {
            min_month=a[i].month;
            min=a[i].amount;
        }
    }
    cout<<"Month with maximum sales: "<<max_month<<" with amount: "<<max<<endl;
    cout<<"Month with minimum sales: "<<min_month<<" with amount: "<<min<<endl;
    
    

    return 0;
}

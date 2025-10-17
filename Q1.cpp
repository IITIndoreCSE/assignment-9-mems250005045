#include <iostream>
using namespace std;

struct Item{
    int id;
    float cost;
};
int main()
{
  Item a[6];
  a[0].id=1;
  a[0].cost=50;
  a[1].id=2;
  a[1].cost=75;
  a[2].id=3;
  a[2].cost=300;
  a[3].id=4;
  a[3].cost=400;
  a[4].id=0;
  a[4].cost=0;
  a[5].id=0;
  a[5].cost=0;
  for(int i=0;i<6;i++)
  {   
      if(a[i].cost>50)
      {cout<<"Item ID: "<<a[i].id<<" ";
      cout<<"Item Cost: "<<a[i].cost<<endl;}
  }

    return 0;
}

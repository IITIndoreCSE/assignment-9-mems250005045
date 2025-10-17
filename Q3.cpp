#include <iostream>
using namespace std;

struct Point{
    float x;
    float y;
};

int main()
{
    int count=0;
    Point a[7];
    cout<<"Enter the x and y coordinates of 7 points"<<endl;
    for(int i=0;i<7;i++)
    {   
        cout<<"Point "<<i+1<<"-"<<"x: ";
        cin>>a[i].x;
        cout<<"Point "<<i+1<<"-"<<"y: ";
        cin>>a[i].y;
    }
    for(int i=0;i<7;i++)
    {
        if(a[i].x>0 && a[i].y>0)
        count++;
    }
    cout<<"Number of points in the first quadrant: "<<count;
    

    return 0;
}

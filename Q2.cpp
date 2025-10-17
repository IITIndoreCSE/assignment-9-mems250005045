#include <iostream>
using namespace std;

struct Color{
    int red;
    int green;
    int blue;
};

int main()
{
    Color a[5];
    a[0].red=220;
    a[0].blue=20;
    a[0].green=60;
    a[1].red=180;
    a[1].blue=70;
    a[1].green=10;
    a[2].red=130;
    a[2].blue=60;
    a[2].green=5;
    a[3].red=170;
    a[3].blue=12;
    a[3].green=40;
    a[4].red=150;
    a[4].blue=10;
    a[4].green=30;
    for(int i=0;i<3;i++)
    {
        a[i].red=255-a[i].red;
        a[i].blue=255-a[i].blue;
        a[i].green=255-a[i].green;
    }
    for(int i=0;i<5;i++)
    {
        cout<<"Element "<<i<<": ";
        cout<<a[i].red<<" "<<a[i].blue<<" "<<a[i].green<<endl;
    }
    

    return 0;
}

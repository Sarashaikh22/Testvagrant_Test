#include<iostream>
#include bits/c++.h;
using namespace;

int main()
{
    int total;
    int basket[100];
    int basket[product[10], price[10], gst[10], qty[10]];
    int product["leather", "wallet", "umbrella", "cigarette", "honey"];
    int price[ 1100, 900, 200, 100];
    int gst[18, 12, 28, 0];
    int gty[1, 4, 3, 2];
    int max=INT_MIN;
    for(int i=0; i<=4; i++)
    {
        if(gst[i]>max)
        {
            max=gst[i];
        }
        cout<<product[i];
    }
//total=(1100+(1100*0.18)-(1100*0.05))+4*(900+(900*0.12)-(900*0.05))+3*(200+(200*0.28)-(200*0.05)+2*100);
//cout<<total;
}
for(int i=0; i<=10; i++)
{
    if(price[i]>=500)
    {
        total=(price[i]+(price[i]*gst[i])-(price[i]*0.05));
        cout<<total;
    }
    else{
        total=(price[i]+(price[i]*gst[i]));
        cout<<total;
    }
    return 0;
}
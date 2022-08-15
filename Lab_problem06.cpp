#include<bits/stdc++.h>

using namespace std;

int main()
{
    double cf = 900000000;
    double lemda = (300000000/cf);

    double v_speed = 70*(1000.0/(60*60));
    cout<<"Vehicle speed = "<<v_speed<<endl;

    cout<<"(A). When the vehicle is moving directly away from the transmitter, "<<endl;
    double recived_f = (cf+(v_speed/lemda));
    cout<<"The received frequency is : "<<setprecision(2)<<recived_f<<endl;
    cout<<endl;

    cout<<"(B). When the vehicle is moving directly toward from the transmitter, "<<endl;
    recived_f = (cf-(v_speed/lemda));
    cout<<"The received frequency is : "<<recived_f<<endl;
    cout<<endl;

    cout<<"(C). When the vehicle is moving perpendicular to the angle of arrival of the transmitted signal, "<<endl;
    recived_f = (cf);
    cout<<"The received frequency is : "<<recived_f<<endl;
}

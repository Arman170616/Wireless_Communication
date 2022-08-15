#include<bits/stdc++.h>

using namespace std;


int main()
{
    double Tn = 150, N = 70;
    double delT = Tn/N;
    cout<<"(a). delT = "<<delT<<endl;

    cout<<"(b)."<<endl;
    Tn=4;
    double MBW = 2/delT;
    cout<<"The maximum bandwidth that SMRCIM model can accurately represent = "<<MBW<<endl;
    delT = (Tn/N)*1000;
    cout<<"delT for SMRCIM urban microcell model is = "<<delT<<endl;

    double RFBW = (2/delT)*1000;
    cout<<"RFBW for SMRCIM urban microcell model is = "<<RFBW<<endl;

    cout<<"(c)."<<endl;
    double Exdel = 500;
    delT = Exdel/N;
    cout<<"For indoor channel delT = "<<delT<<endl;
    RFBW = (2/delT)*1000;
    cout<<"The maximum RF bandwidth for the indoor channel model is = "<<RFBW<<endl;
}

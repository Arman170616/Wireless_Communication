#include<bits/stdc++.h>
#define pi 3.1416
using namespace std;

int main()
{
    double c = 3e8;
    double f = 900e6;
    double D=1;

    double lemda = c/f;

    double df = 2*(pow(D,2))/lemda;
    double pl = -10*log10((pow(lemda, 2.0))/((pow((4*pi),2.0)*(pow(df, 2.0)))));

    cout<<"Path loss pl(dB) = "<<pl<<endl;

}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    double Am_power = 400;
    double modulation_depth = 0.75;
    double Carrier_power = (Am_power)/(1+(pow(modulation_depth, 2))/2);

    cout<<"(a). Total power in the carrier= "<<(Carrier_power/Am_power)*100<<endl;

    double sideband_power = (Am_power - Carrier_power)*0.5;
    cout<<"(b). power in each side band = "<<sideband_power<<endl;

    cout<<"(c). Percentage of saved power = "<<(1-(sideband_power)/Am_power)*100<<endl;
}

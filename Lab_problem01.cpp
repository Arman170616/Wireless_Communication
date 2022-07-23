/*
Problem Statement_
A Specturm of 30MHz is allocated to a Wireless FDD cellular System which uses two 25 KHz simplex channels to provide full duplex voice and control channels


*/

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main(){
    lli BW=30000, CBW=25*2;
    lli available_channel = BW/CBW;
    lli ctrl_spectrum = 1000;
    lli available_ctrl_channel = ctrl_spectrum/CBW;
    // cout<<available_ctrl_channel<<endl;
    lli n1=4,n2=7,n3=12;
    
    cout<<"i) For N = "<<n1<<":\n";
    cout<<"Total number of channels available: "<<available_channel/n1<<endl;
    cout<<"Voice channel per cell: "<<(available_channel- available_ctrl_channel)/n1<<endl;
    cout<<"Control channel per cell: "<<(available_channel/n1)-((available_channel- available_ctrl_channel)/n1)<<endl;
    
    
    cout<<"\nii) For N = "<<n2<<":\n";
    cout<<"Total number of channels available: "<<available_channel/n2<<endl;
    cout<<"Voice channel per cell: "<<(available_channel- available_ctrl_channel)/n2<<endl;
    cout<<"Control channel per cell: "<<(available_channel/n2)-((available_channel- available_ctrl_channel)/n2)<<endl;
    
    cout<<"\niii) For N = "<<n3<<":\n";
    cout<<"Total number of channels available: "<<available_channel/n3<<endl;
    cout<<"Voice channel per cell: "<<(available_channel- available_ctrl_channel)/n3<<endl;
    cout<<"Control channel per cell: "<<(available_channel/n3)-((available_channel- available_ctrl_channel)/n3)<<endl;
    
}
//Write to Rifat Shadman



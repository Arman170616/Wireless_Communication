#include <bits/stdc++.h>
using namespace std;
#define lli long long int
 
int main(){
    double N[] = {7,12,19};
    double cochannel_cells = 6;
    cout<<"i) For n = 4: \n";
    
    for(lli i=0;i<3;i++){
        cout<<"Let's consider "<<N[i]<<" cell reuse pattern";
        double Q = sqrt(3*N[i]);
        bool f=0;
        cout<<"\nQ = "<<Q<<endl;
        cout<<"Signal-to-Interference Ratio: "<<10*log10((Q*Q*Q*Q)/cochannel_cells)<<endl;
        if(10*log10((Q*Q*Q*Q)/cochannel_cells)>=15){
            cout<<"N = "<<N[i]<<" can be used\n";
            f=1;
        }
        if(f) break;
        else{
            cout<<"N = "<<N[i]<<" can not be used\n";
        }
    }
    
    
    
    cout<<"\n\nii) For n = 3: \n";
    
    for(lli i=0;i<3;i++){
        cout<<"Let's consider "<<N[i]<<" cell reuse pattern";
        double Q = sqrt(3*N[i]);
        bool f=0;
        cout<<"\nQ = "<<Q<<endl;
        cout<<"Signal-to-Interference Ratio: "<<10*log10((Q*Q*Q)/cochannel_cells)<<endl;
        if(10*log10((Q*Q*Q)/cochannel_cells)>=15){
            cout<<"N = "<<N[i]<<" can be used\n";
            f=1;
        }
        if(f) break;
        else{
            cout<<"N = "<<N[i]<<" can not be used\n";
        }
    }
    
    
}


/* 
i) For n = 4: 
Let's consider 7 cell reuse pattern
Q = 4.58258
Signal-to-Interference Ratio: 18.6629
N = 7 can be used


ii) For n = 3: 
Let's consider 7 cell reuse pattern
Q = 4.58258
Signal-to-Interference Ratio: 12.0518
N = 7 can not be used
Let's consider 12 cell reuse pattern
Q = 6
Signal-to-Interference Ratio: 15.563
N = 12 can be used

*/

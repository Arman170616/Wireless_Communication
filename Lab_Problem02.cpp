#include<bits/stdc++.h>
using namespace std;


void cluster_size(double n, double SNRgiven, double N)
{
    double I = 6;
    double Q = sqrt(3*N);  // Q = D/R
    double SNRdb = 10*log10((pow(Q,n))/I);  // S(I) = ((D/R)^n)/I
    cout<<"For n =" <<n<<endl;
    
    if(SNRgiven <= SNRdb)
    {
        cout<<"N= "<<N<<"can be used. "<<endl;
        cout<<"output SNRdb for N = "<<N<<" is : " << SNRdb<<endl;
    }
    
    else
    {
        cout<<"N= "<<N<<"can not be used. "<<endl;
        cout<<"output SNRdb for N = "<<N<<" is : " << SNRdb<<endl;
    }
    
    cout<<endl;
    
}

int main(){
    
    cluster_size(4, 15, 7);
    cluster_size(3, 15, 7);
    cluster_size(3, 15, 12);
    
}



/* 
For n =4
N= 7can be used. 
output SNRdb for N = 7 is : 18.6629

For n =3
N= 7can not be used. 
output SNRdb for N = 7 is : 12.0518

For n =3
N= 12can be used. 
output SNRdb for N = 12 is : 15.563



*/

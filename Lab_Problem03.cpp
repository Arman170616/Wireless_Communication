/*
Problem Statement_

How many  users can be supported for 0.5% blocking probability for the following number of trunked channel in blocked calls cleaned system? 
    (a)1, (b)5, (c) 10, (d)20 (e)100 . 
Assume each user generates 0.1 Erlamgs of Traffic.
*/

#include<bits/stdc++.h>

using namespace std;

int main(){
    double gos, Au, Aa, Ab, Ac, Ad, Ae, U;
    gos = 0.005;
    Au = 0.1;
    Aa = 0.005;
    Ab = 1.13;
    Ac = 3.96;
    Ad = 11.1;
    Ae = 80.9;
    
    cout<<"(a) The Total Number of Users, U = "<<floor((Aa/Au)+1)<<"users"<<endl;
    cout<<"(b) The Total Number of Users, U = "<<floor((Ab/Au))<<"users"<<endl;
    cout<<"(c) The Total Number of Users, U = "<<floor((Ac/Au))<<"users"<<endl;
    cout<<"(d) The Total Number of Users, U = "<<floor((Ad/Au))<<"users"<<endl;
    cout<<"(e) The Total Number of Users, U = "<<floor((Ae/Au))<<"users"<<endl;
}

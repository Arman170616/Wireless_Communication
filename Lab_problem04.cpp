/*
 An Urban area has an population of two million rediats...
*/

#include<bits/stdc++.h>
using namespace std;


int main(){
    double population, gos, Au, c, t, lam, A, U, cell, Sa, Sb, Sc;
    population = 2000000.00;
    gos= 0.02;
    lam = 2.00;
    t = 3.00;
    Au = lam*(t/60.00);
    
    //system A
    
    cout<<"System A"<<endl;
    cell = 394;
    c = 19;
    A = 12;  // Arlang B Table
    U = floor(A/Au);
    Sa = (U*cell);
    cout<<"The total Number of users per cell= "<<U<<" users"<<endl;
    cout<<"The total Number of subscribers in system A = "<<Sa<<endl;
    
    
    //system B
    
    cout<<"System B"<<endl;
    cell = 98;
    c = 57;
    A = 45;  // Arlang B Table
    U = floor(A/Au);
    Sb = (U*cell);
    cout<<"The total Number of users per cell= "<<U<<" users"<<endl;
    cout<<"The total Number of subscribers in system B = "<<Sb<<endl; // B = 44100
    
    
    
    //system C
    
    cout<<"System C"<<endl;
    cell = 49;
    c = 100;
    A = 88;  // Arlang B Table
    U = floor(A/Au);
    Sc = (U*cell);
    cout<<"The total Number of users per cell= "<<U<<" users"<<endl;
    cout<<"The total Number of subscribers in system C = "<<Sc<<endl; // c=43120
    
    
    cout<<"The cellular subscribers of three Systems="<<Sa+Sb+Sc<<endl;
    cout<<"percentage of penetration:"<<endl;
    
    
    cout<<"In system A, the percentage of market penetration = "<< Sa*100/population<<endl;
    cout<<"In system B, the percentage of market penetration = "<< Sb*100/population<<endl;
    cout<<"In system C, the percentage of market penetration = "<< Sc*100/population<<endl;
    
    cout<<"The percentage of market penetration of the three system combined = "<< (Sa+Sb+Sc)*100/population<<endl;
    
    
    return 0;

    
}



/*

System A
The total Number of users per cell= 120 users
The total Number of subscribers in system A = 47280
System B
The total Number of users per cell= 450 users
The total Number of subscribers in system B = 44100
System C
The total Number of users per cell= 880 users
The total Number of subscribers in system C = 43120
The cellular subscribers of three Systems=134500

percentage of penetration:
In system A, the percentage of market penetration = 2.364
In system B, the percentage of market penetration = 2.205
In system C, the percentage of market penetration = 2.156
The percentage of market penetration of the three system combined = 6.725

*/ 

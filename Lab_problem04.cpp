/*
 An Urban area has an population of two million rediats...
*/

#include<bits/stdc++.h>
using namespace std;
double Au = (2.0*3.0)/60.0;
double GOS = (2/100);
double C[]={19, 57, 100};
double cells[]={394, 98, 49};
double A(int tc){
    if(tc==19){
        return 12.0;
    }
    else if(tc==57){
        return 45.0;
    }
    else if(tc==100){
        return 88.0;
    }
}
void calculate(int i){
    double U = A(C[i])/Au;
    cout<<U<<" \nby taking ceiling value : "<<ceil(U)<<endl;
    cout<<"It can support total "<<U*cells[i]<<" users"<<endl;
    cout<<"Which is "<<(U*cells[i]/2e6)*100<<"% of the total population."<<endl;
    cout<<endl;
}
main(){
    cout<<"Total supported users for system A per cell is : ";
    calculate(0);
    cout<<"Total supported users for system B per cell is : ";
    calculate(1);
    cout<<"Total supported users for system C per cell is : ";
    calculate(2);
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

/*
Problem Statement_
A Specturm of 30MHz is allocated to a Wireless FDD cellular System which uses two 25 KHz simplex channels to provide full duplex voice and control channels


*/
#include<bits/stdc++.h>
using namespace std;

int total_BW = 30*1000000;
int controll_BW = 1*1000000;
int f_per_channel = 25*1000*2;

int total_channel = (total_BW / f_per_channel);
int total_controll = (controll_BW / f_per_channel);
int total_voice = (total_channel-total_controll);

void channel_distribution(double N){
 
    cout<<"For "<<N<<" cell reuse:"<<endl;
    cout<<"Total number of channel per cell is : "<<round(total_channel/N)<<endl;
 
    double voice_per_cell = total_voice / N;
    double controll_per_cell = total_controll / N;
 
    cout<<"Total Voice channel per cell is : "<<round(voice_per_cell)<<endl;
    cout<<"Total control channel per cell is : "<<round(controll_per_cell)<<endl<<endl;
}

int main()

{
    channel_distribution(4);
    channel_distribution(7);
    channel_distribution(12);
}

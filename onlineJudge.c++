#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
void sixFunction(int arr[]);
int main(){
int arr[9],num;
while(cin>>arr[0]) { 
		if(arr[0]<0){
			return 0;
		}
        for (int i = 1; i < 9; i++)
        {
        	cin>>arr[i];
        	if(arr[i]<0){
        		return 0;
        	}
        }
sixFunction(arr);
}
    return 0;
}
void sixFunction(int arr[]){
    int num=0;
    string order;
    
    //B23 G12 C13
       num=arr[3]+arr[6]+arr[1]+arr[4]+arr[2]+arr[8];
        order="BCG";
    
     //B23 G13 C12
    if(num>arr[3]+arr[6]+arr[1]+arr[7]+arr[2]+arr[5]){
       num=arr[3]+arr[6]+arr[1]+arr[7]+arr[2]+arr[5];
        order="BGC";
    }
   //B13 G12 C23
    if(num>arr[0]+arr[6]+arr[1]+arr[4]+arr[5]+arr[8]){
       num=arr[0]+arr[6]+arr[1]+arr[4]+arr[5]+arr[8];
        order="CBG";
    }
    //B12 G13 C23
    if(num>arr[0]+arr[3]+arr[1]+arr[7]+arr[5]+arr[8]){
       num=arr[0]+arr[3]+arr[1]+arr[7]+arr[5]+arr[8];
        order="CGB";
    }
    
    //B13 G23 C12
    if(num>arr[0]+arr[6]+arr[4]+arr[7]+arr[2]+arr[5]){
       num=arr[0]+arr[6]+arr[4]+arr[7]+arr[2]+arr[5];
        order="GBC";
    } //B12 G23 C13
    if(num>arr[0]+arr[3]+arr[4]+arr[7]+arr[2]+arr[8]){
       num=arr[0]+arr[3]+arr[4]+arr[7]+arr[2]+arr[8];
        order="GCB";
    }
    cout<<order<<" "<<num<<"\n";
}

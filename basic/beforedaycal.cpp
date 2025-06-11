#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"Enter any number to count day before n Days.\n";
    cin>>n;
    int d;
    cout<<"Enter today days 0(Sunday) to 7(Saturday) \n";
    cin>>d;

    int x=n% 7;
    int ans = d - x; // use - for after days

    if(ans >= 0){
        if(ans == 1){
            cout<<"Monday";
        }else if(ans == 2){
            cout<<"Tuesday";
        }else if(ans == 3){
            cout<<"Wednesday";
        }else if(ans == 4){
            cout<<"Thursday";
        }else if(ans == 5){
            cout<<"Friday";
        }else if(ans == 6){
            cout<<"saturday";
        }else {
            cout<<"sunday";
        }
        // cout<<ans;
    } else{
        // cout <<ans +7;
         if(ans+7 == 1){
            cout<<"Monday";
        }else if(ans+7 == 2){
            cout<<"Tuesday";
        }else if(ans+7 == 3){
            cout<<"Wednesday";
        }else if(ans+7 == 4){
            cout<<"Thursday";
        }else if(ans+7 == 5){
            cout<<"Friday";
        }else if(ans+7 == 6){
            cout<<"saturday";
        }else {
            cout<<"sunday";
        }
    }

}
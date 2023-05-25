#include <bits/stdc++.h>
using namespace std;


int maxprofit(int n,int r, int len[], int cost){


}

int main(){
    
    cout << "Enter 'length' and 'cost' array size : ";
    int n;
    cin >> n;
    int len[n];
    int cost[n];
    cout << "Enter length and respective cost : ";

    for(int i=0;i<n;n){
        cin >> len[i]>> cost[i];
    }

    cout << "Enter length of rod : ";
    int r;
    cin >> r;
    int ans =maxprofit(n,r,len,cost);
    cout << "Maximum profit is : " <<ans;
}
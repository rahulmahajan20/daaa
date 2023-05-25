#include <iostream>
using namespace std;


int missing(int a[], int l,int r){
    int mid=(l+r)/2;
    while(l<r){
        if(a[mid]==mid){
            return missing(a,mid+1,r);
        }
        else{
            return missing(a,l,mid);
        }
    }
    return l;
}


int main(){

    int n;
    cout << "Enter number of elements ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = missing(a,0,n-1);
    if(ans==a[n-1]){
        cout << "There is no missing number";
    }
    else{
        cout << "missing number is " << ans;
    }
    return 0;
}
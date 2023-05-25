
#include <iostream>

using namespace std;

int bst(int l, int r, int v[]){
    int mid= (l+r)/2;
    if(v[0]==0){
        return r+1;
    }
    if (v[mid]==1){
        if (v[mid-1] == 1){
            return bst(l,mid-1,v);
        }
        else{
            return mid;
        }
    }
    else{
        return bst(mid+1,r,v);
    }
}

int main()
{   
    int n;
    cout<<"Enter number of elements in array : ";
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int ans = bst(0 , n-1 , v);
    
    cout << "Number of ones are : " << (n-ans);

    return 0;
}

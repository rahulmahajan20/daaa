#include <iostream>
using namespace std;

int b_search(int a[], int l, int r, int o){
    if(r>=l){
        int mid = (l+r)/2;
        if(a[mid]==o){
            return mid;
        }

        if(a[mid] > o){
            return b_search(a,l,mid-1,o);
        }
        else{
            return b_search(a,mid+1,r,o);
        }
    }
    return -1;
}

int occurence(int a[], int n, int o){
    int index = b_search(a,0,n-1,o);

    if (index == -1){
        return 0;
    }
    int count =1;
    int lb =index-1;
    int up = index+1;
    while (lb>=0 && a[lb]==o)
    {
        count++;
        lb--;
    }
    while (up<n && a[up] == o)
    {
        count++;
        up++;
    }
    
    return count;
}

int main()
{
    int n,o;
    cout << "Enter number of elements ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Enter number to find : ";
    cin >> o;
    int count = occurence(a,n,o);

    cout << "Total occurence is " <<count;
    return 0;
}
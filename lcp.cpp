#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string commonPrefixUtil(string str1, string str2)
{
    string result;
    int n1 = str1.length(), n2 = str2.length();
 
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++)
    {
        if (str1[i] != str2[j])
            break;
        result.push_back(str1[i]);
    }
    return (result);
}
string longestCommonPrefix(string S[], int low, int high)
{
    if (low == high){
        return (S[low]);
    }
    else
    {
        int mid = low + (high - low) / 2;
 
        string str1 = longestCommonPrefix(S, low, mid);
        string str2 = longestCommonPrefix(S, mid+1, high);
 
        return (commonPrefixUtil(str1, str2));
    }
}


int main() {
    
    string s[] = {"Technology","Technician","Technique","Technocraft"};
    cout << longestCommonPrefix(s, 0, 2) << endl;
    return 0;
}
///Sherlock and Array
#include<bits/stdc++.h>
using namespace std;

string balancedSums(vector<int> arr)
{
    string s;
    vector<int> newA;
    newA.push_back(0);
    for(int i=0; i<arr.size(); i++)
        newA.push_back(newA[i]+arr[i]);
    int sz = newA.size();
    for(int i=1; i<sz; i++)
        if(newA[i-1] == (newA[sz-1]- newA[i])) return "YES";
    return "NO";
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    string s = balancedSums(v);
    cout<<s;
}

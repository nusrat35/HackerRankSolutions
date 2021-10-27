///Super Reduced String
#include<iostream>
#include<string>
using namespace std;

string superReducedString(string s)
{
    if(s.size()==0) return "Empty String";

    for(int i = 0; i < s.size()-1; i++)
    {
        if(s[i]==s[i+1])
        {
            s.erase(i,2);
            return superReducedString(s);
        }
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    string ss = superReducedString(s);
    cout<<ss;

    return 0;
}

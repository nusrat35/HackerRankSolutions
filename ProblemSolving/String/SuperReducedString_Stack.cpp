#include<iostream>
#include<stack>
#include<string>
//#include<algorithm>
using namespace std;

string _reverse(string s) {
    int sz = (int)s.size();
    for(int i = 0; i < sz / 2; i++)swap(s[i], s[sz - 1 - i]);
    return s;
}

string superReducedString(string s)
{
    stack<char> sc;
    for(int i=0; i<s.size(); i++)
    {
        if(sc.empty())
        {
            sc.push(s[i]);
            continue;
        }

        if(sc.top() != s[i])
        {
            sc.push(s[i]);
        }else sc.pop();
        //cout<<sc.top()<<" ";
    }
    if(sc.empty())return "Empty String";
    else {
        string ans = "";
        while(!sc.empty()) {
            ans.push_back(sc.top());
            sc.pop();
        }
        return _reverse(ans);
    }
}

int main()
{
    string s;
    cin>>s;
    cout<<superReducedString(s);
}

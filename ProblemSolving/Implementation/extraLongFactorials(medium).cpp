///HackerRank Extra_Long_Factorials(medium)
#include<iostream>
#include <vector>
using namespace std;

/**int fact(int n){
    if(n == 1) return 1;
    else return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    int result = fact(n);
    cout<<result;
} **/
void fact(int n)
{
    vector<int>res = {1};

    while(n)
    {
        int carry=0, prod;
        for(int i = 0; i < res.size(); i++)
        {
            prod = res[i]*n + carry;
            res[i] = prod%10;
            carry = prod / 10;
        }
        if(carry != 0)
        {
            while(carry)
            {
                res.push_back(carry % 10);
                carry /= 10;
            }
        }
        n--;
    }
    for(int i = res.size() - 1; i >= 0 ; i--)
    {
        cout<<res[i];
    }

}
int main()
{
    int n,len=0;
    vector<int>res;
    cin>>n;
    fact(n);
}

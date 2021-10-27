#include<iostream>
#include<unordered_map>
using namespace std;

string hackerrankInString(string s) {
    string h = "hackerrank";
    int j =0;
    int c = 10;
    for(int i =0; i<h.size();i++){
        if(j >= s.size()) return "NO";
        for(; j<s.size();j++){
            if(h[i] == s[j]){
                c--;
                j++;
                break;
            }
        }
    }
    if(c==0) return "YES";
    else return "NO";

}

int main(){
    int t;
    string s;
    cin>>t;
    while(t--) {
        cin>>s;
        cout<<hackerrankInString(s);
        cout<<endl;
    }
}

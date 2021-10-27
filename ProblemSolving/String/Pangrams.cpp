#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

string pangrams(string s) {
    unordered_map<char,bool> umap;
    for(int i =97; i<=122; i++){
        char key = i;
        umap[key] = false;
    }
    for(int i =0; i<s.size(); i++){
        char key = s[i];
        if( key>='A' && key<='Z') key = key + 32;
        if(umap[key] == false) umap[key] = true;
    }
    for(int i =97; i<=122; i++){
        char key = i;
        if(umap[key] == false) return "not pangram";
    }
    return "pangram";
}
int main(){
    string s;
    getline(cin, s);

    string result = pangrams(s);

    cout << result << "\n";

    return 0;
}

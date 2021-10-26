#include<bits/stdc++.h>
using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr)
{
    unordered_map<int,int>umap1;
    unordered_map<int,int>umap2;
    vector<int>res;
    set<int>s;
    for(int i = 0; i<arr.size(); i++)
    {
        int key = arr[i];
        umap1[key]++;
    }

    for(int i = 0; i<brr.size(); i++)
    {
        int key = brr[i];
        umap2[key]++;
        s.insert(key);
    }
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++)
    {
        //cout << *itr<<" ";
        int key = *itr;
        if(umap1.find(key) == umap1.end()) res.push_back(key);
        else
        {
            if((umap1[key] - umap2[key]) !=0) res.push_back(key);
        }
    }
    sort(res.begin(), res.end());
    return res;

}

int main()
{
    int n,m;
    vector<int>arr{203,203,204,205,206,208,203,204,205,206};
    vector<int>brr{203,204,204,205,206,207,205,208,203,206,205,206,204};
    vector<int> result = missingNumbers(arr, brr);

    for (size_t i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
        {
            cout << " ";
        }
    }
    cout<<endl;
}


#include <bits/stdc++.h>
using namespace std;
class solution {
    public:
    vector<int> buildPrefixTotals(vector<int>& values, int n) {
        vector<int>prefix(n);
        prefix[0]=values[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+values[i];
        }
    return prefix;
    }
};

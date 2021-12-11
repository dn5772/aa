#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#define N 500000
int n, m;

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, j;

    cin >> n >> m;
    
    vector<string> d(n), ans;
    string tmp;

    for (i=0; i<n; i++){
        cin >> d[i];
    }

    sort(d.begin(), d.end());
    
    for (i=0; i<m; i++){
        cin >> tmp;
        if (binary_search(d.begin(), d.end(), tmp)){ans.push_back(tmp);}
    }
	
    sort(ans.begin(), ans.end());
    
    cout << ans.size() << "\n";

    for (i=0; i<ans.size(); i++)
        cout << ans[i] << endl;
    
   return 0;
}
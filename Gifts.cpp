//  Copyright © 2017 Dougy Ouyang. All rights reserved.

#include <iostream>
#include <algorithm>

using namespace std;
typedef pair<int, int> pii;
int main()
{
    int n, b, p, s, costi;
    pii cos[1005];
    int i;
    
    cin >> n >> b;
    for(i=0;i<n;i++){
        cin >> p >> s;
        cos[i].first=p+s;
        cos[i].second=p/2+s;
    }
    sort(cos, cos+n);
    
    for(i=0;i<n;i++){
        costi+=cos[i].first;
        if(costi>b){
            costi-=cos[i].first;
            costi+=cos[i].second;
        }
        if(costi>b){
            cout << i << endl;
            return 0;
        }
    }
    
    return 0;
}

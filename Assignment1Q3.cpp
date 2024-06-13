#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <long long int> v;

int main(){
    long long int n,q,a,b;
    cin >> n >> q;
    for(long long int i=0;i<n;i++){
        long long int r;
        cin >> r;
        v.push_back(r);
    }
    for(int i=1;i<n;i++){
        v[i] ^= v[i-1];
    }
    while(q--){
        cin >> a >> b;
        b -= 1;
        a -= 1;
        auto it = v.begin()+b;
        long long int r = *it;
        if(a==0){
            cout << r << endl;
        }
        else{
         a-=1; 
        auto fi = v.begin()+a;
        long long int q = *fi;
        cout << (r^q) << endl;
        }
    }
}
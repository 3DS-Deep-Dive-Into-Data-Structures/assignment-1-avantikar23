#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin >> n >> q;
    vector <int> v(n);
    int input =0;
    int i=0;
    while(cin>>input){
        v[i++] = input;
    }
    vector <pair<int,int>> arr;
    for(int i=0;i<n;i++)
        arr.push_back({v[i], i+1});
    sort(arr.begin(),arr.end());
    for(int l=0;l<n;l++){
        int k = arr[l].first;
        int front = l+1;
        int rear = n-1;
        int sum =0;
        while(front<rear){
            sum = k + arr[front].first + arr[rear].first;
            if(sum==q){
                cout << arr[l].second <<" " << arr[front].second << " " <<arr[rear].second;
                return 0;
            }
            else if(sum<q) front++;
            else rear--;
        }
    }
     cout << "IMPOSSIBLE";
    
}
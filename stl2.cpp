// printing pair using vector concept.//
// concept of vector of pair.//
#include <bits/stdc++.h>
using namespace std;

// void printvec(vector<pair<int,int>> &v){
//     cout<<"size:"<<v.size()<<endl;
//     for(int i=0;i<v.size();++i){
//         cout<<v[i].first<<" "<<v[i].second<<endl; //here v[i] is pair and for extracting first value of pair we use .first and for second value we use .second.// 
//     }
// }

// int main(){
//     vector<pair<int,int>> v;
//     printvec(v);
//     int n;
//     cin>>n;
//     int x,y;
//     //we can take input also in this way.//
//     for(int i=0;i<n;++i){
//         cin>>x>>y;
//         v.push_back({x,y});
//     }
//     printvec(v);
//     return 0;
// }

// concept of array of vector.//

void printvec(vector<int> &v){
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" "; //here v[i] is pair and for extracting first value of pair we use .first and for second value we use .second.// 
    }
    cout<<endl;
}

int main(){
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i=0;i<N;++i){
        int n;
        cin>>n;
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    for(int i=0;i<N;++i){
        printvec(v[i]);
    }
}
//Seen by Aman//

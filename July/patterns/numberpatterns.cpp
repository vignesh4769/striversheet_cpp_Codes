#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     /*
    
    1
    12
    123
    1234
    12345
    
    */
    
    void NumberTriangle(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    } 

    //cout<<i , instead of cout<<j;
    /*
    1
    22
    333
    4444
    55555
    */
    void NumberTriangle2(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }
    }

    /*

    12345
    1234
    123
    12
    1
     
    */

    void InvertedNumberTriangle(int n){
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.NumberTriangle(n);
    obj.NumberTriangle2(n);
    obj.InvertedNumberTriangle(n);
    return 0;
}
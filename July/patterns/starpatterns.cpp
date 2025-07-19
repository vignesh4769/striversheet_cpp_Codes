#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    //square star pattern
    /*

    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    
    */
    void printsquareStarPattern(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    //Right-Angled Triangle Star Pattern
    /*

    *
    * *
    * * *
    * * * *
    * * * * *
    
    */
   void printRightAngledTriangleStarPattern(int n) {
       for(int i=1;i<=n;i++){
              for(int j=1;j<=i;j++){
                cout << "* ";
              }
              cout << endl;
       }
   }

    /*

    *****
    ****
    ***
    **
    *
     
    */

    void InvertedstarTriangle(int n){
        for(int i=n;i>=1;i--){
            for(int j=1;j<=i;j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cin >> n;
    Solution obj;
    obj.printsquareStarPattern(n);
    cout<<endl;
    obj.printRightAngledTriangleStarPattern(n);
    cout<<endl;
    obj.InvertedstarTriangle(n);

    return 0;
}
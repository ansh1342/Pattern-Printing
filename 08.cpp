#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter row: ";
    cin >> n;
    int i = 1;
    while(i<=n/2){
        int j = 1;
        while(j<=i){
            cout << "*";
            j++;
        }
        i++;
        cout<<endl;
    }
    int k = (n/2) - 1;
    while(k>0){
        int m = 1;
        while(m<=k){
            cout << "*";
            m++;
        }
        k--;
        cout << endl;
    }
}
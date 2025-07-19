#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter rows: ";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i){
            cout << " ";
            j++;
        }
        int k = 1;
        while(k<=(2*i)-1){
            cout << "*";
            k++;
        }
        i++;
        cout<<endl;
    }
    int l = n;
    while(l>0){
        int m = 1;
        while(m<=n-l){
            cout << " ";
            m++;
        }
        int p = 1;
        while(p<=(2*l)-1){
            cout << "*";
            p++;
        }
        l--;
        cout<<endl;
    }
}
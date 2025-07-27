#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << j;
            j++;
        }
        int k = 1;
        while(k<=2*(n-i)){
            cout << " ";
            k++;
        }

        int l = i;
        while(l>=1){
            cout << l;
            l--;
        }
        i++;
        cout << endl;



    }
}
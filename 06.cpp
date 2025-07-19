#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int i = n;
    while(i>0){
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
        i--;
        cout << endl;

    }
}
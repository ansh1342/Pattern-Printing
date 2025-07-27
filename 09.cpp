#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    int i = 1;
    int start = 1;
    while(i<=n){
        if (i%2 == 0){
            start = 0;
        }
        else{
            start = 1;
        }
        int j = 1;
        while(j<=i){
            cout << start << " ";
            start = 1 - start;
            j++;
        }
        i++;
        cout << endl;

    }
}
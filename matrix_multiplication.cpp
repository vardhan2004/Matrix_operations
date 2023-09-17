#include<bits/stdc++.h>
using namespace std;
int main(){
    int m1, n1;
    cin >> m1 >> n1;
    int arr1[m1][n1];
    for(int i = 0; i < m1; i++){
        for(int j = 0; j < n1; j++){
            int ele;
            cin >> ele;
            arr1[i][j] = ele;

        }
    }
    int m2, n2;
    cin >> m2 >> n2;
    int arr2[m2][n2];
    for(int i = 0; i < m2; i++){
        for(int j = 0; j < n2; j++){
            int ele;
            cin >> ele;
            arr2[i][j] = ele;
        }
    }
    int res[m1][n1];
    for(int i = 0; i < m1; i++){
        for(int j = 0; j < n1; j++){
            int sm = 0;
            for(int k = 0; k < n2; k++){
                sm += arr1[i][k]*arr2[k][j];

            }
            res[i][j] = sm;
        }
    }
    for(int i = 0; i < m1; i++){
        for(int j = 0; j < n1; j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
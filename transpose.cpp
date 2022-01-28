#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define loop(i,k,n) for(int i=k;i<n;i++)

int main() {

    vvi matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int temp;

    loop(i,0,3){
        loop(j,0,3){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    loop(i,0,3){
        loop(j,i,3){
            //SWAP
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    loop(i,0,3){
        loop(j,0,3){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
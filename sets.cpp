#include<iostream>
using namespace std;
void SetsUnion(int a[50], int b[50], int unionSet[100], int m, int n);
void SetsInter(int a[50], int b[50], int InterSet[100], int m, int n);
void SetsMinus(int a[50], int b[50], int minusSet[100], int m, int n);
int main(){
    int m, n, a[50], b[50], c[100], i, j, ch;
    cout << "Enter the number of elements for set A: ";
    cin >> m;
    cout << "Enter the number of elements for set B: ";
    cin >> n;
    cout << "Enter the elements for matrix A: ";
    for(i=0;i<m;i++){
            cin >> a[i];
    }
    cout << "Enter the elements for matrix B: ";
    for(i=0;i<n;i++){
            cin >> b[i];
    }
    cout << "Enter an operation: \n1. Union\n2. Intersection\n3. Subtraction\n";
    cin >> ch;
    switch(ch){
        case 1: 
                SetsUnion(a, b, c, m, n);
                break;
        case 2: 
                SetsInter(a, b, c, m, n);
                break;
        case 3: 
                SetsMinus(a, b, c, m, n);
                break;

    }
}
void SetsUnion(int a[50], int b[50], int c[100], int m, int n){
    int i, j, l=0, co = 0, nl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(b[i] == a[j]){
                co = 0;
                break;
            }
            else
                co = 1;
        }
        if(co == 1){
        c[l] = b[i];
        l++;
        }
    }
    for(i = 0; i < m;i++){
        c[l+i] = a[i];
    }
    cout << "Union of A and B: ";
    for(i = 0; i<(l+m);i++){
        cout << c[i] << ", ";
    }
   
}
void SetsInter(int a[50], int b[50], int InterSet[100], int m, int n){
    int i, j, co =0, l=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(b[i] == a[j]){
                InterSet[i] = b[i];
                l++;
            }
        }
    }
    cout << "Intersection: ";
    for(i=0;i<l;i++){
        cout << InterSet[i] << ", ";
    }
}
void SetsMinus(int a[50], int b[50], int minusSet[100], int m, int n){
    int i, j, l=0, co = 0, nl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(a[i] == b[j]){
                co = 0;
                break;
            }
            else
                co = 1;
        }
        if(co == 1){
        minusSet[l] = a[i];
        l++;
        }
    }
    for(i = 0; i<l;i++){
        cout << minusSet[i] << ", ";
    }
}
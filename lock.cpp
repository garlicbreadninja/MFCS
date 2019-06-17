#include<iostream>
using namespace std;
void generate(int a);
void generate2(int a, int b, int c);
int main(){
    generate(999);
    generate2(0, 0, 0);
}
void generate(int a){
    if(a >=0){
        cout << a << endl;
        a--;
        generate(a);
    }
}
void generate2(int a, int b, int c){
    int i, j, k;
    cout << endl << "SECOND METHOD: " << endl;
    for(i=0;i<=9;i++){
        for(j=0;j<=9;j++){
            for(k=0;k<=9;k++){
                cout << i << j << k << endl;
            }
        }
    }
}
#include<iostream>
using namespace std;

int TOH(int n, int A, int B, int C){
    if (n > 0){
        TOH(n - 1, A, C, B);
        cout<<"("<<A<<","<<C<<")"<<endl;
        TOH(n - 1, B, A, C);
    }
    return 0;
}
int main(){
    cout<<TOH(3,1,2,3)<<endl;
}
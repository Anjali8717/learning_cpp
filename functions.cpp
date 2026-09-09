#include<iostream>
using namespace std;
double sum(double a, double b){
    double s = a+b;
    return s;
}

int minOfTwo(int a, int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int sumN(int n){
    int sum = 0;
    for(int i = 0; i<=n; i++){
        sum += i;
    } 
    return sum;

}

int factorialN(int n){
    int fac = 1;
    for(int i = 1; i<=n; i++){
        fac *= i;
    }
    return fac;
}
int main(){
    cout<<"factorial = "<<factorialN(10)<<endl;
    return 0;
}

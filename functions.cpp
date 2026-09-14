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

int sumOfDigits(int num){
    int digSum = 0;
    
    while(num >0){
        int lastDig = num % 10;
        num/= 10;
        digSum += lastDig ;
    }
    return digSum;
}
    int main(){
        cout<<"sum = "<<sumOfDigits(2345)<<endl;
        return 0;
    }


WAP TO CALCULATE nCr binomial coefficient for n and r
#include<iostream>
using namespace std;
long long factorial(int num){
    long long fact = 1;
    for(int i =1; i<=num; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    return fact_n/(factorial(n-r)* factorial(r));
}

int main(){
    int n= 8, r = 2;
    cout<<"nCr ="<<nCr(n, r);
}

WAF TO PRINT PRIME NUMBERS FROM 1 TO N
#include<iostream>
using namespace std;

void printPrime(int n){
    for(int num = 2; num<=n; num++){
       bool isPrime = true;

       for(int i = 2; i*i<=num; i++){
        if(num % i == 0){
        isPrime = false;
        break;
    }
        }
        if(isPrime){
        cout<< num <<" ";
    }
            }
    
}

int main(){
    printPrime(100);
    return 0;
}

//WAF TO PRINT nth FABONACCI
#include <iostream>
using namespace std;

void fabonacci(int n){
    int a = 0, b = 1;
    for(int i = 1; i<=n; i++){
        cout<<a<<" ";
         int c = a+b;
         a = b;
         b = c;
    }
}
int main(){
    int n = 10;
    fabonacci(n);
    return 0;
}

//Decimal to binary conversion
#include <iostream> 
using namespace std;

int decToBinary(int decNum){
int ans = 0, pow = 1;
while(decNum>0){
 int rem = decNum % 2;
 decNum /= 2;
 ans += (rem * pow);
 pow *= 10;
}
return ans;
}

int main(){
    int decNum = 50;
    // for(int i = 1; i<=10; i++){
    //     cout<<decToBinary(i)<<endl;
    // }
    cout<<decToBinary(50);
    return 0;
}


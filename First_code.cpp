#include<iostream>
using namespace std;
int main()
{
    int age = 24;
    cout<<sizeof(age)<<endl;
    cout<<sizeof("Hello world")<<endl;
    return 0;
};

#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10;
    int sum = a + b;
    cout<<"sum="<<a+b<<endl;
    cout<<"difference="<<a-b<<endl;
    cout<<"product="<<a*b<<endl;

    return 0;
}

VOTE criteria 

#include <iostream>
using namespace std;

int main(){
    int age ;
    cout<<"Enter age: ";
    cin>> age;
    
    if (age>= 18){
        cout<<"Eligible for vote"<<endl;
    }else{
        cout<<"Not eligible"<<endl;
    }

    return 0;

}

#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks : ";
    cin>>marks;

    if(marks>= 90){
        cout<<"A";
    } else if (marks<90 && marks>=80){
        cout<<"B";
    }else{
        cout<<"C";
    }
    return 0;

}

Print numbers 1 to 5

// Using while loop
#include <iostream>
using namespace std;
int main(){
    int count = 1;
    while(count<=5){
    cout<< count<< " ";
    count++;
    }

    cout<<endl;
    return 0;

}

USING FOR LOOP

#include <iostream>
using namespace std;
int main(){
    int n = 10;
    for(int i  = 1; i<=n; i++){
    cout<<i<<" ";
   }
   cout<< endl;

    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 3;
    int sum = 0;
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    
    cout<<"sum=" <<sum<<endl;
    
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 10;
    int i = 1;
    do{
        cout<<i << " ";
        i++;
    }
    while(n >= i);
    cout<<endl;
    return 0;
}

Prime no
#include <iostream>
using namespace std;
int main(){
    int n = 7;
    bool isPrime = true;
    for(int i=2; i<=n-1; i++){
        if(n%i == 0){
            isPrime == false;
            break;
        }

    }

if(isPrime == true){
    cout<<"Prime no\n";
 }else{
    cout<<"Non-prime no\n";
}
return 0;
}
 
SQUARE PATTERN
#include <iostream> 
using namespace std;
int main(){
    int n= 4;
    
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n; j++){
            cout<< j << " ";
        }
        cout<<endl;    }
    return 0;
}

PATTERN ALPHABET
#include <iostream> 
using namespace std;
int main(){
    int n= 4;
    
    for(int i = 1; i<=n; i++){
        char ch = 'A';
        for(int j = 1; j<=n; j++) {
            cout<< ch ;
            ch = ch + 1;
        }
        cout<<endl;    }
    return 0;
}

ANOTHER PATTERN
#include <iostream>
using namespace std;
int main(){
    int n = 3;
    int num = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<< num<<" ";
            num++;
        }
        cout<<endl;
    } 
     return 0;
}

stars in triangle pattern
#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<< "*" <<" ";
        }
        cout<<endl;
    } 
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<(i+1) <<" ";
        }
        cout<<endl;
    } 
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int n = 4;
    char ch = 'A';
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<< char('A'+i) <<" ";
            ch = ch+1;
        }
        cout<<endl;
    } 
    return 0;
}

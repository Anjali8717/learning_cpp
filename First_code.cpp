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


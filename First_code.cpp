// #include<iostream>
// using namespace std;
// int main()
// {
//     int age = 24;
//     cout<<sizeof(age)<<endl;
//     cout<<sizeof("Hello world")<<endl;
//     return 0;
// };

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5, b = 10;
//     int sum = a + b;
//     cout<<"sum="<<a+b<<endl;
//     cout<<"difference="<<a-b<<endl;
//     cout<<"product="<<a*b<<endl;

//     return 0;
// }

// VOTE criteria 

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


# Palindrome-number-
Same code as sum of the digits of a number 
#include <iostream>
using namespace std;

int main() {
int number,sum=0,i,remainder,temp,reverse;
cout<<"Enter any number : ";
cin>>number;
temp=number;

while(temp!=0){
remainder=temp%10;
sum=sum*10+remainder;
temp=temp/10;

}
cout<<"Reverse of the number  = "<<sum<<endl;
if(number == sum){
    cout<<"It's a palindrome number 🥳!";
}
else{
    cout<<"Sorry! It's not a Palindrome 🙂";
}
    return 0;
}

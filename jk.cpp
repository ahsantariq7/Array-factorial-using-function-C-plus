#include<iostream>
using namespace std;

int factorial(int n);

int main() {

  int n[5];
  for(int i=0;i<5;i++){
        cout<<"Enter number "<<i<<endl;
    cin>>n[i];
  }


for(int i=0;i<5;i++){
  cout << "Factorial of " << n[i] << " = " << factorial(n[i])<<endl;
}
  return 0;
}

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}

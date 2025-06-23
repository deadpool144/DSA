#include<iostream>
#include<vector>

using namespace std;

vector<int> mem(100,-1);

int fib(int n){                        // Fibonacci function using memoization         use long long for larger values  eg fib(50) which give greater than 2^31-1
    if(n==2 || n==3)
    return 1;
    else if(n<=1)
    return 0;
    else if(mem[n]!= -1)
    return mem[n];
    else
    return mem[n]=fib(n-1)+fib(n-2);
}

int main() {
    int n,f;
    cout << "Enter the value of n: ";
    cin >> n;

    f=fib(n);
    cout << "Fibonacci of " << n << " is: " << f << endl;
    return 0;
}
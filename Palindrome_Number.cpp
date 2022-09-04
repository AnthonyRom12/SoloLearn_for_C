#include <iostream>
using namespace std;

int reverseNumber(int num); 

bool isPalindrome(int x) {
    //complete the function
    if (x == reverseNumber(x)) {
        return 1;
    }
    return 0;
}

int reverseNumber(int x) {
    int r;
    int sum = 0;

    while (x > 0) {
        r = x % 10;
        sum = sum * 10 + r;
        x = x / 10;
    }
    return sum;
}
int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n) == 1) {
        cout <<n<<" is a palindrome";
    }
    else {
        cout << n<<" is NOT a palindrome";
    }
    return 0;
}

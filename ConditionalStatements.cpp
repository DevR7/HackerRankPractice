#include <bits/stdc++.h>

using namespace std;

int main()
{
	string num[10] = {"Greater than 9", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (n>9){
    	cout<<num[0];
    }else{
    	cout<<num[n];
    }
    return 0;
}
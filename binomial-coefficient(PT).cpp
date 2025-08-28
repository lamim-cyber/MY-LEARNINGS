#include<bits/stdc++.h>
#define mod 1e9+7
/** @return nCk mod p using naive recursion */
int binomial(int n, int k) {
	if (k == 0 || k == n) { return 1; }
	return (binomial(n - 1, k - 1, mod) + binomial(n - 1, k, mod)) % mod;
}

//here we used the combinatorial property of Pascal's Triangle and the complexity is hence 2^n..
//because we are using double call of recursive function

int main(){
  int n, k;
  cin>> n>> k;
  cout<< binomial(n , k)<< endl;
}

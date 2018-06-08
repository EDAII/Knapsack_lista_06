#include<bits/stdc++.h>

using namespace std;

int max(int a, int b);
int knapSack(int W, int wt[], int val[], int n);

int main(int argc, char ** argv){

  int val[] = {60, 100, 120};
  int wt[] = {10, 20, 30};
  int  W;
  int n = sizeof(val)/sizeof(val[0]);

  W = 70;
  cout << "Se o w for 70 maior valor possivel é ";
  cout << knapSack(W, wt, val, n) << endl;

  W = 40;
  cout << "Se o w for 40 maior valor possivel é ";
  cout << knapSack(W, wt, val, n) << endl;

  W = 60;
  cout << "Se o w for 60 maior valor possivel é ";
  cout << knapSack(W, wt, val, n) << endl;

  return 0;
}

int max(int a, int b){
  return (a > b)? a : b;
}

int knapSack(int W, int wt[], int val[], int n){
  // Retorna o maior valor que cabe na mochila
  if (n == 0 || W == 0)
    return 0;

  if (wt[n-1] > W)
    return knapSack(W, wt, val, n-1);
  else
    return  max( val[n-1] + knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
}

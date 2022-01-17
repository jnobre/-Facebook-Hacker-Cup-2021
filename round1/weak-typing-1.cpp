#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

string h;

int main() {
  int t;
  scanf("%d\n", &t);
  for(int i = 1 ; i <= t ; i++) {
    int n;
    scanf("%d\n", &n);
    getline(cin, h);

    int score1 = 0, score2 = 0;
    bool isLeft1 = false, isLeft2 = true;

    for(int j = 0 ; j < n ; j++) {
      if(h[j] == 'X' && isLeft1) { score1++; isLeft1 = false; }
      if(h[j] == 'O' && !isLeft1) { score1++; isLeft1 = true; }
      if(h[j] == 'X' && isLeft2) { score2++; isLeft2 = false; }
      if(h[j] == 'O' && !isLeft2) { score2++; isLeft2 = true; }
    }
    printf("Case #%d: %d\n", i, min(score1, score2));
  }
  return 0;
}
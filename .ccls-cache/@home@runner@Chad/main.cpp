#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <unistd.h>

using namespace std;

float textspeed, ansnum;
string ans;

void slep(float time) { usleep(time * 1000000); }

void in(string type, string question) {
  cout << question << type;
  getline(cin, ans);
}

void innum(string type, string question) {
  cout << question << type;
  cin >> ansnum;
}

void out(string print) { cout << print; }

int main() {
  innum(": ", "Textspeed:\n1. Slow\n2. Medium\n3. Fast\n4. Instant\nChoice");
  if (ansnum == 1 || ansnum == 2 || ansnum == 3) {
    textspeed = 5 - (ansnum * 1.5);
  } else if (ansnum == 4) {
    textspeed = 0;
  } else {
    cout << "Invalid input";
    exit(1);
  }

  return 0;
}
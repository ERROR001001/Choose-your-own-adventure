#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <unistd.h>

using namespace std;

float textspeed;
string answer;

void slep(float time) { 
  usleep(time * 1000000);
}

void input(string type, string question) {
  cout << question << type;
  getline(cin, answer);
}

void out(string print) {
  cout << print;
}

int main() {
  input(": ","Textspeed:\n1. Slow\n2. Medium\n3. Fast\n4. Instant\nChoice");
  
  
  return 0;
}
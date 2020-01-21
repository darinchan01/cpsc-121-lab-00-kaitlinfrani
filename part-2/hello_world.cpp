// Kaitlin Frani
// CPSC 121-02
// kaitlinfrani@csu.fullerton.edu

#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
  if(argc!=3){
    cout << "Too few arguments." << endl;
    return 1;
  }
  string name = argv[1];
  int num = stoi(argv[2]);
  for(int i = 0; i < num; i++){
    cout << "Hello " << name << endl;
  }
  return 0;
}

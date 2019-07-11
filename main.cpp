#include <iostream>
#include <string>
using namespace std;

void readIn() {
cout<<"read()\n";
}
void sort() {
cout << "sort()\n";
}

void compact() {
cout << "compact()\n";
}

void print() {

cerr <<"print()\n"; 
}

int main(int argc, char** argv) {
   std::cout<<"Hello World!"<<std::endl;
string ifile, ofile;
   readIn();
   sort();
   compact();
   print();
cout<<"please input your name:\n";
string x = "this is a good job";
cout << x <<endl;
cin>>ifile >> ofile>>endl;
cout>>ifile>>"">>ofile;
   return 0;
}

#include <iostream>
#include <fstream>
#include "calculate.h"
using namespace std;
int main(){
int k,ra,rb;
double sa;
calculate r;
ifstream inFile("file.in", ios::in);
ofstream outFile("file.out", ios::out);
inFile >> k>>ra>>rb;
outFile<< ra <<"\t"<< rb <<"\t"<<endl;
while(inFile >> sa) {
r.setRA(k,ra,rb,sa);
r.setRB(k,ra,rb,sa);
ra=r.A;
rb=r.B;
outFile << ra << "\t" << rb << "\t"<<endl;
}



return 0;
}

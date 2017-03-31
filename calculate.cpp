#include "calculate.h"
#include<cstdlib>
#include<cmath>
//double calculate::K=32,RA=1613,RB=1609;
void calculate::setRA(int k,int ra,int rb,double sa){
ra=RA;
rb=RB;
k=K;
sa=SA;
double notrounded_RA=(double)(RA+K*(SA-1/(1+pow(10,((RB-RA)/400)))));
A=int(notrounded_RA+0.5);
}

void calculate::setRB(int k,int ra,int rb,double sa){
ra=RA;
rb=RB;
k=K;
sa=SA;
double notrounded_RB=(double)(RB+K*(1-SA-1/(1+pow(10,((RA-RB)/400)))));
B=int(notrounded_RB+0.5);
}




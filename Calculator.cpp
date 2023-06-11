#include <iostream>

#include <cstdlib>

#include <unistd.h>

using namespace std;

#define USUN "clear"

int x,a,b,c,i;

int m=1;

int main(){

for (i=0;i<9999;i++){

system(USUN);

for (x=0;x<100;x++){

//BG

cout << "\033[48;5;" << "255" << "m";

//Col

cout << "\033[38;5;" << "0" << "m";

system(USUN);

}

sleep(2);

system(USUN);

sleep(1);

cout<<"\n\n\n Select option \n 1=+ \n 2=- \n 3-exit \n\n\n";

cin>>a;

switch(a){

case 1:

cin>>b;

cin>>c;

cout<<"=\n";

cout<<b+c;

cout<<"\n\n ";

break;

case 2:

cin>>b;

cin>>c;

cout<<"=\n";

cout<<b+c;

cout<<"\n\n ";

break;

case 3:

cout<<"Good bye 👋\n\n ";

sleep(2);

return 0;

break;

}

sleep(2);

}

}


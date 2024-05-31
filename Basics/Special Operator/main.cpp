#include <iostream>

using namespace std;

int main(){

int x,y,sum,r;

r = (x=20, y=10, sum=x+y);
cout<< r << "\n";

x=20, y=30;

r = (sum=x+y);
cout<< r << "\n";

r = (x=20, y=5);
cout<< r << "\n";

}

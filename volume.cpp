#include <iostream>
#include<math.h>
using namespace std;
int main()
{
float x;
cout<<"Enter the radius of cylinder\n";
cin>>x;
float y;
cout<<"Enter the height of the cylinder\n";
cin>>y;
float volume;
volume=M_PI*x*x*y;
cout<<"Volume of cylinder is:"<<volume<<endl;
}
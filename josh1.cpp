#include <iostream>
using namespace std;

int main()
 {
    float dist,cpg,mpg,result;
    cout<<"Distance:";
    cin>>dist;
    cout<<"Cost Per Gallon:";
    cin>>cpg;
    cout<<"Miles per Gallon:";
    cin>>mpg;
    cout<<"Calculating..."<<"\n";
    result=dist/mpg*cpg;
    cout<<"Cost:"<<result<<"\n";
    system("pause");
}

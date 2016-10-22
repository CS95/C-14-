//============================================================================
// Name        : CS95T.cpp
// Author      : H.Rakhshani
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main()
{
float r,s;
string msg1,msg2,msg3;

msg1="برنامه محاسبه ی مساحت دایره";           
msg2="شعاع دایره را وارد نمایید";
msg3="مساحت دایره";
cout<<msg1<<endl;
cout<<msg2;
cin>>r;
s=3.14*r*r;
cout<<msg3;
cout<<s;

return 0;
}

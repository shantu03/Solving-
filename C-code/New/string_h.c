#include<iostream>
#include<string>

using namespace std;

int main()
{
string s="01010";
string b=s.substr(1,strlen(s)-1)+s[0];
return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{

int t=0;
cin>>t;
while(t-->0)
{
   long n;
   long k;
   cin>>n>>k;
   string arr;
   cin>>arr;
   string max=arr;
   int cycle=0;
   int p=-1;
     int d=0;
   for(int i=0;i<n;i++)
   {

    arr=arr.substr(1)+arr[0];
    unsigned long maxx=std::stoul(max,0,2);
    unsigned long arrr=std::stoul(arr,0,2);
  
    if(maxx<arrr)
    {
        max=arr;
        d=i;
    }else if(maxx==arrr)
    {
        p=i-d;
        break;
    }
    
   }
   if(p==-1)
   {
    cout<<d+(k-1)*n+1<<"\n";
   }
   else{
    cout<<d+(k-1)*p+1<<"\n";
   }
       

}
return 0;
}
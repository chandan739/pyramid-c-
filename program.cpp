#include <iostream>
#include <string>
using namespace std;
int main()
{
  int totalrow,row,space,sysmbol;
  cin>>totalrow;
  for(row=1;row<=totalrow;row++)
  {
    for(space=1;space<=(totalrow-row);space++)
    {
      cout<<" ";
    }
    for(sysmbol=1;sysmbol<=(2*row-1);sysmbol++)
    {
      cout<<"*";
    }
    cout<<endl;
  }

}

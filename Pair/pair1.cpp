#include<bits/stdc++.h>
using namespace std;
int main(){
// there can be any data type within this pair
// p is the variable
   pair<int,string> p,c;
   pair<int,string> b;

   //taking input
   p = make_pair(2,"abc");
   cout<< p.first << " " <<p.second<<endl;

   //another way to take input
   b={2,"abc"};
   cout<< b.first << " " <<b.second<<endl;

// m and n are working as a pair
  int m[]={1,2,3};
  int n[]={2,3,4};
  pair<int, int >p_a[3];
  p_a[0]={1,2};
  p_a[1]={2,3};
  p_a[2]={3,4};

  // swap is occurring within the pair
  swap(p_a[0],p_a[2]);

  for( int i=0;i<3;i++){

    cout<<p_a[i].first<<" "<<p_a[i].second<<endl;

  }
  //user input
  cin>>c.first;
  cout<<c.first;



}




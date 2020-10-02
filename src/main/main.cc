#include "src/lib/solution.h"
#include <iostream>
#include<vector>

int main() 
{
  CPPLib s;

  std::set<std::set<int>> a;
  std::vector<int> input={2,-2,5,3,4,-4,5};
  int sum = 0;
  a=s.twoSum(input,sum);

   for(auto it=a.begin();it!=a.end();it++)
   {
     for(auto it1=it->begin();it1!=it->end();it1++)
         std::cout<<*it1;
   }


  return 0;
}
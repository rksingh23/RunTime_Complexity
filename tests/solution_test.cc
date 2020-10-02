#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Q2_Student, HandlesMultipleOutputs) {
  CPPLib s;
  std::vector<int> input={2,-2,5,3,4,-4,5};
  std::set<std::set<int>> a;
  int sum=0;
  a=s.twoSum(input,sum);
  std::set<std::set<int>> b={{2,-2},{4,-4}};
  std::vector<int> vec,vec2;

  for(auto it=b.begin();it!=b.end();it++)
   {
     for(auto it1=it->begin();it1!=it->end();it1++)
          vec.push_back(*it1);
   }
   for(auto it=a.begin();it!=a.end();it++)
   {
     for(auto it1=it->begin();it1!=it->end();it1++)
          vec2.push_back(*it1);
   }
  ASSERT_EQ(vec.size(), vec2.size()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < vec.size(); ++i){
    EXPECT_EQ(vec[i],vec2[i]);
  }
}


TEST(Q2_Student, HandlesDuplicateInputs) {
  CPPLib s;
  std::vector<int> input={2,-2,2,-2,-4,4,5,5,3,3,4,-4,5};
  std::set<std::set<int>> a;
  int sum=0;
  a=s.twoSum(input,sum);
  std::set<std::set<int>> b={{2,-2},{4,-4}};
  std::vector<int> vec,vec2;

  for(auto it=b.begin();it!=b.end();it++)
   {
     for(auto it1=it->begin();it1!=it->end();it1++)
          vec.push_back(*it1);
   }
   for(auto it=a.begin();it!=a.end();it++)
   {
     for(auto it1=it->begin();it1!=it->end();it1++)
          vec2.push_back(*it1);
   }
  ASSERT_EQ(vec.size(), vec2.size()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < vec.size(); ++i){
    EXPECT_EQ(vec[i],vec2[i]);
  }
}

TEST(Q2_Student, HandlesNoOutput) {
  CPPLib s;
  std::vector<int> input={2,-2,2,-2,-4,4,5,5,3,3,4,-4,5};
  std::set<std::set<int>> a;
  int sum=100;
  std::set<std::set<int>> cmp ={{}};
  a=s.twoSum(input,sum);
  EXPECT_EQ(a,cmp);
}
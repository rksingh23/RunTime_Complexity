#include "solution.h"
#include <iostream>
#include <bits/stdc++.h>

std::set<std::set<int>> CPPLib::twoSum(std::vector<int>& input, int sum)
{
    std::set<int> input_set;
    std::unordered_map<int,int> map1;
    std::set<int> set_inner;
    std::set<std::set<int>> set_outer;

    for(auto it=input.begin();it!=input.end();it++)                                    //O(n)
        input_set.insert(*it);                                                         //O(logn)

    for(auto it=input_set.begin();it!=input_set.end();it++)                            //O(n)
        map1[*it]++;                                                                   //O(1)

    for(auto it1=input_set.begin();it1!=input_set.end();it1++)                         // O(n)
    {
         std::unordered_map<int,int>::iterator it2;
         it2=map1.find(sum-(*it1));                                                    //O(1)

         set_inner.clear();
         if ( (it2!=map1.end()) && (((sum-(*it1))!=(*it1))) )                          //O(1)
         {
             set_inner.insert(*it1);                                                   //O(logn)
             set_inner.insert(it2->first);                                             //O(logn)
         }
         
         set_outer.insert(set_inner);                                                  //O(logn)
    }
    return (set_outer);
}

//Worst case complexity = O(n)*O(logn)*(logn)
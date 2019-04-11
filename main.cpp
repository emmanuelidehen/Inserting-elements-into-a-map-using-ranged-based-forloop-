//
//  main.cpp
//  Map c++
//
//  Created by Emmanuel Idehen on 4/8/19.
//  Copyright © 2019 Emmanuel Idehen. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
//Map example!
using namespace std;
int main()
{
    
    map <int, int> map1;
    map <string, int> map2;
    
    //insert elements into the map!
    int y = 10;
    map1.insert(pair<int, int>(2,4));
    map1.insert(pair<int, int>(6,8));
    map1.insert(pair<int, int>(10,12));
    map2.insert(pair<string, int>("emmanuel", 347));
    map2.insert(pair<string, int>("idehen", 323));
    map2.insert(pair<string, int>("osagumwenro", 1538));
    //using a range based for loop, output the elements in map1 and map2
    std::cout<< "before erase was used";//all content of map1
    for(auto x : map1)
    {
        
        std::cout <<"\n"<<x.first <<" "<< x.second << "\n";
    }
   
    map1.erase(y);
    cout<<"after erased was used!";//after erase was used to delete a particular key work the pair was takinh out also
    for(auto x : map1)
    {
        std::cout <<"\n"<<x.first <<" "<< x.second << "\n";
    }
  
     cout<<"Map2!";
     cout <<"\n";
    //Map 2 starts
    
    for(auto x : map2)
    {
      
        std::cout <<"\n" <<x.first <<" "<< x.second << "\n";
    }
    cout <<"\n";
   
 
    return 0;
}
/*
 test case:
 
 before erase was used
 2 4
 
 6 8
 
 10 12
 after erased was used!
 2 4
 
 6 8
 Map2!
 
 emmanuel 347
 
 idehen 323
 
 osagumwenro 1538
 
 Program ended with exit code: 0
 
 */

//
//  main.cpp
//  Binding
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
    
    map1.insert(pair<int, int>(2,4));
    map1.insert(pair<int, int>(6,8));
    map1.insert(pair<int, int>(10,12));
    map2.insert(pair<string, int>("emmanuel", 347));
    map2.insert(pair<string, int>("idehen", 323));
    map2.insert(pair<string, int>("osagumwenro", 1538));
    //using a range based for loop, output the elements in map1 and map2
    for(auto x : map1)
    {
        std::cout << x.first <<" "<< x.second << "\n";
    }
    for(auto x : map2)
    {
        std::cout << x.first <<" "<< x.second << "\n";
    }
    
    return 0;
}

//
//  main.cpp
//  stock_1
//
//  Created by charlychiu on 2015/5/10.
//  Copyright (c) 2015年 charlychiu. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    int price[]={100,90,80,60,50,52,56,70,72,66,60,68,88,75,90,96,100};
    int num=sizeof(price)/sizeof(price[0]);
    int fin[num];
    fin[0]=1;
    for(int i=0;i<num;i++)
    {
        cout<<setw(3)<<price[i]<<" ";
    }
    //start...
    for(int i=0;i<num;i++)
    {
        for(int j=i-1;j>=0;j--)
        {
            static int o=0;
            o++;
            if(price[j]>=price[i])
            {
                fin[i]=o;
                o=0;
                break;
                
            }
            
        }
        
    }
    cout<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<setw(3)<<fin[i]<<" ";
    }
    return 0;
}

//
//  main.cpp
//  stock_1
//
//  Created by charlychiu on 2015/5/10.
//  Copyright (c) 2015年 charlychiu. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, const char * argv[]) {
    /*srand((unsigned)time(NULL));
    int ans[10];
    for(int i=0;i<10;i++)
    {
        ans[i]=rand()%100;
        
    }
    for(int i=0;i<10;i++)
    {
        cout<<ans[i]<<" ";
    }*/
    int price[]={2,3,4,3,2,1,2,3,4,5,4,3,4,5,6,7};
    int num=sizeof(price)/sizeof(price[0]);
    int fin[num];
    fin[0]=1;
    for(int i=0;i<num;i++)
    {
        cout<<price[i]<<" ";
    }
    //start...
    for(int i=0;i<num;i++)
    {
        
        for(int j=i-1;j>=0;--j)
        {
            int static plus=1;
            if(price[i]<price[j])
            {
                fin[j]=1;
                plus++;
                fin[i]=plus;
                break;
            }
            else
            {
                fin[i]=1;
                plus=1;
            }
           
        }
    }
    cout<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<fin[i]<<" ";
    }
    return 0;
}

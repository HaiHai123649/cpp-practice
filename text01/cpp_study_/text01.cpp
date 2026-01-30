//
// Created by 39787 on 2026/1/30.
//

#include "text01.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int shuixianhuashu(int n) {
    if (n >999||n < 100) {
        fprintf(stderr ,"不在水仙花数的范围");
        return -1;
    }
    int sum=0;
    int temp01 = n;
    for (;temp01;temp01/=10) {
        int temp = temp01%10;
        sum += pow(temp,3);
    }
    if (sum == n)
    cout<<"shuixianhuashu:"<<sum<<endl;
    return 0;
}

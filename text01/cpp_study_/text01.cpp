//
// Created by 39787 on 2026/1/30.
//

#include "text01.h"
#include <iostream>
#include <string>
#include <cmath>
#include<cstdlib>
#include<ctime>
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

int random01() {
    cout<<rand()%1000<<" 伪随机数"<<endl;
    srand(time(0));
    cout<<rand()%1000<<" 真正随机数"<<endl;
    //宏定义简化操作
    cout<<" 宏定义简化操作"<<random_01(N)<<endl;
    cout<<random_01(55-3+1)+3<<" 范围内随机3-55"<<endl;
    cout<<"宏定义简化范围内随机"<<random_02(18937,323857325)<<endl;
    cout<<"一位小数 "<<rand()%10/10.0<<endl;
    cout<<"小数RAND_MAX "<<static_cast<double>(rand()) / RAND_MAX<<endl;
    return 0;
}

int chice(char ch) {
    int lev = 0;
    switch (ch) {
        case 'a' :
            lev = 10;
            junior_puzzle_number(lev);
            break;
        case 'b' :
            lev = 5;
            intermediate_number(lev);
            break;
        case 'c' :
            lev = 2;
            senior_number(lev);
            break;
            default:
                cout<<"输入错误"<<" 请重新输入"<<endl;
                cin>>ch;
    }
}

int junior_puzzle_number(int n) {
    srand((int)time(NULL));
    int num = random_01(10)+1;
    int temp;
    while (true) {
        cout<<"请输入1-10数字"<<endl;
        cin>>temp;
        n--;
        if (n==0) {
            cout<<"次数用尽"<<endl;
            return 0;
        }

        if (temp == num) {
            cout<<"你猜对了！！！ "<<temp<<endl;
            return 0;
        }
        cout<<"你猜错了，重猜"<<endl;

    }
    return 0;
}

int intermediate_number(int n) {
    srand((int)time(NULL));
    int num = random_01(100)+1;
    int temp;
    while (true) {
        cout<<"请输入1-100数字"<<endl;
        cin>>temp;
        n--;
        if (n==0) {
            cout<<"次数用尽"<<endl;
            return 0;
        }
        if (temp == num) {
            cout<<"你猜对了！！！ "<<temp<<endl;
            return 0;
        }
        else if (temp > num)
            cout<<"你猜大了，重猜"<<endl;
        else
            cout<<"你猜小了，重猜"<<endl;
    }
    return 0;
}

int senior_number(int n) {
    srand((int)time(NULL));
    int num = random_01(100)+1;
    int temp;
    while (true) {
        cout<<"请输入1-100数字"<<endl;
        cin>>temp;
        int number = n;
        n--;

        if (temp == num) {
            cout<<"你猜对了！！！ "<<temp<<endl;
            return 0;
        }
        else if (temp > num)
            cout<<"你猜大了，重猜"<<endl;
        else
            cout<<"你猜小了，重猜"<<endl;
        if (n==0) {
                cout<<"次数用尽"<<endl;
                cout<<"你是否要再玩一次，Y/N"<<endl;
                char ch;
                cin>>ch;
                if (ch=='Y'||ch=='y')
                {
                    n = number;
                    cout<<"请输入1-100数字"<<endl;
                    cin>>temp;
                }
                else return 0;
            }

    }
    return 0;
}

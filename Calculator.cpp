//
//  计算器.cpp
//  Test
//
//  Created by 小林矿车 on 2020/3/29.
//  Copyright ? 2020年 小林矿车. All rights reserved.
//

#include <iostream>
using namespace std;

int main () {
    
    int a = 0 ;
    int b = 0 ;
    int way = 0 ;
    int jg = 0 ;
    
    
    cout << "请输入第一个数：" << endl;
    cin >> a ;

    cout << "请输入第二个数：" << endl;
    cin >> b ;
    
    cout << "输入计算方式后回车\n1加法\n2减法\n3乘法\n4除法" << endl;
    cin >> way ;
    
    if (way == 1) {
         cout << "结果是：" << a + b << endl ;
    }
    
    else if (way == 2) {
        cout << "结果是：" << a - b << endl ;
    }
    
    else if (way == 3) {
        cout << "结果是：" << a * b << endl ;
    }
    
    else if (way == 4) {
        cout << "请检查除数是否为0\n确认请输入1后回车" << endl ;
        cin >> jg ;
        if (jg == 1) {
            cout << "结果是：" << float (a / b) << endl;
            cout << "注意：无法显示小数点" << endl; 
        }
        else{
            cout << "请退出程序 检查除数" << endl ;
        }
    }
            
    else {
        cout << "请检查输入的计算方式数字是否有误" << endl ;
            
    }
    
    
    
    return 0;
}

//
//  ������.cpp
//  Test
//
//  Created by С�ֿ� on 2020/3/29.
//  Copyright ? 2020�� С�ֿ�. All rights reserved.
//

#include <iostream>
using namespace std;

int main () {
    
    int a = 0 ;
    int b = 0 ;
    int way = 0 ;
    int jg = 0 ;
    
    
    cout << "�������һ������" << endl;
    cin >> a ;

    cout << "������ڶ�������" << endl;
    cin >> b ;
    
    cout << "������㷽ʽ��س�\n1�ӷ�\n2����\n3�˷�\n4����" << endl;
    cin >> way ;
    
    if (way == 1) {
         cout << "����ǣ�" << a + b << endl ;
    }
    
    else if (way == 2) {
        cout << "����ǣ�" << a - b << endl ;
    }
    
    else if (way == 3) {
        cout << "����ǣ�" << a * b << endl ;
    }
    
    else if (way == 4) {
        cout << "��������Ƿ�Ϊ0\nȷ��������1��س�" << endl ;
        cin >> jg ;
        if (jg == 1) {
            cout << "����ǣ�" << float (a / b) << endl;
            cout << "ע�⣺�޷���ʾС����" << endl; 
        }
        else{
            cout << "���˳����� ������" << endl ;
        }
    }
            
    else {
        cout << "��������ļ��㷽ʽ�����Ƿ�����" << endl ;
            
    }
    
    
    
    return 0;
}

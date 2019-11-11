//
//  main.cpp
//  OOD10
//
//  Created by 김노은 on 11/11/2019.
//  Copyright © 2019 Noeun-Kim. All rights reserved.
//

#include <iostream>

void swapInt(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}


void swapFloat(float& a, float& b){
    float temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 1;
    int b = 2;
    float c = 3.3;
    float d = 4.4;
    
    swapInt(a, b);
    swapFloat(c, d);
    
    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "c: " << c << ", d: " << d << std::endl;
    
    return 0;
}

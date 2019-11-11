//
//  swap_template.cpp
//  OOD10
//
//  Created by 김노은 on 11/11/2019.
//  Copyright © 2019 Noeun-Kim. All rights reserved.
//

#include <stdio.h>
#include <iostream>

/* template 을 사용한 swap 함수 구현(실습 1) */
/* template 을 사용한 swap 함수에 string type specialization */

template<typename T>

void swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 1;
    int b = 2;
    float c = 3.3;
    float d = 4.4;
    
    std::string e = "World";
    std::string f = "Hello";
    
    swap<int>(a, b);
    swap<float>(c, d);
    // swap<std::string>(e, f);
    
    std::cout << "a: " << a << ", b: " << b << std::endl;
    std::cout << "c: " << c << ", d: " << d << std::endl;
    std::cout << "e: " << c << ", f: " << d << std::endl;
    return 0;
}


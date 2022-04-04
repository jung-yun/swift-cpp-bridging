//
//  MyCpp.hpp
//  swift-cpp-bridging
//
//  Created by 조중윤 on 2022/04/04.
//

#ifndef MyCpp_hpp
#define MyCpp_hpp

#include <string>
#include <iostream>

class MyCpp {
public:
    MyCpp();                                // 생성자
    MyCpp(const std::string &text);         // 변수를 입력 받는 생성자
    ~MyCpp();                               // 소멸자(Destructor)
    
public:
    void sayHello();                                // Hello world를 출력하는 함수
    
    void setText(const std::string &text);          // m_text의 getter & setter
    const std::string &getText();
    
    void setNumber(const int number);               // m_number의 getter & setter
    int getNumber();
    
private:
    std::string m_text;                  // 문자열 변수
    int m_number;                        // 정수값 변수
};


#endif /* MyCpp_hpp */

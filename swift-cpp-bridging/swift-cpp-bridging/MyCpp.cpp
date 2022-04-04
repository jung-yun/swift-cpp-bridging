//
//  MyCpp.cpp
//  swift-cpp-bridging
//
//  Created by 조중윤 on 2022/04/04.
//

#include "MyCpp.hpp"

MyCpp::MyCpp():m_text() {}
MyCpp::MyCpp(const std::string &text): m_text(text) {}
MyCpp::~MyCpp() {}

void MyCpp::sayHello()
{
    std::cout << "Hello world!" << std::endl;
    
}

void MyCpp::setText(const std::string &text)
{
    m_text = text;
}
const std::string &MyCpp::getText()
{
    return m_text;
}

void MyCpp::setNumber(const int number)
{
    m_number = number;
}

int MyCpp::getNumber()
{
    return m_number;
}

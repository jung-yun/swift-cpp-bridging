# swift-cpp-bridging
Demonstrating how to bridge C++ code base to Swift, alongside with objective-C

# key points
- briding diagram
![from: https://medium.com/@cecilia.humlelu/using-c-c-and-objective-c-frameworks-in-swift-apps-6a60e5f71c36](https://github.com/jung-yun/swift-cpp-bridging/main/images/bridgingDiagram.png?raw=true)
- step
    1. C++ 파일 작성
    2. Objective C++ Wrapper 작성 
    3. 브릿지 헤더에 Objective C++의 헤더 추가
    4. 호출
- renaming the CWrapper.m into Cwrapper.mm
    : to become an Objective-C++ file which supports both C++ and Objective-C 
- result(example)
![from: https://medium.com/@cecilia.humlelu/using-c-c-and-objective-c-frameworks-in-swift-apps-6a60e5f71c36](https://github.com/jung-yun/swift-cpp-bridging/main/images/resultImg.png?raw=true)

# references
[Swift, Objective-C, C++ 같이 사용하기](https://jk2b.tistory.com/5)
[C++ 소스파일 확장자인 .cxx, .hpp, .h, .hxx 차이](https://blog.naver.com/spaciall/222040311469)
[Using C ++ code and libraries in applications written in Swift](https://www.ekreative.com/blog/using-c-code-and-libraries-in-applications-written-in-swift/)
[Set up C++ library dependencies in Swift projects](https://medium.com/@cecilia.humlelu/set-up-c-library-dependencies-in-swift-projects-5dc2ccd2ddaf)

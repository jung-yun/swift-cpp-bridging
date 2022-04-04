//
//  ViewController.swift
//  swift-cpp-bridging
//
//  Created by 조중윤 on 2022/04/04.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        
        let cppItem = CWrapper();
        
        cppItem.helloWorld()
        print(cppItem.getText())
        cppItem.setText("This is test string")
        print(cppItem.getText())
        
        
        let cppItem2 = CWrapper(text: "Hi my name is cpp");
        print(cppItem2?.getText())
        
        cppItem2?.setNumber(33)
        print(cppItem2?.getNumber())
        
    }

}


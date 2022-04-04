//
//  CWrapper.h
//  swift-cpp-bridging
//
//  Created by 조중윤 on 2022/04/04.
//

#ifndef CWrapper_h
#define CWrapper_h

#import <Foundation/Foundation.h>

@interface CWrapper : NSObject
- (instancetype)initWithText:(NSString*)text;
- (void)helloWorld;

- (void)setText:(NSString*)text;
- (NSString*)getText;

- (void)setNumber:(int)number;
- (int)getNumber;
@end

#endif /* CWrapper_h */

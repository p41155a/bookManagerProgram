//
//  bookManager.h
//  bookManager
//
//  Created by Yoojin Park on 2020/01/13.
//  Copyright © 2020 Yoojin Park. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class Book; // import하는 것보다 컴파일이 빨라짐 + 순환 참조 오류를 회피할 수 있음
@interface bookManager : NSObject{
    NSMutableArray *bookList;
}

-(void)addBook: (Book *)bookObject;
-(NSString *)showAllBook;
-(NSUInteger) countBook;
-(NSString *)findBook:(NSString *)name;
-(NSString *)removeBook:(NSString *)name;

@end

NS_ASSUME_NONNULL_END

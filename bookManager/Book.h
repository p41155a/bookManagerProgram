//
//  Book.h
//  bookManager
//
//  Created by Yoojin Park on 2020/01/13.
//  Copyright © 2020 Yoojin Park. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Book : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, strong) NSString *genre;
@property (nonatomic, strong) NSString *author;
//기본인 atomic이라면 원자화라는 뜻으로 값을 동시에 접근을 하지 못함(ex.줄서서 차례로 들어오는 것)
//strong: 동적할당이 되어서 객체를 참조하고 있다는 뜻(기본으로 들어가는 값)

-(void)bookPrint;

@end

NS_ASSUME_NONNULL_END

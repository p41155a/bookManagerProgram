//
//  Book.m
//  bookManager
//
//  Created by Yoojin Park on 2020/01/13.
//  Copyright © 2020 Yoojin Park. All rights reserved.
//

#import "Book.h"

@implementation Book

@synthesize name,genre,author;

-(void)bookPrint{
    NSLog(@"Name : %@", name);
    NSLog(@"Genre : %@", genre);
    NSLog(@"Author : %@", author);
}

@end

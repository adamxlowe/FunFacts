//
//  ColorWheel.h
//  FunFacts
//
//  Created by Adam Lowe on 3/3/15.
//  Copyright (c) 2015 Adam Lowe. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property(strong, nonatomic) NSArray *colors;

-(UIColor *)randomColor;

@end

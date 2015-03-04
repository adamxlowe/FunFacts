//
//  FactBook.h
//  FunFacts
//
//  Created by Adam Lowe on 3/3/15.
//  Copyright (c) 2015 Adam Lowe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *)randomFact;

@end

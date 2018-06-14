//
//  Item.h
//  mvp
//
//  Created by Jobsz on 7/15/16.
//  Copyright © 2018 E7du. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "User.h"

@interface Item : NSObject

@property (nonatomic, copy) NSString *itemName;

@property (nonatomic, copy) NSString *itemDesc;

@property (nonatomic, retain) User *user;

@end

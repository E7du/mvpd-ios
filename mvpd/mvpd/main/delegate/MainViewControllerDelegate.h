//
//  MainViewControllerDelegate.h
//  mvp
//
//  Created by Jobsz on 7/15/16.
//  Copyright © 2018 E7du. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;
@protocol MainViewControllerDelegate <NSObject>

- (User *)user;

@end

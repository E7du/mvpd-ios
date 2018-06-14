//
//  LoginViewControllerDelegate.h
//  mvp
//
//  Created by Jobsz on 7/15/16.
//  Copyright © 2018 E7du. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 UI Delegate
 */
@class User;
@protocol LoginViewControllerDelegate <NSObject>

- (NSString *)username;

- (NSString *)password;

- (void)updateUI:(User *)user;

@end

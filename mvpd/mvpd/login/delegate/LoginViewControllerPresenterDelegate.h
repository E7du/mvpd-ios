//
//  LoginViewControllerPresenterDelegate.h
//  mvp
//
//  Created by Jobsz on 7/15/16.
//  Copyright © 2018 E7du. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 Presenter And Data Logic Delegate
 */
@protocol LoginViewControllerDelegate;
@protocol LoginViewControllerPresenterDelegate <NSObject>

- (id)initWithDelegate:(id<LoginViewControllerDelegate>)delegate;

- (void)login;

@end

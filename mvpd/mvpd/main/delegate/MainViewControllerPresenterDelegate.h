//
//  MainViewControllerPresenterDelegate.h
//  mvp
//
//  Created by Jobsz on 7/15/16.
//  Copyright © 2018 E7du. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MainViewControllerDelegate;
@protocol MainViewControllerPresenterDelegate <NSObject>

- (id)initWithDelegate:(id<MainViewControllerDelegate>)delegate;

- (void)loadData;

@end

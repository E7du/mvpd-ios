//
//  MainViewControllerPresenter.h
//  mvp
//
//  Created by Jobsz on 7/15/16.
//  Copyright © 2018 E7du. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MainViewControllerPresenterDelegate.h"
#import <UIKit/UIKit.h>

@interface MainViewControllerPresenter : NSObject<MainViewControllerPresenterDelegate, UITableViewDelegate, UITableViewDataSource>

@end

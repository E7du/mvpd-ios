//
//  ItemTableViewCell.h
//  mvp
//
//  Created by Jobsz on 7/15/16.
//  Copyright © 2018 E7du. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Item;
@interface ItemTableViewCell : UITableViewCell

- (void)pushData:(Item *)data;

@end

//
//  LoveAuthTableViewCell.h
//  Light
//
//  Created by 郑来贤 on 15/8/3.
//  Copyright (c) 2015年 Light. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LightAuth.h"

@interface LoveAuthTableViewCell : UITableViewCell

+ (instancetype)initFromNib;

- (void)disPlayViewWith:(LightAuth *)auth;

@end

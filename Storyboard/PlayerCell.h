//
//  PlayerCell.h
//  Storyboard
//
//  Created by New on 9/21/14.
//  Copyright (c) 2014 New. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel * nameLabel;
@property (nonatomic, weak) IBOutlet UILabel * gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView * ratingImageView;

@end

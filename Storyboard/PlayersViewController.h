//
//  PlayersViewController.h
//  Storyboard
//
//  Created by New on 9/21/14.
//  Copyright (c) 2014 New. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray * players;

@end

//
//  PlayerDetailsViewController.h
//  Storyboard
//
//  Created by New on 9/22/14.
//  Copyright (c) 2014 New. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Player.h"

@class PlayerDetailsViewController;

@protocol PlayerDetailsViewControllerDelegate <NSObject>
-(void)playerDetailsViewConttrollerDidCancel:(PlayerDetailsViewController *)controller;
-(void)playerDetailsViewConttroller:(PlayerDetailsViewController *)controller
                       didAddPlayer:(Player *)player;
@end

@interface PlayerDetailsViewController : UITableViewController

@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;

@property (nonatomic, weak) id <PlayerDetailsViewControllerDelegate> delegate;

-(IBAction)cancel:(id)sender;
-(IBAction)done:(id)sender;

@end

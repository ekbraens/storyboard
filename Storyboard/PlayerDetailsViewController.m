//
//  PlayerDetailsViewController.m
//  Storyboard
//
//  Created by New on 9/22/14.
//  Copyright (c) 2014 New. All rights reserved.
//

#import "PlayerDetailsViewController.h"

@implementation PlayerDetailsViewController

-(IBAction)cancel:(id)sender
{
    [self.delegate playerDetailsViewConttrollerDidCancel:self];
}

-(IBAction)done:(id)sender
{
    Player * player = [[Player alloc] init];
    player.name = self.nameTextField.text;
    player.game = @"Unknown";
    player.rating = 1;
    [self.delegate playerDetailsViewConttroller:self didAddPlayer:player];
}

-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (indexPath.section == 0)
    {
        [self.nameTextField becomeFirstResponder];
    }
}

@end

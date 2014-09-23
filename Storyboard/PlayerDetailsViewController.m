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
    [self.delegate playerDetailsViewConttrollerDidSave:self];
}

-(void)tableView:(UITableView *)tableView didDeselectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (indexPath.section == 0)
    {
        [self.nameTextField becomeFirstResponder];
    }
}

@end

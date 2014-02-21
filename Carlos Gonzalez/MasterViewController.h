//
//  MasterViewController.h
//  Carlos Gonzalez
//
//  Created by Walter Jose Vargas Fabes on 2/21/14.
//  Copyright (c) 2014 Walter Jose Vargas Fabes. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

//
//  DetailViewController.h
//  Carlos Gonzalez
//
//  Created by Walter Jose Vargas Fabes on 2/21/14.
//  Copyright (c) 2014 Walter Jose Vargas Fabes. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

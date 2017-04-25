//
//  MasterViewController.h
//  ScaryBugs
//
//  Created by Harini Rao on 25/4/17.
//  Copyright © 2017 Harini Rao. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@property (strong) NSMutableArray *bugs;

@end


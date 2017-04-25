//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Harini Rao on 25/4/17.
//  Copyright © 2017 Harini Rao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


//
//  ScaryBugDoc.m
//  ScaryBugs
//
//  Created by Harini Rao on 25/4/17.
//  Copyright © 2017 Harini Rao. All rights reserved.
//

#import "ScaryBugDoc.h"
#import "ScaryBugData.h"

@import UIKit;
@implementation ScaryBugDoc
@synthesize data = _data;
@synthesize thumbImage = _thumbImage;
@synthesize fullImage = _fullImage;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage {
    if ((self = [super init])) {
        self.data = [[ScaryBugData alloc] initWithTitle:title rating:rating];
        self.thumbImage = thumbImage;
        self.fullImage = fullImage;
    }
    return self;
}

@end

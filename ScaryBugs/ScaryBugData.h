//
//  ScaryBugData.h
//  ScaryBugs
//
//  Created by Harini Rao on 25/4/17.
//  Copyright © 2017 Harini Rao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ScaryBugData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating;

@end

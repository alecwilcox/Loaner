//
//  Details.h
//  LoanTracker
//
//  Created by Kyle Ford on 7/26/13.
//  Copyright (c) 2013 TinkerSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class ListVC;

@interface Details : NSManagedObject

@property (nonatomic, retain) NSDate * date;
@property (nonatomic, retain) NSString * text;
@property (nonatomic, retain) ListVC *list;

@end

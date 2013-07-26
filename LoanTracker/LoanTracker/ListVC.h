//
//  ListVC.h
//  LoanTracker
//
//  Created by Kyle Ford on 7/26/13.
//  Copyright (c) 2013 TinkerSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface ListVC : NSManagedObject

@property (nonatomic, retain) NSString * list;
@property (nonatomic, retain) NSDate * view;
@property (nonatomic, retain) NSSet *details;
@end

@interface ListVC (CoreDataGeneratedAccessors)

- (void)addDetailsObject:(NSManagedObject *)value;
- (void)removeDetailsObject:(NSManagedObject *)value;
- (void)addDetails:(NSSet *)values;
- (void)removeDetails:(NSSet *)values;

@end

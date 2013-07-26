//
//  DetailsViewController.m
//  LoanTracker
//
//  Created by Kyle Ford on 7/25/13.
//  Copyright (c) 2013 TinkerSoft. All rights reserved.
//

#import "DetailsViewController.h"

@interface DetailsViewController ()

-(IBAction)save:(id)sender;

@end

@implementation DetailsViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
 
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - IBActions
-(void)save:(id)sender
{
    //TODo
}
@end

//
//  AccountsViewController.h
//  tweetags
//
//  Created by Ehsan Valizadeh on 6/7/14.
//  Copyright (c) 2014 ehsan_valizadeh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Accounts/Accounts.h>


@interface AccountsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) NSMutableArray *accounts;

@end

//
//  BContactsViewController.h
//  Chat SDK
//
//  Created by Benjamin Smiley-andrews on 23/05/2014.
//  Copyright (c) 2014 deluge. All rights reserved.
//

#import <UIKit/UIKit.h>


@class BSearchViewController;
@class BNotificationObserverList;
@protocol PUserConnection;

@interface BContactsViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchResultsUpdating> {
    NSMutableArray * _contacts;
    __strong BSearchViewController * _searchViewController;
    BNotificationObserverList * _notificationList;
    float _initialTableYOffset;
}

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@property (strong, nonatomic) UISearchController * searchController;

-(NSMutableArray *) contacts;
-(void) sortContacts;
-(void) reloadData;

@end
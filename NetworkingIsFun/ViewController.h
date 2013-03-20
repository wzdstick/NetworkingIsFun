//
//  ViewController.h
//  NetworkingIsFun
//
//  Created by Wizard Works on 13. 3. 20..
//  Copyright (c) 2013년 Wizard Works. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    UIActivityIndicatorView *_activityIndicatorView;
    NSArray *_movies;
}

@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) NSArray *movies;

@end

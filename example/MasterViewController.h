//
//  MasterViewController.h
//  example
//
//  Created by Matthew Seeley on 10/17/13.
//  Copyright (c) 2013 GeLo Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface MasterViewController : UITableViewController

@property (nonatomic) NSArray *tours;
@property (nonatomic) NSArray *sites;

@property (weak, nonatomic) IBOutlet UIWebView *webView;


@end

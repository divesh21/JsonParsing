//
//  NewsTableViewController.h
//  JsonParsing
//
//  Created by student14 on 15/12/16.
//  Copyright © 2016 Felix-ITs-Divesh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NewsTableViewController : UITableViewController<NSURLConnectionDelegate,NSURLConnectionDataDelegate>

@property(nonatomic,retain) NSMutableArray *titleArray;
@property(nonatomic,retain) NSMutableData *myData;



@end

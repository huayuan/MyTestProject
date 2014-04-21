//
//  DetailViewController.h
//  MyTestProject
//
//  Created by ios007 on 14-4-21.
//  Copyright (c) 2014年 com.hy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

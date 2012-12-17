//
//  DetailViewController.h
//  Xilin Chinese School
//
//  Created by Ying Rao on 12/17/12.
//  Copyright (c) 2012 Ying Rao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

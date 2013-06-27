//
//  GlideDetailViewController.h
//  Glide Alpha
//
//  Created by Carter on 6/27/13.
//  Copyright (c) 2013 Carter. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GlideDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

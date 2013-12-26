//
//  DetailViewController.h
//  JigDraw
//
//  Created by Jules Paulynice on 12/26/13.
//  Copyright (c) 2013 Jules Jay Paulynice. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

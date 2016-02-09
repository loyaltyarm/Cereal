//
//  ViewController.h
//  Cereal
//
//  Created by loyaltyarm on 7/9/14.
//  Copyright (c) 2014 loyaltyarm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *serialLabel;
@property (weak, nonatomic) IBOutlet UIImageView *barCodeImage;
@property (strong, nonatomic) NSString *qrString;
@property (nonatomic, readonly) NSString *serialNumber;

@end
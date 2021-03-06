//
//  DamageViewController.h
//  CargoDamageReport
//
//  Created by Rune Bleken Kulstad on 23.10.13.
//  Copyright (c) 2013 Capra consulting. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DamageViewController : UIViewController<UITextFieldDelegate>
- (BOOL)textFieldShouldReturn:(UITextField *)textField;
- (IBAction) clickedBackground;
@property (nonatomic, retain) IBOutlet UITextView *damageOccur;
@property (nonatomic, retain) IBOutlet UITextView *remarks;
@end

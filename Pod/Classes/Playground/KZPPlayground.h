//
//  Created by merowing on 22/10/14.
//
//
//

#import "KZPAnimatorComponent.h"
#import "KZPPresenterComponent.h"
#import "KZPValueAdjustComponent.h"
#import "KZPActionComponent.h"

@import Foundation;
@import UIKit;

extern NSString *const KZPPlaygroundDidChangeImplementationNotification;

//! adapt KZPActivePlayground in a KZPPlayground class that you want to use as active playground
@protocol KZPActivePlayground
@end

@interface KZPPlayground : NSObject
@property(nonatomic, weak, readonly) UIView *worksheetView;
@property(nonatomic, weak, readonly) UIViewController *viewController;

//! objects store that will be re-created with recompilation, use eg. instead of instance variables
@property(nonatomic, strong, readonly) NSMutableDictionary *transientObjects;

- (void)run;
@end
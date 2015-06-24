/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class UIColor;
@protocol SBSearchResultDetailsViewControllerDelegate;

@protocol SBSearchResultDetailsViewController <NSObject>
@optional
@property(retain) UIColor* contentBackgroundColor;
@required
@property(readonly, assign) BOOL wantsInset;
@property(assign) id<SBSearchResultDetailsViewControllerDelegate> actionDelegate;
+(id)viewControllerForResult:(id)result inSection:(id)section;
-(void)loadWithCompletionBlock:(id)completionBlock;
@end


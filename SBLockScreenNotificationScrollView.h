/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBLockScreenNotificationCell;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationScrollView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	SBLockScreenNotificationCell* _associatedCell;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) SBLockScreenNotificationCell* associatedCell;
+(float)scrollThresholdForPasscodeScroll;
@end

/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBAppSwitcherContainerDelegate;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherContainer : XXUnknownSuperclass {
	id<SBAppSwitcherContainerDelegate> _delegate;
}
@property(assign, nonatomic) id<SBAppSwitcherContainerDelegate> delegate;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)frame;
@end


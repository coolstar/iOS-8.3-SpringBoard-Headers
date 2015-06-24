/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBControlCenterObserver.h"
#import "SpringBoard-Structs.h"
#import "SBUIControlCenterControlObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, BSTimer, NSMutableArray, NSMutableDictionary, SBUIControlCenterLabel, SBControlCenterStatusUpdate, SBChevronView;

__attribute__((visibility("hidden")))
@interface SBControlCenterGrabberView : XXUnknownSuperclass <SBUIControlCenterControlObserver, SBControlCenterObserver> {
	SBChevronView* _chevronView;
	float _defaultChevronAlpha;
	SBUIControlCenterLabel* _statusLabel;
	SBUIControlCenterLabel* _statusLabel2;
	int _statusState;
	NSMutableDictionary* _statusByReason;
	NSMutableArray* _statusReasonQueue;
	SBControlCenterStatusUpdate* _activeStatus;
	BSTimer* _statusTimer;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(float)defaultHeightForOrientation:(int)orientation;
-(void)controlConfigurationDidChangeForState:(int)controlConfiguration;
-(void)controlAppearanceDidChangeForState:(int)controlAppearance;
-(void)controlCenterDidFinishTransition;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillPresent;
-(void)layoutSubviews;
-(CGRect)_grabberRect;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)_rescindStatusUpdate:(id)update;
-(void)presentStatusUpdate:(id)update;
-(void)_resetLabelAndChevronState;
-(void)_animateNextStatus;
-(void)_animateWithDuration:(double)duration delay:(double)delay animations:(id)animations;
-(void)_animateWithDuration:(double)duration animations:(id)animations;
-(void)_setStatusState:(int)state;
-(id)_getNextStatusString;
-(void)_restartTimerWithInterval:(double)interval handler:(id)handler;
-(void)_evaluateStatusStateForNewStatus:(id)newStatus;
-(id)_peekNextStatus;
-(id)_popNextStatus;
-(BOOL)_hasPendingStatus;
-(id)chevronView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


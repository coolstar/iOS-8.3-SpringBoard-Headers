/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBRemoteAlertAdapter, UIView, SBAlertManager, NSArray;

__attribute__((visibility("hidden")))
@interface SBUIAnimationFadeAppToRemoteAlert : SBUIMainScreenAnimationController {
	SBRemoteAlertAdapter* _alert;
	SBAlertManager* _alertManager;
	UIView* _appContextHostView;
	UIView* _alertContextHostView;
	NSArray* _accessoryHostViews;
}
-(void)_animationFinished;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)_setHidden:(BOOL)hidden;
-(id)_getTransitionWindow;
-(double)animationDuration;
-(void)dealloc;
-(id)initWithAlert:(id)alert deactivatingApp:(id)app alertManager:(id)manager;
@end


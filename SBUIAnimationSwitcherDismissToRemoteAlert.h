/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBRemoteAlertAdapter, SBAlertManager;

__attribute__((visibility("hidden")))
@interface SBUIAnimationSwitcherDismissToRemoteAlert : SBUIMainScreenAnimationController {
	SBRemoteAlertAdapter* _alert;
	SBAlertManager* _alertManager;
}
-(void)_cleanupAnimation;
-(void)_deferredAlertActivationStuff;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(double)animationDuration;
-(void)dealloc;
-(id)initWithDeactivatingApp:(id)deactivatingApp toRemoteAlert:(id)remoteAlert alertManager:(id)manager;
@end

/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBRemoteAlertAdapter, SBAlertManager, SBIconAnimator;

__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomUpInCallAlertFromHome : SBUIMainScreenAnimationController {
	SBRemoteAlertAdapter* _alert;
	SBAlertManager* _alertManager;
	SBIconAnimator* _iconAnimator;
}
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithAlert:(id)alert andAlertManager:(id)manager;
@end


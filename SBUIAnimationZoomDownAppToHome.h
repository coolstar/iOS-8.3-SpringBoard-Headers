/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationZoomDownApp.h"

@class SBIconAnimator;

__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownAppToHome : SBUIAnimationZoomDownApp {
	SBIconAnimator* _iconAnimator;
}
-(void)cleanupZoom;
-(void)animateZoomWithCompletion:(id)completion;
-(BOOL)_shouldUpdateStatusBarOnContentRestore;
-(void)prepareZoom;
-(void)dealloc;
@end


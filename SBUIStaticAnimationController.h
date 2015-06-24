/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class UIView, SBApplication;

__attribute__((visibility("hidden")))
@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController {
	UIView* _staticAppView;
	UIView* _hostView;
}
@property(readonly, retain, nonatomic) SBApplication* app;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(BOOL)_shouldDismissBanner;
-(void)_hideAppHostView;
-(void)_prepareAnimation;
-(void)_setupStartDependencies;
-(BOOL)_willAnimate;
-(void)_applicationDependencyStateChanged;
-(id)_animationProgressDependency;
-(void)dealloc;
-(id)initWithApp:(id)app;
@end


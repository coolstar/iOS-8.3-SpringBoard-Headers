/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class FBWindowContextHostManager, UIView, SBAppStatusBarTransitionInfo;

__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomUpApp : SBUIMainScreenAnimationController {
	UIView* _contextHostView;
	BOOL _zoomHostView;
	FBWindowContextHostManager* _activatingContextHostManager;
	SBAppStatusBarTransitionInfo* _appStatusBarTransitionInfo;
	int _animationTransition;
	BOOL _finishedZooming;
	BOOL _finishedActivating;
	BOOL _finishedCrossfadingToHostView;
	BOOL _animationFinished;
	BOOL _fromNC;
	BOOL _fromCC;
	BOOL _fromAssistant;
	UIView* _viewToAnimate;
}
@property(assign, nonatomic) int animationTransition;
-(BOOL)_shouldWaitForSiriDismissBeforeZooming;
-(void)_maybeReportAnimationFinished;
-(void)_noteContextHostCrossfadeDidFinish;
-(void)_maybeStartCrossfade;
-(void)_noteZoomDidFinish;
-(void)_applicationDependencyStateChanged;
-(BOOL)isReasonableMomentToInterrupt;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(id)_animationProgressDependency;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(void)cleanupZoom;
-(void)animateZoomWithCompletion:(id)completion;
-(void)prepareZoom;
-(void)noteDependencyDidInvalidate;
-(double)animationDelay;
-(double)animationDuration;
-(void)animateFakeStatusBarWithParameters:(id)parameters;
-(id)appStatusBarTransitionInfoWithStartStyleRequest:(id)startStyleRequest startOrientation:(int)orientation;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp;
@end


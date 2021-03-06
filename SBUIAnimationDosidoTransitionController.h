/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class FBWindowContextHostManager, SBDosidoAnimator, UIView;

__attribute__((visibility("hidden")))
@interface SBUIAnimationDosidoTransitionController : SBUIMainScreenAnimationController {
	UIView* _fromAppContextHostView;
	UIView* _fromView;
	UIView* _toView;
	SBDosidoAnimator* _dosidoAnimator;
	FBWindowContextHostManager* _toAppContextHostManager;
	FBWindowContextHostManager* _fromAppContextHostManager;
	int _fromOrientation;
	BOOL _fromNC;
	BOOL _fromCC;
	BOOL _fromAssistant;
	BOOL _requiresHostView;
}
-(void)_performDosido;
-(void)_kickOffAnimation;
-(void)_setFromView:(id)view;
-(void)captureFlagsForActivatingApp:(id)activatingApp;
-(void)_cleanupFromContextHostView;
-(void)setToView:(id)view;
-(int)orientationAtLaunch;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(BOOL)_waitsForApplicationActivationIfNecessary;
-(void)_setHidden:(BOOL)hidden;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
-(id)_getTransitionWindow;
@end


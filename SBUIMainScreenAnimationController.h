/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIAnimationController.h"


__attribute__((visibility("hidden")))
@interface SBUIMainScreenAnimationController : SBUIAnimationController {
	BOOL _needsToClearBulletinWindowOrientation;
}
-(void)_noteAnimationDidCommit:(BOOL)_noteAnimation withDuration:(double)duration afterDelay:(double)delay;
-(void)_cleanupAnimation;
-(void)_removeWallpaperAnimationPriorityWithFactory:(id)factory;
-(void)beginAnimation;
-(void)_dismissBannerAnimated:(BOOL)animated;
-(BOOL)_shouldDismissBanner;
-(void)__startAnimation;
-(void)_clearBulletinWindowOverrideOrientationIfNecessary;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
-(id)_getTransitionWindow;
@end


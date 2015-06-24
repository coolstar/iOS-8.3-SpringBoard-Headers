/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconAnimator.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface SBIconFadeAnimator : SBIconAnimator {
	UIView* _crossfadeView;
	BOOL _addedToWindow;
}
-(void)_applyAlphaForFraction:(float)fraction;
-(void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
-(unsigned)_numberOfSignificantAnimations;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(float)fraction;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithFolderController:(id)folderController crossfadeView:(id)view;
@end


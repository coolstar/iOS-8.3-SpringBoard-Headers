/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBScaleIconZoomAnimator.h"
#import "SpringBoard-Structs.h"

@class UIView, SBCrossfadeZoomSettings;

__attribute__((visibility("hidden")))
@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator {
	UIView* _crossfadeView;
	BOOL _performsTrueCrossfade;
	BOOL _masksCorners;
}
@property(assign, nonatomic) BOOL masksCorners;
@property(assign, nonatomic) BOOL performsTrueCrossfade;
@property(retain, nonatomic) SBCrossfadeZoomSettings* settings;
-(CGPoint)_zoomedIconCenter;
-(CGRect)_zoomedFrame;
-(void)_animateToFraction:(float)fraction afterDelay:(double)delay withSharedCompletion:(id)sharedCompletion;
-(unsigned)_numberOfSignificantAnimations;
-(void)_cleanupAnimation;
-(void)_setAnimationFraction:(float)fraction;
-(void)_prepareAnimation;
-(void)_delayedForRotation;
-(void)dealloc;
-(id)initWithFolderController:(id)folderController crossfadeView:(id)view icon:(id)icon;
-(void)_assertCrossfadeViewSizeIfNecessary;
@end

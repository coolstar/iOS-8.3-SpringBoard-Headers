/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAnimationStepper.h"

@class SBWallpaperEffectView;

__attribute__((visibility("hidden")))
@interface _SBWallpaperAnimationStepper : SBAnimationStepper {
	int _variant;
	int _homescreenPriority;
	SBWallpaperEffectView* _toEffectView;
	SBWallpaperEffectView* _fromEffectView;
	XXStruct_S5WqmA _toState;
	XXStruct_S5WqmA _fromState;
}
@property(assign, nonatomic) XXStruct_S5WqmA fromState;
@property(assign, nonatomic) XXStruct_S5WqmA toState;
@property(retain, nonatomic) SBWallpaperEffectView* fromEffectView;
@property(retain, nonatomic) SBWallpaperEffectView* toEffectView;
@property(assign, nonatomic) int homescreenPriority;
@property(assign, nonatomic) int variant;
-(void)didFinishBackwardToStart;
-(void)setPercentage:(float)percentage;
-(void)dealloc;
@end


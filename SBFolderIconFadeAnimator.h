/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBIconFadeAnimator.h"

@class SBFolderController;

__attribute__((visibility("hidden")))
@interface SBFolderIconFadeAnimator : SBIconFadeAnimator {
	SBFolderController* _innerFolderController;
}
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithFolderController:(id)folderController innerController:(id)controller;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBTestRecipe.h"
#import "FBApplicationProcessObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBWindowManagerTestRecipe : XXUnknownSuperclass <FBApplicationProcessObserver, SBTestRecipe> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)title;
-(void)applicationProcessDidExit:(id)applicationProcess withContext:(id)context;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
@end


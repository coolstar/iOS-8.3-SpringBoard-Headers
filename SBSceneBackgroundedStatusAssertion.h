/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject, NSSet, BSAction;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBSceneBackgroundedStatusAssertion : XXUnknownSuperclass {
	NSSet* _scenes;
	NSObject<OS_dispatch_queue>* _synchronizingQueue;
	BSAction* _invalidationAction;
	id _synchronousInvalidationBlock;
}
@property(readonly, copy, nonatomic) NSSet* scenes;
-(void)invalidate;
-(void)dealloc;
-(id)initWithScenes:(id)scenes invalidationHandler:(id)handler;
@end


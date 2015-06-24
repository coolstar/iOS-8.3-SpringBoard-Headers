/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSXPCListenerDelegate.h"
#import "_NCWidgetController_Host_IPC.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterWidgetController : XXUnknownSuperclass <_NCWidgetController_Host_IPC, NSXPCListenerDelegate> {
	NSXPCListener* _listener;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)defaultWidgetController;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
+(id)containingBundleIdentifierForWidgetWithBundleIdentifer:(id)bundleIdentifer;
-(void)__setHasContent:(BOOL)content forWidgetWithBundleIdentifier:(id)bundleIdentifier;
-(BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
-(void)dealloc;
-(id)init;
@end


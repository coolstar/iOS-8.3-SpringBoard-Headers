/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBPluginManager.h"

@class SBUIPluginHost, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBUIPluginManager : SBPluginManager {
	NSMutableDictionary* _uiPlugins;
	SBUIPluginHost* _pendingActivation;
	SBUIPluginHost* _hostPendingActivation;
}
@property(retain) SBUIPluginHost* hostPendingActivation;
+(id)sharedInstance;
-(BOOL)overrideScreenDimInterval:(double*)interval;
-(BOOL)suppressingNotifications;
-(BOOL)overrideInterfaceOrientation:(int*)orientation;
-(BOOL)handleActivationEvent:(int)event eventSource:(int)source withContext:(id)context;
-(void)cancelPendingActivationEvent:(int)event;
-(void)prepareForActivationEvent:(int)activationEvent eventSource:(int)source afterInterval:(double)interval;
-(BOOL)wantsActivationEvent:(int)event eventSource:(int)source interval:(double*)interval;
-(BOOL)handleButtonTapFromSource:(int)source;
-(BOOL)handleButtonUpEventFromSource:(int)source;
-(BOOL)handleButtonDownEventFromSource:(int)source;
-(id)loadedUIPluginHosts;
-(id)_loadedUIPluginHostsVisible:(BOOL)visible;
-(id)loadedUIPlugins;
-(BOOL)unloadUIPlugin:(id)plugin forHost:(id)host;
-(id)loadUIPluginNamed:(id)named withHost:(id)host;
@end


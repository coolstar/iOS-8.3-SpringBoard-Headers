/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APSConnectionDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBRemoteNotificationServer : XXUnknownSuperclass <APSConnectionDelegate> {
	NSMutableDictionary* _bundleIdentifiersToClients;
	NSMutableDictionary* _environmentsToConnections;
	NSMutableSet* _bundleIdentifiersNeedingToken;
	NSString* _lastNotificationReceivedBundleIdentifier;
	NSMutableDictionary* _appImportanceTracker;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(id)sharedInstance;
-(void)setBackgroundDeliveryDisabled:(BOOL)disabled forBundleIdentifier:(id)bundleIdentifier;
-(unsigned)legacyRegisteredTypesForApp:(id)app;
-(BOOL)isAppPushEnabled:(id)enabled;
-(BOOL)isPushAllowedForBundleIdentifier:(id)bundleIdentifier;
-(void)requestTokenForClient:(id)client;
-(void)setBackgroundAppRefreshAllowed:(BOOL)allowed forBundleIdentifier:(id)bundleIdentifier;
-(void)registerApplicationWithBundleIdentifier:(id)bundleIdentifier forEnvironment:(id)environment appWantsPush:(BOOL)push;
-(void)registerApplication:(id)application forEnvironment:(id)environment appWantsPush:(BOOL)push;
-(void)userNotificationsChangedStateForBundleIdentifier:(id)bundleIdentifier becameEnabled:(BOOL)enabled;
-(id)_allTopicsForApplication:(id)application;
-(id)_cloudDatabaseTopicsForApplication:(id)application;
-(void)calculateTopics;
-(void)_appDebugStateDidChange:(id)_appDebugState;
-(void)_appStateDidChange:(id)_appState;
-(void)_appImportanceDecreased:(id)decreased;
-(void)_appImportanceIncreased:(id)increased;
-(void)_moveTopicsForApp:(id)app fromList:(unsigned)list toList:(unsigned)list3;
-(id)allBackgroundAppRefreshEnabledBundleIdentifiers;
-(id)allBackgroundAppRefreshCapableBundleIdentifiers;
-(id)lastNotificationReceivedBundleIdentifier;
-(void)connection:(id)connection didReceiveIncomingMessage:(id)message;
-(void)connection:(id)connection didReceivePublicToken:(id)token;
-(void)connection:(id)connection didReceiveToken:(id)token forTopic:(id)topic identifier:(id)identifier;
-(void)run;
-(void)dealloc;
-(id)init;
@end


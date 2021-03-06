/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "BBObserverDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableSet, NSArray, NSMutableDictionary, BBObserver;

__attribute__((visibility("hidden")))
@interface SBNotificationCenterDataProviderController : XXUnknownSuperclass <BBObserverDelegate> {
	NSMutableDictionary* _identifiersToDataProviders;
	NSMutableDictionary* _identifiersToDataProviderProxies;
	NSMutableDictionary* _identifiersToWidgetExtensions;
	NSArray* _defaultEnabledWeeAppIDs;
	BOOL _isCoalescingForSectionSort;
	NSMutableSet* _serviceIDsOnProbation;
	id _plugInDiscoveryToken;
	BBObserver* _bbObserver;
	BOOL _isPublishing;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic, getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:) id plugInDiscoveryToken;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(void)observer:(id)observer updateSectionInfo:(id)info inCategory:(int)category;
-(void)_endContinuousPlugInDiscovery;
-(void)_beginContinuousPlugInDiscovery;
-(BOOL)shouldWidgetsPurgeArchivedSnapshots;
-(void)noteServiceWithIdentifierDidCloseViewServiceConnection:(id)noteServiceWithIdentifier;
-(void)noteServiceWithIdentifierDidOpenViewServiceConnection:(id)noteServiceWithIdentifier;
-(void)_noteAvailableWidgetExtensions:(id)extensions;
-(id)extensionForSectionIdentifier:(id)sectionIdentifier;
-(id)publishedExtensionIdentifiers;
-(void)buddyCompleted:(id)completed;
-(void)beginPublishingIfNecessary;
-(void)_setupBBObserverIfNecessary;
-(void)updatePublishedWidgetExtensions;
-(void)_updatePublishedWidgetExtensions:(id)extensions;
-(BOOL)_shouldPublishWidgetExtension:(id)extension;
-(void)_coalesceAndSortChronologicalSections;
-(void)sortChronologicalSectionsWithCompletion:(id)completion;
-(id)_widgetExtensionsDiscoveryAttributes;
-(id)_lazyIdentifiersToWidgetExtensions;
-(void)_postNotificationForNewWidgets:(int)newWidgets;
-(id)_lazyDefaultEnabledWeeAppIDs;
-(BOOL)_publishWidgetSection:(id)section withExtension:(id)extension defaultEnabledWeeAppIDs:(id)ids;
-(void)_removeDataProviderForServiceWithIdentifier:(id)identifier completion:(id)completion;
-(void)setShowsInNotificationCenter:(BOOL)notificationCenter forDataProviderWithIdentifier:(id)identifier completion:(id)completion;
-(void)_setShowsInNotificationCenter:(BOOL)notificationCenter andUpdateExtensionOptInState:(BOOL)state forDataProviderWithIdentifier:(id)identifier completion:(id)completion;
-(BOOL)_publishSectionInfo:(id)info withExtension:(id)extension;
-(id)_sectionWithIdentifier:(id)identifier forCategory:(int)category;
-(id)_sectionForWidgetExtension:(id)widgetExtension withSectionID:(id)sectionID forCategory:(int)category;
-(id)_copyDefaultEnabledWidgetIDs;
-(void)dealloc;
-(id)init;
@end


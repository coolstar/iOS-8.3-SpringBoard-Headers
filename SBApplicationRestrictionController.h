/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "MCProfileConnectionObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableSet, NSHashTable, NSMutableDictionary, NSSet;
@protocol SBApplicationRestrictionDataSource, SBApplicationRestrictionControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBApplicationRestrictionController : XXUnknownSuperclass <MCProfileConnectionObserver> {
	id<SBApplicationRestrictionDataSource> _dataSource;
	NSHashTable* _observers;
	NSMutableDictionary* _tagValidityMap;
	NSMutableDictionary* _validTagsByIdentifier;
	MGNotificationTokenStructRef _tagsNotificationToken;
	NSMutableSet* _enabledTags;
	NSMutableDictionary* _ratingRanksByIdentifier;
	BOOL _hasSMSCapability;
	NSSet* _restrictedIdentifiers;
	BOOL _showInternalApps;
	BOOL _hasHideNonDefaultSystemAppsCapability;
	BOOL _showAllSystemApps;
	BOOL _canPostRestrictionState;
	id<SBApplicationRestrictionControllerDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<SBApplicationRestrictionControllerDelegate> delegate;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)_postRestrictionStateToObservers:(id)observers;
-(void)_postRestrictionState;
-(void)updateVisibilityPreferences;
-(void)_updateRestrictionsAndForcePost:(BOOL)post;
-(void)updateRestrictions;
-(void)beginPostingChanges;
-(void)noteVisibilityStateDidChange;
-(void)noteApplicationIdentifiersDidChangeWithAdded:(id)noteApplicationIdentifiers modified:(id)modified removed:(id)removed;
-(BOOL)isApplicationIdentifierRestricted:(id)restricted;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(void)dealloc;
-(id)init;
-(id)initWithDataSource:(id)dataSource;
@end

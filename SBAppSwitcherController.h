/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAppSwitcherPeopleDelegate.h"
#import "_UISettingsKeyObserver.h"
#import "SBAppSwitcherIconControllerDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBReachabilityObserver.h"
#import "SBAppSwitcherContainerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"
#import "SBAppSwitcherScrollingViewDelegate.h"
#import "SBVolumePressBandit.h"

@class UISwipeGestureRecognizer, NSDictionary, NSMutableArray, SBDisplayLayout, _UILegibilitySettings, SBAppSwitcherPageViewController, NSMutableDictionary, UIGestureRecognizer, UIView, SBAppSwitcherSettings, SBAppSwitcherStatusBarViewCache, NSObject, NSString, SBAppSwitcherContainer, SBAppSwitcherServices, SBAppSwitcherRemoteAlertSet, SBAppSwitcherIconController, SBAppSwitcherPeopleViewController, NSMutableSet;
@protocol OS_dispatch_queue, SBAppSwitcherControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherController : XXUnknownSuperclass <SBAppSwitcherIconControllerDelegate, SBAppSwitcherScrollingViewDelegate, SBAppSwitcherContainerDelegate, SBAppSwitcherPeopleDelegate, _UISettingsKeyObserver, SBVolumePressBandit, SBReachabilityObserver, UIGestureRecognizerDelegate> {
	id<SBAppSwitcherControllerDelegate> _delegate;
	NSMutableArray* _appList_use_block_accessor;
	SBAppSwitcherServices* _switcherServices_use_block_accessor;
	NSMutableDictionary* _switcherServiceViewControllerMap;
	SBAppSwitcherRemoteAlertSet* _switcherRemoteAlerts_use_block_accessor;
	SBDisplayLayout* _switcherContinuityApp_use_block_accessor;
	unsigned _appListAccessCount;
	SBAppSwitcherPageViewController* _pageController;
	SBAppSwitcherIconController* _iconController;
	SBAppSwitcherPeopleViewController* _peopleController;
	SBAppSwitcherContainer* _containerView;
	UIView* _contentView;
	UIView* _pageView;
	UIView* _iconView;
	UIView* _peopleView;
	NSMutableSet* _hostedApplications;
	NSMutableDictionary* _appSnapshots;
	NSRange _lastVisibleRange;
	int _startingInterfaceOrientation;
	int _layoutInterfaceOrientation;
	BOOL _interactionEnabled;
	BOOL _visible;
	BOOL _peopleDimmed;
	unsigned _inflightPeopleDimmingAnimations;
	BOOL _peopleShouldDimForKilling;
	BOOL _peopleShouldDimForDismissal;
	int _mode;
	SBDisplayLayout* _startingDisplayLayout;
	NSDictionary* _startingViews;
	SBAppSwitcherSettings* _settings;
	NSObject<OS_dispatch_queue>* _snapshotQueue;
	NSMutableArray* _servicesRemovedWhileAwayFromSwitcher;
	SBAppSwitcherStatusBarViewCache* _statusBarCache;
	BOOL _simplifiedStatusBars;
	_UILegibilitySettings* _legibilitySettings;
	UIGestureRecognizer* _cancelReachabilityTapGestureRecognizer;
	UISwipeGestureRecognizer* _swipeToRevealNotificationCenterGestureRecognizer;
	CGPoint _preReachabilityContentViewOrigin;
	BOOL _presentingForReachabilityLayout;
	CGAffineTransform _wallpaperTransform;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSDictionary* startingViews;
@property(readonly, assign, nonatomic) SBAppSwitcherIconController* iconController;
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(readonly, assign, nonatomic) SBAppSwitcherStatusBarViewCache* statusBarViewCache;
@property(assign, nonatomic) CGAffineTransform wallpaperTransform;
@property(copy, nonatomic) SBDisplayLayout* startingDisplayLayout;
@property(assign, nonatomic) id<SBAppSwitcherControllerDelegate> delegate;
+(void)setPerformSochiMigrationTasksWhenLoaded:(BOOL)loaded;
+(BOOL)_shouldUseSerialSnapshotQueue;
+(BOOL)shouldProvideHomeSnapshotIfPossible;
+(BOOL)shouldProvideSnapshotIfPossible;
+(float)pageScale;
-(float)reachabilityOffsetForSwitcherScroller:(id)switcherScroller;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)handleReachabilityModeDeactivated;
-(void)handleReachabilityModeActivated;
-(BOOL)_shouldRespondToReachability;
-(void)handleRevealNotificationCenterGesture:(id)gesture;
-(void)handleCancelReachabilityGesture:(id)gesture;
-(void)_animateReachabilityDeactivatedWithHandler:(id)handler;
-(void)_animateReachabilityActivatedWithHandler:(id)handler;
-(void)_performReachabilityTransactionForActivate:(BOOL)activate immediately:(BOOL)immediately;
-(id)pageController;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)peopleController:(id)controller wantsToContact:(id)contact;
-(void)launchAppWithIdentifier:(id)identifier url:(id)url actions:(id)actions;
-(void)_peopleDidAnimateOpacity;
-(void)_peopleWillAnimateOpacity;
-(void)_updatePeopleOpacity:(id)opacity;
-(void)switcherScroller:(id)scroller updatedPeakPageOffset:(float)offset;
-(void)switcherScrollerDidEndScrolling:(id)switcherScroller;
-(void)switcherScrollerBeganMoving:(id)moving;
-(BOOL)switcherScroller:(id)scroller displayItemWantsToBeKeptInViewHierarchy:(id)viewHierarchy;
-(void)switcherScroller:(id)scroller displayItemWantsToBeRemoved:(id)beRemoved;
-(BOOL)switcherScrollerIsRelayoutBlocked:(id)blocked;
-(BOOL)switcherScroller:(id)scroller isDisplayItemRemovable:(id)removable;
-(void)switcherScrollerBeganPanning:(id)panning;
-(void)switcherScroller:(id)scroller itemTapped:(id)tapped;
-(void)switcherScroller:(id)scroller contentOffsetChanged:(float)changed;
-(float)switcherScrollerDistanceBetweenItemCenters:(id)centers forOrientation:(int)orientation;
-(CGSize)switcherScrollerItemSize:(id)size forOrientation:(int)orientation;
-(id)switcherScroller:(id)scroller viewForDisplayLayout:(id)displayLayout;
-(void)switcherIconScrollerBeganPanning:(id)panning;
-(void)switcherIconScrollerDidEndScrolling:(id)switcherIconScroller;
-(unsigned)switcherIconScroller:(id)scroller settledIndexForNormalizedOffset:(inout float*)normalizedOffset andXVelocity:(float)velocity;
-(BOOL)switcherIconScroller:(id)scroller shouldHideIconForDisplayLayout:(id)displayLayout;
-(void)switcherIconScroller:(id)scroller activate:(id)activate;
-(void)switcherIconScroller:(id)scroller contentOffsetChanged:(float)changed;
-(BOOL)workspaceShouldAbortLaunchingAppDueToSwitcher:(id)workspace url:(id)url actions:(id)actions;
-(void)cleanupRemoteAlertServices;
-(void)_unsimplifyStatusBarsAfterMotion;
-(void)_simplifyStatusBarsForMotion;
-(void)_bringIconViewToFront;
-(void)_updateSnapshotsForce:(BOOL)force;
-(void)_updateSnapshots;
-(unsigned)_totalLayoutsForWhichToKeepAroundSnapshots;
-(BOOL)_isSnapshotDisplayIdentifier:(id)identifier;
-(BOOL)isScrolling;
-(id)_animationFactoryForIconAlphaTransition;
-(id)_transitionAnimationFactory;
-(int)_windowInterfaceOrientation;
-(void)_disableContextHostingForApp:(id)app;
-(void)_temporarilyHostAppForQuitting:(id)quitting;
-(void)_quitAppWithDisplayItem:(id)displayItem;
-(void)_removeDisplayLayout:(id)layout completion:(id)completion;
-(void)_insertDisplayLayout:(id)layout atIndex:(unsigned)index completion:(id)completion;
-(void)_removeRemoteAlertPlaceholder:(id)placeholder completion:(id)completion;
-(void)_insertRemoteAlertPlaceholder:(id)placeholder atIndex:(unsigned)index completion:(id)completion;
-(void)_insertSwitcherService:(id)service atIndex:(unsigned)index completion:(id)completion;
-(void)_insertApp:(id)app atIndex:(unsigned)index completion:(id)completion;
-(void)_insertMultipleAppDisplayLayout:(id)layout atIndex:(unsigned)index completion:(id)completion;
-(void)_rebuildAppListCache;
-(void)_destroyAppListCache;
-(void)_cacheAppList;
-(void)_accessAppListState:(id)state;
-(id)_displayLayoutsFromDisplayLayouts:(id)displayLayouts byRemovingDisplayItems:(id)items;
-(id)_flattenedArrayOfDisplayItemsFromDisplayLayouts:(id)displayLayouts;
-(void)_appActivationStateDidChange:(id)_appActivationState;
-(void)_setInteractionEnabled:(BOOL)enabled;
-(id)_generateCellViewForDisplayLayout:(id)displayLayout;
-(id)_snapshotViewForDisplayItem:(id)displayItem;
-(id)_viewForContinuityApp:(id)continuityApp;
-(id)_viewForRemoteAlert:(id)remoteAlert placeholder:(BOOL)placeholder;
-(void)addContentViewForRemoteAlert:(id)remoteAlert toAlertViewCell:(id)alertViewCell animated:(BOOL)animated;
-(id)_viewForService:(id)service;
-(void)_continuityAppSuggestionChanged:(id)changed;
-(BOOL)_isBestAppSuggestionEligibleForSwitcher:(id)switcher;
-(void)_switcherRemoteAlertAdded:(id)added;
-(void)_switcherRemoteAlertRemoved:(id)removed;
-(void)_switcherServiceRemoved:(id)removed;
-(void)_switcherServiceAdded:(id)added;
-(void)_updatePageViewScale:(float)scale;
-(void)_updatePageViewScale:(float)scale xTranslation:(float)translation;
-(void)_updateForAnimationFrame:(float)animationFrame withAnchor:(id)anchor;
-(float)_frameScaleValueForAnimation;
-(float)_scaleForFullscreenPageView;
-(BOOL)_inMode:(int)mode;
-(float)_switcherThumbnailVerticalPositionOffset;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_getRotationContentSettings:(XXStruct_ykCi7C*)settings;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)wantsFullScreenLayout;
-(id)pageForDisplayLayout:(id)displayLayout;
-(BOOL)allowShowHide;
-(void)forceDismissAnimated:(BOOL)animated;
-(void)_askDelegateToDismissToDisplayLayout:(id)displayLayout displayIDsToURLs:(id)urls displayIDsToActions:(id)actions;
-(void)animateDismissalToDisplayLayout:(id)displayLayout withCompletion:(id)completion;
-(void)switcherWasDismissed:(BOOL)dismissed;
-(void)switcherWillBeDismissed:(BOOL)switcher;
-(void)switcherWasPresented:(BOOL)presented;
-(void)_layoutInOrientation:(int)orientation;
-(void)animatePresentationFromDisplayLayout:(id)displayLayout withViews:(id)views withCompletion:(id)completion;
-(void)_layout;
-(CGRect)_nominalPageViewFrame;
-(id)_peopleViewController;
-(void)appSwitcherContainer:(id)container movedToWindow:(id)window;
-(void)_warmAppInfoForAppsInList;
-(void)_finishDeferredSochiMigrationTasks;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(void)dealloc;
-(id)init;
@end

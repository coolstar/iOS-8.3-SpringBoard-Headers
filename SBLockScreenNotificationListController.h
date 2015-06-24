/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBMotionGestureObserver.h"
#import "SBLockScreenNotificationBannerItemDelegate.h"
#import "SBUIBannerTargetManagerObserver.h"
#import "SBPresentingDelegate.h"
#import "SBUIBannerSource.h"
#import "SBCoordinatedPresenting.h"
#import "SBLockScreenNotificationModel.h"
#import "SBVolumePressBandit.h"
#import "SBLockScreenNotificationViewDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBLockScreenActionHandler.h"
#import "BBObserverDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBLockScreenNotificationCell, SBLockScreenActionContext, SBLockScreenNotificationListView, NSMutableArray, BSSerializedRequestQueue, NSSet, SBLockScreenBounceAnimator, SBAwayViewPluginController, BBObserver;
@protocol SBLockScreenNotificationListDelegate, SBUIBannerTarget;

__attribute__((visibility("hidden")))
@interface SBLockScreenNotificationListController : XXUnknownSuperclass <SBLockScreenNotificationViewDelegate, SBLockScreenNotificationModel, BBObserverDelegate, SBVolumePressBandit, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBLockScreenActionHandler, SBLockScreenNotificationBannerItemDelegate, SBPresentingDelegate, SBCoordinatedPresenting, SBMotionGestureObserver> {
	SBLockScreenNotificationListView* _notificationView;
	id<SBLockScreenNotificationListDelegate> _delegate;
	BBObserver* _observer;
	NSMutableArray* _listItems;
	NSMutableArray* _realertTimers;
	BSSerializedRequestQueue* _bulletinRequestQueue;
	BOOL _hibernating;
	BOOL _quietModeEnabled;
	id _deferredModelUpdateBlock;
	BOOL _hasDeferredUpdateToClearListItems;
	SBLockScreenActionContext* _actionContext;
	id<SBUIBannerTarget> _bannerTarget;
	NSMutableArray* _listItemsBannerQueue;
	SBAwayViewPluginController* _activePlugin;
	BOOL _isOnscreen;
	BOOL _hasMissedUnreadNotifications;
	int _messagePrivacyRevealState;
	id<SBPresentingDelegate> _presentingDelegate;
	SBLockScreenBounceAnimator* _bounceAnimator;
	SBLockScreenNotificationCell* _hintingCell;
	CGPoint _hintingCellOriginalOffset;
	BOOL _hasAnyContent;
}
@property(readonly, assign, nonatomic) NSSet* tapExcludedViews;
@property(readonly, assign, nonatomic) NSSet* conflictingGestures;
@property(readonly, assign, nonatomic) NSSet* gestures;
@property(assign, nonatomic) id<SBPresentingDelegate> presentingDelegate;
@property(readonly, assign, nonatomic) unsigned hintEdge;
@property(readonly, assign, nonatomic) float hintDisplacement;
@property(readonly, assign, nonatomic) int coordinatedPresentingControllerIdentifier;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isHibernating;
@property(retain, nonatomic) SBAwayViewPluginController* activePlugin;
@property(readonly, assign, nonatomic, getter=isUsingBanners) BOOL usingBanners;
@property(readonly, assign, nonatomic) BOOL quietModeEnabled;
@property(retain, nonatomic) SBLockScreenActionContext* lockScreenActionContext;
@property(assign, nonatomic) BOOL hasAnyContent;
@property(assign, nonatomic) id<SBLockScreenNotificationListDelegate> delegate;
+(id)underlayPropertiesFactory;
-(BOOL)shouldBeginHintForGesture:(id)gesture;
-(id)_firstBulletin;
-(BOOL)_firstBulletinHasRaiseAction;
-(void)_updateMotionGestureObservation;
-(void)didReceiveRaiseGesture;
-(void)presentingControllerDidFinishPresentation:(id)presentingController;
-(void)presentingController:(id)controller willHandleGesture:(id)gesture;
-(BOOL)presentingController:(id)controller gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)presentingController:(id)controller gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)reenableGestureRecognizer:(id)recognizer;
-(void)cancelGestureRecognizer:(id)recognizer;
-(void)abortAnimatedTransition;
-(void)endTransitionWithVelocity:(CGPoint)velocity wasCancelled:(BOOL)cancelled completion:(id)completion;
-(void)updateTransitionWithTouchLocation:(CGPoint)touchLocation velocity:(CGPoint)velocity;
-(void)beginPresentationWithTouchLocation:(CGPoint)touchLocation;
-(id)cellAtTouchLocation:(CGPoint)touchLocation;
-(BOOL)isPresentingControllerTransitioning;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_reloadVolumePressBanditPreference;
-(void)bannerTargetManager:(id)manager didRemoveTarget:(id)target;
-(void)bannerTargetManager:(id)manager didAddTarget:(id)target;
-(id)newBannerViewForContext:(id)context;
-(id)dequeueNextBannerItemForTarget:(id)target;
-(id)peekNextBannerItemForTarget:(id)target;
-(BOOL)_shouldAddBannerItem:(id)item;
-(void)bannerItemWasTapped:(id)tapped;
-(void)_scheduleRealerts:(id)realerts;
-(void)_killRealerts:(id)realerts;
-(void)_realertTimerFired:(id)fired;
-(void)_playSoundForBulletinIfPossible:(id)bulletinIfPossible;
-(void)_showTestBulletin;
-(id)listItemAtIndexPath:(id)indexPath;
-(unsigned)count;
-(void)noteListViewReadyForModelUpdate;
-(void)listView:(id)view cellDidEndScrolling:(id)cell;
-(void)listView:(id)view cellDidBeginScrolling:(id)cell;
-(void)listViewDidEndScrolling:(id)listView;
-(void)listViewDidBeginScrolling:(id)listView;
-(id)lockScreenScrollView;
-(void)noteUnlockActionChanged:(id)changed;
-(void)_dismissBulletinsForActionContext:(id)actionContext;
-(void)handleLockScreenActionWithContext:(id)context;
-(void)lockScreenViewDidEndScrollingOnPage:(int)lockScreenView;
-(void)concealForChangeInMessagePrivacy;
-(void)revealForChangeInMessagePrivacy;
-(void)clearItemsForNotificationCenter;
-(void)_sortItemList:(id)list;
-(void)_updateModelAndViewForRemovalOfItem:(id)item;
-(void)_updateModelForRemovalOfItem:(id)item updateView:(BOOL)view;
-(void)_updateModelAndViewForReplacingItem:(id)replacingItem withNewItem:(id)newItem;
-(void)_updateModelAndViewForModificationOfItem:(id)item;
-(void)_updateModelAndViewForAdditionOfItem:(id)item;
-(void)_setDeferredModelUpdateBlock:(id)block;
-(void)updateCardItem:(id)item;
-(void)deactivateCardItem:(id)item;
-(void)activateCardItem:(id)item animated:(BOOL)animated;
-(void)_activateOrUpdateCardItem:(id)item animated:(BOOL)animated;
-(id)pendOrDeactivateAlertItems;
-(void)deactivateAlertItem:(id)item animated:(BOOL)animated;
-(BOOL)activateAlertItem:(id)item animated:(BOOL)animated;
-(void)turnOnScreenIfNecessaryForItem:(id)item;
-(BOOL)shouldPlaySoundForItem:(id)item;
-(BOOL)shouldTreatItemAsInert:(id)inert;
-(void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
-(void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
-(void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
-(id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
-(id)observer:(id)observer multipleThumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer modifyBulletin:(id)bulletin;
-(id)_newItemForBulletin:(id)bulletin shouldPlayLightsAndSirens:(BOOL)sirens;
-(void)_removeCachedBannerForBulletinID:(id)bulletinID;
-(BOOL)_shouldCacheBannerForBulletin:(id)bulletin;
-(void)_addItem:(id)item forBulletin:(id)bulletin playLightsAndSirens:(BOOL)sirens withReply:(id)reply;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed playLightsAndSirens:(BOOL)sirens withReply:(id)reply;
-(void)killBulletinSounds;
-(id)_listItemContainingCardItem:(id)item;
-(id)_listItemContainingSystemAlert:(id)alert;
-(id)_listItemContainingBulletinID:(id)anId;
-(id)_coalescableListItemForNewBulletin:(id)newBulletin;
-(BOOL)dismissReadNotifications;
-(BOOL)hasMissedUnreadNotifications;
-(void)setIsOnscreen:(BOOL)onscreen;
-(void)setInScreenOffMode:(BOOL)screenOffMode;
-(void)_hardwareButtonPressed:(id)pressed;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(void)_presentFullscreenBulletinAlertIfNeeded;
-(id)_firstItemWantingFullscreenPresentation;
-(void)_addBounceAnimator;
-(void)dealloc;
-(void)prepareForTeardown;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end


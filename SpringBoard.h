/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "UIApplicationDelegate.h"
#import "MCProfileConnectionObserver.h"
#import "SBPowerDownControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBCardItemsController, BBDataProviderConnection, SBPowerDownController, NSTimer, UIWindow, NSDate, SBUIController, NSHashTable, NSObject, NSNumberFormatter, NSMutableSet, NSMutableArray, NSSet, SBApplication;
@protocol OS_dispatch_source, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SpringBoard : XXUnknownSuperclass <SBPowerDownControllerDelegate, MCProfileConnectionObserver, UIApplicationDelegate> {
	SBUIController* _uiController;
	NSTimer* _menuButtonTimer;
	NSTimer* _lockButtonTimer;
	double _headsetButtonDownTime;
	IOHIDEventRef _headsetDownEvent;
	int _headsetClickCount;
	int _ringerSwitchState;
	unsigned _headsetButtonClickCount : 8;
	unsigned _menuButtonClickCount : 8;
	unsigned _screenWasDimOnMenuDown : 1;
	unsigned _screenshotWasTaken : 1;
	unsigned _dontLockOnNextLockUp : 1;
	unsigned _poweringDown : 1;
	unsigned _headsetDownDelayedActionPerformed : 1;
	unsigned _isSeekingInMedia : 1;
	unsigned _ignoringCurrentLockButtonPress : 1;
	int _statusBarOrientationOverride;
	int _mediaSeekDirection;
	unsigned _springBoardRequestsAccelerometerEvents;
	int _activeInterfaceOrientation;
	NSMutableSet* _activeInterfaceOrientationObservers;
	NSMutableArray* _activeInterfaceOrientationOverrideStack;
	BOOL _wantsOrientationEvents;
	int _notifyDontAnimateREOToken;
	int _notifyDontAllowMediaHUDToken;
	BOOL _expectsFaceContact;
	BOOL _expectsFaceContactInLandscape;
	BOOL _proximityEventsEnabled;
	BOOL _smartCoverClosed;
	BOOL _keybagRefetchTransactionIsActive;
	BOOL _menuButtonDown;
	NSSet* _restrictionDisabledApplications;
	SBApplication* _nowRecordingApp;
	SBApplication* _menuButtonInterceptApp;
	BOOL _menuButtonInterceptAppEnabledForever;
	NSMutableArray* _disableNowPlayingHUDAssertionBundleIds;
	NSMutableArray* _appsRegisteredForVolumeEvents;
	NSMutableArray* _appsRegisteredForLockButtonEvents;
	SBApplication* _lastLockButtonEventRecipient;
	NSNumberFormatter* _decimalFormatter;
	NSNumberFormatter* _percentFormatter;
	NSTimer* _midnightTimer;
	NSDate* _midnightFireDate;
	opaque_pthread_t* _backgroundMIGServerThread;
	opaque_pthread_t* _iconGenerationMIGServerThread;
	NSObject<OS_dispatch_source>* _memoryPressureSource;
	unsigned _memoryPressureStatus;
	NSMutableArray* _blocksAwaitingAvailableMemory;
	BBDataProviderConnection* _bulletinBoardConnection;
	NSObject<OS_dispatch_queue>* _bulletinBoardQueue;
	SBCardItemsController* _cardItemsController;
	CFBooleanRef _hasCameraCapability;
	CFBooleanRef _hasCameraRestriction;
	CFBooleanRef _shouldDelaySleepForHeadsetClick;
	NSHashTable* _volumePressBandits;
	unsigned long long _menuButtonHoldStartTime;
	double _menuButtonHoldAbsoluteStartTime;
	unsigned long long _menuButtonDownEventTimeStamp;
	NSMutableArray* _menuButtonUpBlocks;
	NSMutableArray* _menuButtonUpHandledBlocks;
	BOOL _didPlayLockSound;
	BOOL _volumeButtonsHavePrecedence;
	NSHashTable* _disableActiveOrientationChangeAssertions;
	BOOL _hasFinishedLaunching;
	BOOL _typingActive;
	NSMutableArray* _nowLocatingApps;
	int _nowPlayingProcessPID;
	SBPowerDownController* _powerDownController;
	NSTimer* _daylightSavingsTimer;
}
@property(retain, nonatomic) UIWindow* window;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSTimer* daylightSavingsTimer;
@property(retain, nonatomic) SBPowerDownController* powerDownController;
@property(retain, nonatomic) NSMutableArray* nowLocatingApps;
@property(assign, nonatomic) int nowPlayingProcessPID;
@property(readonly, retain, nonatomic) SBApplication* leastRecentlyForegroundLocatingApp;
@property(assign, nonatomic, getter=isTypingActive) BOOL typingActive;
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue>* bulletinBoardQueue;
@property(readonly, assign, nonatomic) BBDataProviderConnection* bulletinBoardConnection;
+(void)preFrontBoardInitializationHook;
+(BOOL)shouldFixMainThreadPriority;
-(void)performAfterMenuButtonUpIsHandledUsingBlock:(id)block;
-(void)performWhenMenuButtonIsUpUsingBlock:(id)block;
-(BOOL)hasDisableActiveInterfaceOrientationChangeAssertions;
-(void)removeDisableActiveInterfaceOrientationChangeAssertion:(id)assertion;
-(void)addDisableActiveInterfaceOrientationChangeAssertion:(id)assertion;
-(void)_sendBanditsVolumeDecreased;
-(void)_sendBanditsVolumeIncreased;
-(void)removeVolumePressBandit:(id)bandit;
-(void)addVolumePressBandit:(id)bandit;
-(BOOL)_hasVolumeBandits;
-(void)noteKeybagRefetchTransactionIsActive:(BOOL)active;
-(BOOL)isKeybagRefetchTransactionActive;
-(BOOL)underMemoryPressure;
-(void)_setStatusBarShowsProgress:(BOOL)progress;
-(void)_accessibilityDeactivationAnimationWillBegin;
-(double)_accessibilityDeactivationAnimationStartDelay;
-(void)_accessibilityActivationAnimationWillBegin;
-(double)_accessibilityActivationAnimationStartDelay;
-(BOOL)_accessibilityObjectWithinProximity;
-(BOOL)_accessibilityIsSystemGestureActive;
-(void)_accessibilitySetSystemGesturesDisabledByAccessibility:(BOOL)accessibility;
-(BOOL)_accessibilitySystemGesturesDisabledByAccessibility;
-(BOOL)_accessibilityShouldAllowIconLaunch;
-(BOOL)_accessibilityShouldAllowAppLaunch;
-(id)_accessibilityRunningApplications;
-(id)_accessibilityTopDisplay;
-(id)_accessibilityFrontMostApplication;
-(id)formattedPercentStringForNumber:(id)number;
-(id)formattedDecimalStringForNumber:(id)number;
-(void)_deactivateReachability;
-(void)_setReachabilitySupported:(BOOL)supported;
-(void)setSuspensionAnimationDelay:(double)delay;
-(void)setNowPlayingInfo:(id)info forProcessWithPID:(int)pid;
-(BOOL)isNowPlayingAppPlaying;
-(void)nowLocatingAppDidEnterForeground:(id)nowLocatingApp;
-(void)removeNowLocatingApp:(id)app;
-(void)addNowLocatingApp:(id)app;
-(id)nowRecordingApp;
-(BOOL)isMusicPlayerInNowPlayingView;
-(void)_nowPlayingAppDidChangeNotification:(id)_nowPlayingApp;
-(BOOL)hasFinishedLaunching;
-(void)tearDown;
-(void)_tearDownNow;
-(BOOL)launchApplicationWithIdentifier:(id)identifier suspended:(BOOL)suspended;
-(void)launchMusicPlayerSuspended;
-(int)alertInterfaceOrientation;
-(BOOL)isLocked;
-(BOOL)canShowAlerts;
-(void)setHasMiniAlerts:(BOOL)alerts;
-(void)willDismissMiniAlert;
-(void)willDisplayMiniAlert;
-(void)didDismissMiniAlert;
-(void)didDismissActionSheet;
-(void)frontDisplayDidChange:(id)frontDisplay;
-(void)_setAmbiguousControlCenterActivationMargin:(float)margin;
-(void)updateOrientationDetectionSettings;
-(void)updateProximitySettings;
-(void)setExpectsFaceContact:(BOOL)contact;
-(void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
-(BOOL)expectsFaceContactInLandscape;
-(BOOL)expectsFaceContact;
-(void)setProximityEventsEnabled:(BOOL)enabled;
-(BOOL)proximityEventsEnabled;
-(void)setSystemVolumeHUDEnabled:(BOOL)enabled forAudioCategory:(id)audioCategory;
-(double)windowRotationDuration;
-(BOOL)_alertWindowShouldRotate;
-(id)displayIDForURLScheme:(id)urlscheme isPublic:(BOOL)aPublic;
-(BOOL)homeScreenSupportsRotation;
-(BOOL)homeScreenRotationStyleWantsUIKitRotation;
-(int)homeScreenRotationStyle;
-(void)_removeDefaultInterfaceOrientatationOverride;
-(void)_overrideDefaultInterfaceOrientationWithOrientation:(int)orientation;
-(int)statusBarOrientation;
-(void)reportStatusBarOrientationAs:(int)as;
-(int)interfaceOrientationForCurrentDeviceOrientation;
-(int)_currentNonFlatDeviceOrientation;
-(BOOL)supportsPortraitUpsideDownOrientation;
-(void)updateNativeOrientationAndMirroredDisplays:(BOOL)displays;
-(void)updateNativeOrientation;
-(void)setWantsOrientationEvents:(BOOL)events;
-(BOOL)_statusBarOrientationFollowsWindow:(id)window;
-(int)_frontMostAppOrientation;
-(void)_removeTransientActiveInterfaceOrientationOverrideForReason:(id)reason;
-(void)popTransientActiveInterfaceOrientationForReason:(id)reason;
-(void)pushTransientActiveInterfaceOrientation:(int)orientation forReason:(id)reason;
-(int)activeInterfaceOrientationWithoutConsideringAlerts;
-(int)activeInterfaceOrientation;
-(void)removeActiveOrientationObserver:(id)observer;
-(void)addActiveOrientationObserver:(id)observer;
-(void)noteAlertView:(id)view willChangeInterfaceOrientation:(int)orientation duration:(double)duration;
-(void)noteInterfaceOrientationChanged:(int)changed duration:(float)duration updateMirroredDisplays:(BOOL)displays force:(BOOL)force;
-(void)noteInterfaceOrientationChanged:(int)changed duration:(float)duration updateMirroredDisplays:(BOOL)displays;
-(void)noteInterfaceOrientationChanged:(int)changed duration:(float)duration;
-(void)noteInterfaceOrientationChanged:(int)changed force:(BOOL)force;
-(void)noteInterfaceOrientationChanged:(int)changed;
-(void)updateMirroredDisplayOrientation;
-(void)noteSubstantialTransitionOccured;
-(void)didReceiveMemoryWarning;
-(void)lockDevice:(GSEventRef)device;
-(void)updateRejectedInputSettingsTriggeredByRouteChangeToReceiverNotification:(BOOL)receiverNotification;
-(void)updateRejectedInputSettings;
-(void)updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing;
-(void)_updateRejectedInputSettingsForInCallState:(BOOL)callState isOutgoing:(BOOL)outgoing triggeredbyRouteWillChangeToReceiverNotification:(BOOL)triggeredbyRoute;
-(void)_caseLatchWantsToAttemptLock;
-(void)noteCaseHardwarePresent;
-(void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)attemptUnlock;
-(BOOL)allowCaseLatchLockAndUnlock;
-(BOOL)caseIsEnabledAndLatched;
-(BOOL)smartCoverIsClosed;
-(void)_enqueueWorkspaceEvent:(id)event withName:(id)name ifSatisfiesCondition:(id)condition cancelingEventsWithNames:(id)names;
-(void)_smartCoverDidClose:(IOHIDEventRef)_smartCover;
-(void)_smartCoverDidOpen:(IOHIDEventRef)_smartCover;
-(void)_proximityChanged:(id)changed;
-(void)resetIdleTimerAndUndim;
-(void)lockAfterCall;
-(void)noteBacklightFadeFinished;
-(void)noteBacklightLevelChanged;
-(void)noteBacklightControllerUndimming:(id)undimming;
-(void)_adjustSignificantTimersAfterSleep;
-(void)_adjustDaylightSavingsTimerAfterSleep;
-(void)_daylightSavingsTimeChanged;
-(void)setUpDaylightSavingsTimer;
-(void)_adjustMidnightTimerAfterSleep;
-(void)_postSpringBoardSignificantTimeChangedNotificationForReason:(id)reason;
-(void)_midnightPassed;
-(void)setupMidnightTimer;
-(BOOL)_handlePhysicalButtonEvent:(id)event;
-(void)volumeChanged:(GSEventRef)changed;
-(BOOL)_volumeChanged:(IOHIDEventRef)changed;
-(id)appsRegisteredForLockButtonEvents;
-(void)setAppRegisteredForLockButtonEvents:(id)lockButtonEvents isActive:(BOOL)active;
-(id)appsRegisteredForVolumeEvents;
-(void)setAppRegisteredForVolumeEvents:(id)volumeEvents isActive:(BOOL)active;
-(void)setWantsVolumeButtonEvents:(BOOL)events;
-(BOOL)menuButtonInterceptAppEnabledForever;
-(id)menuButtonInterceptApp;
-(void)setMenuButtonInterceptApp:(id)app forever:(BOOL)forever;
-(void)_relockUIIfNecessaryAfterTelephonyURLFailed;
-(void)_openURLCore:(id)core display:(id)display animating:(BOOL)animating sender:(id)sender activationSettings:(id)settings withResult:(id)result;
-(void)_applicationOpenURL:(id)url withApplication:(id)application sender:(id)sender publicURLsOnly:(BOOL)only animating:(BOOL)animating activationSettings:(id)settings withResult:(id)result;
-(void)applicationOpenURL:(id)url withApplication:(id)application sender:(id)sender publicURLsOnly:(BOOL)only animating:(BOOL)animating needsPermission:(BOOL)permission activationSettings:(id)settings withResult:(id)result;
-(void)handleDocumentsAndDataURL:(id)url completion:(id)completion;
-(void)applicationOpenURL:(id)url;
-(BOOL)_URLIsHandledBySpringBoard:(id)board;
-(BOOL)_requestPermissionToOpenURL:(id)openURL withApplication:(id)application sender:(id)sender;
-(void)showAlertForUnhandledURL:(id)unhandledURL error:(int)error;
-(int)currentHomescreenStatusBarStyleWithoutConsideringAlerts;
-(int)currentHomescreenStatusBarStyle;
-(void)showSpringBoardStatusBar;
-(void)hideSpringBoardStatusBar;
-(BOOL)isSpringBoardStatusBarHidden;
-(int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
-(BOOL)handleDoubleHeightStatusBarTap:(int)tap;
-(void)_updateRingerState:(int)state withVisuals:(BOOL)visuals updatePreferenceRegister:(BOOL)aRegister;
-(void)ringerChanged:(int)changed;
-(void)_ringerChanged:(IOHIDEventRef)changed;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)profileConnection userInfo:(id)info;
-(void)pinPolicyChanged;
-(void)localeChanged;
-(void)_localeChanged;
-(void)debuggingAndDemoPrefsWereChanged;
-(void)loadDebuggingAndDemoPrefs;
-(BOOL)isBundleIdentifierRestrictionDisabled:(id)disabled;
-(void)headsetAvailabilityChanged:(GSEventRef)changed;
-(void)headsetButtonUp:(GSEventRef)up;
-(void)_headsetButtonUp:(IOHIDEventRef)up;
-(void)headsetButtonDown:(GSEventRef)down;
-(void)_headsetButtonDown:(IOHIDEventRef)down;
-(void)_setDeferredHeadsetButtonDownEvent:(IOHIDEventRef)event;
-(void)_imagesMounted;
-(void)_iapExtendedModeReset;
-(void)_iapServerConnectionDiedNotification:(id)notification;
-(void)_performDelayedHeadsetClickTimeout;
-(void)lockButtonUp:(GSEventRef)up;
-(void)_lockButtonUp:(IOHIDEventRef)up fromSource:(int)source;
-(void)_clearPreheatedLockAudio;
-(void)_relaunchSpringBoardNow;
-(void)relaunchSpringBoard;
-(void)noteBuddyNoLongerPreparingForLanguageChange;
-(BOOL)relaunchingForSetupLanguageChange;
-(void)powerDownCanceled:(id)canceled;
-(void)dismissPowerDownAlertWithCompletionHandler:(id)completionHandler;
-(void)powerDownRequested:(id)requested;
-(BOOL)isPowerDownAlertFrontmost;
-(BOOL)isPoweringDown;
-(void)powerDown;
-(void)reboot;
-(void)_rebootNow;
-(void)_powerDownNow;
-(void)extendButtonTimersForWake;
-(void)lockButtonWasHeld;
-(void)lockButtonDown:(GSEventRef)down;
-(void)_lockButtonDown:(IOHIDEventRef)down fromSource:(int)source;
-(void)_handleMenuButtonEvent;
-(void)mediaKeyUp:(GSEventRef)up;
-(void)mediaKeyDown:(GSEventRef)down;
-(void)_startSeekWithDirection:(id)direction;
-(void)_keyboardAvailabilityChanged;
-(void)menuButtonUp:(GSEventRef)up;
-(void)_menuButtonUp:(IOHIDEventRef)up;
-(void)_logMenuButtonHoldTime;
-(BOOL)_isDim;
-(void)menuButtonDown:(GSEventRef)down;
-(void)_menuButtonDown:(IOHIDEventRef)down;
-(id)_keyWindowForScreen:(id)screen;
-(void)_handleHIDEvent:(IOHIDEventRef)event;
-(void)_logReliabilityInfoForEvent:(IOHIDEventRef)event;
-(BOOL)__handleHIDEvent:(IOHIDEventRef)event;
-(double)_menuHoldTime;
-(void)_menuButtonWasHeld;
-(void)clearMenuButtonTimer;
-(void)cancelMenuButtonRequests;
-(void)_setLockButtonTimer:(id)timer;
-(void)_setMenuButtonTimer:(id)timer;
-(void)handleMenuDoubleTap;
-(BOOL)isMenuDoubleTapAllowed;
-(void)setAppDisabledNowPlayingHUD:(BOOL)hud bundleIdentifier:(id)identifier;
-(BOOL)canShowLockScreenCameraGrabber;
-(BOOL)lockScreenCameraSupported;
-(BOOL)canShowLockScreenHUDControls;
-(BOOL)iapIsInExtendedMode;
-(BOOL)shouldRunFieldTestScript;
-(void)batteryStatusDidChange:(id)batteryStatus;
-(void)significantTimeChange;
-(void)_significantTimeChange;
-(void)runFieldTestScript;
-(void)_testPhoneAlerts;
-(void)_lockdownActivationChanged:(id)changed;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)_migrateSpringBoardPreferencesToFrontBoardPreferencesIfNecessary;
-(void)_reloadDemoAndDebuggingDefaultsAndCapabilities;
-(void)_effectiveSettingsDidChange;
-(void)showCellDataActivationFailureAlert:(id)alert reason:(id)reason forMMS:(BOOL)mms;
-(void)wipeDeviceNow;
-(void)_rotateView:(id)view toOrientation:(int)orientation;
-(void)requestDeviceUnlock;
-(void)languageChanged;
-(BOOL)restartedForLanguageChangeWhileUnlocked;
-(id)_settingLanguageStringForNewLanguage;
-(void)clearLaunchedAfterLanguageRestart;
-(BOOL)launchedAfterLanguageRestart;
-(void)appleIconViewRemoved;
-(void)_revealSpotlight;
-(void)_recordingStateChanged:(id)changed;
-(void)_mediaServerConnectionDied:(id)died;
-(void)_registerForAVSystemControllerNotifications;
-(void)_unregisterForAVSystemControllerNotifications;
-(void)_updateVolumeAndPowerButtonPrioritiesForNotification:(id)notification;
-(void)_updateVolumeAndPowerButtonPriorities;
-(void)_initializeVolumeAndPowerButtonPriorities;
-(void)_applyVolumeAndPowerButtonPriorities:(BOOL)priorities;
-(BOOL)_computeVolumeButtonsHavePrecedence;
-(BOOL)_shouldHandleVolumeAndPowerButtonPriorities;
-(void)_updateHomeScreenPresenceNotification:(id)notification;
-(void)applicationDidFinishLaunching:(id)application;
-(void)_performDeferredLaunchWork;
-(void)_startBulletinBoardServer;
-(void)updateStackshotSettings;
-(void)handleKeyHIDEvent:(IOHIDEventRef)event;
-(BOOL)_shouldSwallowGSEvent:(GSEventRef)event;
-(BOOL)_shouldSwallowHIDEvent:(IOHIDEventRef)event;
-(BOOL)application:(id)application handleOpenURL:(id)url;
-(BOOL)application:(id)application canOpenURL:(id)url;
-(BOOL)applicationIsAliveForSystemWatchdog:(id)systemWatchdog;
-(void)writeLogFile;
-(void)_createLogFile;
-(void)handleSignal:(int)signal;
-(id)init;
-(void)setNextAssistantRecognitionStrings:(id)strings;
-(id)setNextVoiceRecognitionAudioInputPaths:(id)paths;
-(void)failedTest:(id)test withResults:(id)results;
-(void)finishedTest:(id)test extraResults:(id)results waitForNotification:(id)notification withTeardownBlock:(id)teardownBlock;
-(void)startedTest:(id)test;
-(void)_handleApplicationExit:(id)exit;
-(BOOL)_shouldPendAlertsForTest:(id)test;
-(void)_runControlCenterBringupTest;
-(void)_runControlCenterDismissTest;
-(void)_runNotificationCenterWidgetLaunchTest:(id)test;
-(void)_runScrollNotificationCenterTest:(id)test;
-(void)_runNotificationCenterBringupTest;
-(void)_runNotificationCenterDismissTest;
-(void)_runAppSwitcherBringupTest;
-(void)_runAppSwitcherDismissTest;
-(void)_runScrollAppSwitcherTest:(id)test;
-(void)_runDisplayAlertTest:(id)test;
-(void)_runScrollIconListTest;
-(void)runRotationTest:(int)test;
-(void)endLaunchTest;
-(void)startResumeTestNamed:(id)named options:(id)options;
-(void)startLaunchTestNamed:(id)named options:(id)options;
-(void)_cleanUpLaunchTestState;
-(void)_retryLaunchTestWithOptions:(id)options;
-(void)_workspaceTransactionCompleted:(id)completed;
-(void)_unscatterWillBegin:(id)_unscatter;
-(void)_runUnlockTest;
-(BOOL)runTest:(id)test options:(id)options;
-(void)_alertSheetStackChanged;
@end


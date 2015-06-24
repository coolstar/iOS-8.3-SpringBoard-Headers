/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MPAVRoutingControllerDelegate.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSTimer, NSDictionary, MPAVRoutingController, SBApplication;

__attribute__((visibility("hidden")))
@interface SBMediaController : XXUnknownSuperclass <MPAVRoutingControllerDelegate> {
	int _manualVolumeChangeCount;
	NSDictionary* _nowPlayingInfo;
	float _pendingVolumeChange;
	NSTimer* _volumeCommitTimer;
	BOOL _debounceVolumeRepeat;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _lastNowPlayingAppPID;
	BOOL _lastNowPlayingAppIsPlaying;
	BOOL _suppressHUD;
	BOOL _ringerMuted;
	BOOL _screenSharing;
	BOOL _screenSharingSetsStatusBarOverride;
	NSTimer* _screenSharingStatusBarOverrideTimer;
	NSTimer* _videoOutStatusBarOverrideTimer;
	MPAVRoutingController* _routingController;
	int _nowPlayingProcessPID;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign) BOOL suppressHUD;
@property(assign, nonatomic) int nowPlayingProcessPID;
@property(readonly, assign, nonatomic) SBApplication* nowPlayingApplication;
@property(assign, nonatomic, getter=isRingerMuted) BOOL ringerMuted;
+(void)sendResetPlaybackTimeoutCommand;
+(BOOL)applicationCanBeConsideredNowPlaying:(id)playing;
+(id)sharedInstance;
-(void)_commitVolumeChange:(id)change;
-(void)_cancelPendingVolumeChange;
-(void)_nowPlayingAppIsPlayingDidChange;
-(void)_nowPlayingPIDChanged;
-(void)_nowPlayingInfoChanged;
-(void)_systemMuteChanged:(id)changed;
-(void)_softMuteChanged:(id)changed;
-(void)_systemVolumeChanged:(id)changed;
-(void)_externalScreenChanged:(id)changed;
-(void)_updateAVRoutes;
-(void)_serverConnectionDied:(id)died;
-(void)_unregisterForNotifications;
-(void)_registerForNotifications;
-(id)nameOfPickedRoute;
-(BOOL)isScreenSharing;
-(BOOL)routeOtherThanHandsetIsAvailable;
-(BOOL)volumeControlIsAvailable;
-(BOOL)handsetRouteIsSelected;
-(void)routingControllerAvailableRoutesDidChange:(id)routingControllerAvailableRoutes;
-(void)handleVolumeEvent:(IOHIDEventRef)event;
-(void)cancelVolumeEvent;
-(void)decreaseVolume;
-(void)increaseVolume;
-(float)_calcButtonRepeatDelay;
-(void)_changeVolumeBy:(float)by;
-(BOOL)lastSavedRingerMutedState;
-(BOOL)muted;
-(void)setVolume:(float)volume;
-(float)volume;
-(BOOL)setPlaybackSpeed:(int)speed;
-(BOOL)toggleShuffle;
-(BOOL)toggleRepeat;
-(BOOL)skipFifteenSeconds:(int)seconds;
-(BOOL)stop;
-(BOOL)togglePlayPause;
-(BOOL)pause;
-(BOOL)play;
-(BOOL)endSeek:(int)seek;
-(BOOL)beginSeek:(int)seek;
-(BOOL)changeTrack:(int)track;
-(BOOL)_sendMediaCommand:(unsigned)command;
-(void)_startVideoOutStatusBarStyleOverride;
-(void)_clearVideoOutStatusBarStyleOverride;
-(void)updateScreenSharingStatusBarStyleOverride;
-(void)updateScreenSharingStatusBarStyleOverrideSuppressionPreference;
-(void)_clearScreenSharingStatusBarStyleOverride;
-(BOOL)addTrackToWishList;
-(BOOL)likeTrack;
-(BOOL)banTrack;
-(BOOL)isPaused;
-(BOOL)isPlaying;
-(BOOL)isLastTrack;
-(BOOL)isFirstTrack;
-(BOOL)hasTrack;
-(void)setNowPlayingInfo:(id)info;
-(id)_nowPlayingInfo;
-(void)dealloc;
-(id)init;
@end


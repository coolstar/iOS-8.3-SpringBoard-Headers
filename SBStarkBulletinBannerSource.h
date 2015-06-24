/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkBannerSource.h"
#import "SBVolumePressBandit.h"
#import "SpringBoard-Structs.h"
#import "BBObserverDelegate.h"

@class NSString, BBObserver;

__attribute__((visibility("hidden")))
@interface SBStarkBulletinBannerSource : SBStarkBannerSource <BBObserverDelegate, SBVolumePressBandit> {
	BBObserver* _bbObserver;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)_reloadVolumePressBanditPreference;
-(void)observer:(id)observer noteServerReceivedResponseForBulletin:(id)bulletin;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer modifyBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)_showTestBanner:(id)banner;
-(void)dealloc;
-(id)initWithAllowedTargetIdentifier:(void*)allowedTargetIdentifier;
@end


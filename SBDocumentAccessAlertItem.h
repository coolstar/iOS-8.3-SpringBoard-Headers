/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL, NSTimer, NSFileCoordinator;

__attribute__((visibility("hidden")))
@interface SBDocumentAccessAlertItem : XXUnknownSuperclass {
	BOOL _downloadMessage;
	NSURL* _url;
	NSFileCoordinator* _fileCoordinator;
	NSTimer* _timer;
	id _subscriber;
}
@property(retain, nonatomic) id subscriber;
@property(assign, nonatomic) BOOL downloadMessage;
@property(retain, nonatomic) NSTimer* timer;
@property(readonly, retain, nonatomic) NSFileCoordinator* fileCoordinator;
@property(readonly, copy, nonatomic) NSURL* url;
-(void)_activateAlertItem:(id)item;
-(void)scheduleToShowWithTimeInterval:(double)timeInterval;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)dealloc;
-(id)initWithURL:(id)url fileCoordinator:(id)coordinator;
-(id)init;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBApplication;

__attribute__((visibility("hidden")))
@interface SBProxyRemoteView : XXUnknownSuperclass {
	id _delegate;
	SBApplication* _app;
	NSString* _remoteViewIdentifier;
	BOOL _remoteViewOpaque;
	NSString* _hostRequester;
}
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) BOOL remoteViewOpaque;
@property(retain, nonatomic) NSString* remoteViewIdentifier;
+(Class)layerClass;
-(void)disconnect;
-(void)noteConnectionLost;
-(void)_setIsConnected:(BOOL)connected;
-(void)connectToContextID:(unsigned)contextID forIdentifier:(id)identifier application:(id)application;
-(void)didMoveToSuperview;
-(void)dealloc;
-(id)init;
@end


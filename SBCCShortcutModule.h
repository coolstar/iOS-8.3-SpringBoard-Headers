/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBCCButtonModule.h"

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface SBCCShortcutModule : SBCCButtonModule {
	NSString* _displayID;
	NSURL* _url;
}
@property(copy, nonatomic, setter=setURL:) NSURL* url;
@property(copy, nonatomic) NSString* displayID;
+(id)identifier;
-(void)activateAppWithDisplayID:(id)displayID url:(id)url;
-(void)activateApp;
-(BOOL)_toggleState;
-(BOOL)isRestricted;
-(id)aggdKey;
-(id)displayName;
-(id)identifier;
-(void)dealloc;
@end


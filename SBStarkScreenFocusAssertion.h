/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIWindow, BSZeroingWeakReference;

__attribute__((visibility("hidden")))
@interface SBStarkScreenFocusAssertion : XXUnknownSuperclass {
	NSString* _name;
	int _type;
	float _priority;
	BSZeroingWeakReference* _weak_window;
	NSString* _bundleID;
	int _pid;
}
@property(readonly, assign, nonatomic) int pid;
@property(readonly, copy, nonatomic) NSString* bundleID;
@property(readonly, assign, nonatomic) UIWindow* window;
@property(readonly, assign, nonatomic) float priority;
@property(readonly, assign, nonatomic) int type;
@property(readonly, copy, nonatomic) NSString* name;
-(id)description;
-(void)dealloc;
-(id)initWithName:(id)name type:(int)type priority:(float)priority window:(id)window application:(id)application pid:(int)pid;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol SBAppSwitcherPeopleDataSourceConsumer;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleAbstractDataSource : XXUnknownSuperclass {
	id<SBAppSwitcherPeopleDataSourceConsumer> _consumer;
}
@property(assign, nonatomic) id<SBAppSwitcherPeopleDataSourceConsumer> consumer;
-(BOOL)hasiMessageCapability;
-(BOOL)hasSMSCapability;
-(BOOL)hasCellularTelephonyCapability;
-(id)_contactActionsForPerson:(void*)person;
-(id)_contactActionOfType:(unsigned)type forPerson:(void*)person;
-(id)_callActionsFromPerson:(void*)person;
-(void)updateIfNecessary;
@end


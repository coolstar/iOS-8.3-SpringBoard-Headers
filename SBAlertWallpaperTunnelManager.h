/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertManagerObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBAlertManager, NSMutableSet, NSMapTable;

__attribute__((visibility("hidden")))
@interface SBAlertWallpaperTunnelManager : XXUnknownSuperclass <SBAlertManagerObserver> {
	SBAlertManager* _alertManager;
	NSMapTable* _hiderToHideeMap;
	NSMutableSet* _hiddenAlerts;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(void)registerAlertManager:(id)manager forScreen:(id)screen;
+(id)sharedInstance;
-(id)dumpTunnelState;
-(void)alertManager:(id)manager didDeactivateAlert:(id)alert top:(BOOL)top;
-(void)alertManager:(id)manager willActivateAlert:(id)alert overAlerts:(id)alerts;
-(void)_showAlert:(id)alert;
-(void)_hideAlert:(id)alert;
-(void)_adjustHiddenAlerts;
-(void)_stopHidingAlertsForAlert:(id)alert;
-(void)_hideAlerts:(id)alerts onBehalfOfAlert:(id)alert;
-(void)_setAlertManager:(id)manager;
-(void)popTunnelToWallpaperForAlert:(id)alert;
-(void)pushTunnelToWallpaperForAlert:(id)alert;
-(void)dealloc;
-(id)init;
@end

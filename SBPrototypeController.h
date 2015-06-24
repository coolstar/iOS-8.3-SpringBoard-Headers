/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "_UISettingsKeyObserver.h"
#import "SpringBoard-Structs.h"
#import "SBVolumePressBandit.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBRootSettings, PTSettingsController, UIWindow, NSArray;
@protocol SBTestRecipe;

__attribute__((visibility("hidden")))
@interface SBPrototypeController : XXUnknownSuperclass <SBVolumePressBandit, _UISettingsKeyObserver> {
	SBRootSettings* _rootSettings;
	UIWindow* _settingsWindow;
	PTSettingsController* _settingsController;
	NSArray* _testRecipeClassNames;
	id<SBTestRecipe> _activeTestRecipe;
	BOOL _showingSettings;
	BOOL _hasPreviousSettings;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<SBTestRecipe> activeTestRecipe;
+(id)sharedInstance;
+(void)migrateSettings;
+(void)reloadDefaults;
-(void)_updatePreventingLockover;
-(void)_configureForDefaults;
-(void)_changeActiveTestRecipeIfNecessary;
-(void)_tearDownSettingsWindow;
-(CGRect)_offscreenFrame;
-(void)_hideSettings;
-(void)_showSettings;
-(id)_testRecipeClassNames;
-(BOOL)_restorePreviousSettings;
-(BOOL)_hasPreviousSettings;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)showOrHide;
-(BOOL)isPrototypingEnabled;
-(BOOL)isShowingSettingsUI;
-(id)rootSettings;
-(void)dealloc;
-(id)init;
@end


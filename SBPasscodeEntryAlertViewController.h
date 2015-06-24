/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SBUIPasscodeLockViewDelegate.h"
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBPasscodeEntryAlertViewController : SBAlert <SBUIPasscodeLockViewDelegate> {
	BOOL _attemptingUnlock;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)_passcodeLockViewPasscodeEntered:(id)entered viaMesa:(BOOL)mesa;
-(void)passcodeLockViewCancelButtonPressed:(id)pressed;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)mesa;
-(void)passcodeLockViewPasscodeEntered:(id)entered;
-(void)passcodeLockViewPasscodeDidChange:(id)passcodeLockViewPasscode;
-(void)animatePasscodeViewsToVisible:(BOOL)visible completion:(id)completion;
-(unsigned)supportedInterfaceOrientations;
-(void)deactivate;
-(BOOL)hasTranslucentBackground;
-(id)alertDisplayViewWithSize:(CGSize)size;
@end

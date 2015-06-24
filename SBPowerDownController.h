/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlert.h"
#import "SBPowerDownViewDelegate.h"
#import "SpringBoard-Structs.h"

@class SBAlertView;
@protocol SBPowerDownControllerDelegate, SBPowerDownViewInterface;

__attribute__((visibility("hidden")))
@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate> {
	id _delegate;
	SBAlertView<SBPowerDownViewInterface>* _powerDownView;
	id _orderOutCompletion;
	BOOL _wasStatusBarHiddenAtActivation;
}
@property(assign, nonatomic) BOOL wasStatusBarHiddenAtActivation;
@property(copy, nonatomic) id orderOutCompletion;
@property(assign, nonatomic) id<SBPowerDownControllerDelegate> delegate;
-(void)_lockedOnTop;
-(void)_restoreIconListIfNecessary;
-(void)powerDownViewAnimateOutCompleted:(id)completed;
-(BOOL)powerDownViewShouldShowStatusBarWhenAnimatingOut:(id)powerDownView;
-(void)powerDownViewRequestPowerDown:(id)down;
-(void)powerDownViewRequestCancel:(id)cancel;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(double)autoLockTime;
-(void)activate;
-(BOOL)showsSpringBoardStatusBar;
-(BOOL)managesOwnStatusBarAtActivation;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(BOOL)hasTranslucentBackground;
-(void)cancel;
-(void)powerDown;
-(void)orderOutWithCompletion:(id)completion;
-(void)orderFront;
-(void)dealloc;
-(id)init;
@end


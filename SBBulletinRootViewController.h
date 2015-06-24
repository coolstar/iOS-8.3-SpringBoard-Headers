/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBBulletinRootView, SBBulletinWindowController, _SBBulletinRootViewControllerTransitionContext;

__attribute__((visibility("hidden")))
@interface SBBulletinRootViewController : XXUnknownSuperclass {
	SBBulletinRootView* _rootView;
	SBBulletinWindowController* _windowController;
	_SBBulletinRootViewControllerTransitionContext* _activeTransitionContext;
}
-(void)_getRotationContentSettings:(XXStruct_ykCi7C*)settings;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)wantsFullScreenLayout;
-(void)bulletinWindowControllerDismissViewControllerAnimated:(BOOL)animated completion:(id)completion;
-(void)bulletinWindowControllerPresentViewController:(id)controller animated:(BOOL)animated completion:(id)completion;
-(void)dealloc;
-(void)loadView;
-(id)initWithBulletinWindowController:(id)bulletinWindowController;
@end


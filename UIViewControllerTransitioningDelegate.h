/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol UIViewControllerTransitioningDelegate <NSObject>
@optional
-(id)presentationControllerForPresentedViewController:(id)presentedViewController presentingViewController:(id)controller sourceViewController:(id)controller3;
-(id)interactionControllerForDismissal:(id)dismissal;
-(id)interactionControllerForPresentation:(id)presentation;
-(id)animationControllerForDismissedController:(id)dismissedController;
-(id)animationControllerForPresentedController:(id)presentedController presentingController:(id)controller sourceController:(id)controller3;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"


@protocol UIGestureRecognizerDelegatePrivate <UIGestureRecognizerDelegate>
@optional
-(BOOL)_gestureRecognizer:(id)recognizer canBePreventedByGestureRecognizer:(id)recognizer2;
-(BOOL)_gestureRecognizer:(id)recognizer canPreventGestureRecognizer:(id)recognizer2;
-(BOOL)_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(BOOL)_gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;
-(BOOL)_gestureRecognizer:(id)recognizer shouldBeRequiredToFailByGestureRecognizer:(id)failByGestureRecognizer;
-(BOOL)_gestureRecognizer:(id)recognizer shouldRequireFailureOfGestureRecognizer:(id)gestureRecognizer;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"


@protocol _NCWidgetViewController_Service_IPC
-(void)__openTransactionForAppearanceCallWithState:(int)state withIdentifier:(id)identifier;
-(void)__performUpdateWithReplyHandler:(id)replyHandler;
-(void)__requestEncodedLayerTreeWithReplyHandler:(id)replyHandler;
-(void)__performOutstandingCompletionForRequestWithIdentifier:(id)identifier;
-(void)__performOutstandingAnimationsForRequestWithIdentifier:(id)identifier;
-(void)__viewWillTransitionToSize:(CGSize)__view requestIdentifier:(id)identifier;
-(void)__setWidgetIdentifier:(id)identifier;
@end


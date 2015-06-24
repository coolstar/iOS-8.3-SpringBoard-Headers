/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSUIRemoteAlertItemContentHostInterface.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface _SBRemoteAlertContentHostViewController : XXUnknownSuperclass <SBSUIRemoteAlertItemContentHostInterface> {
	id _delegate;
	NSString* _serviceClassName;
	BOOL _serviceHasSetPreferredContentSize;
}
@property(copy, nonatomic) NSString* serviceClassName;
@property(assign, nonatomic) id delegate;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)viewServiceDidTerminateWithError:(id)viewService;
-(void)_getPreferredContentSizeWithReplyBlock:(id)replyBlock;
-(id)description;
-(void)dealloc;
@end


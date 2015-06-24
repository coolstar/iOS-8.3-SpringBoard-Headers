/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FBWindowContextManagerObserver <NSObject>
@optional
-(void)windowContextManager:(id)manager didRepositionContext:(id)context from:(unsigned)from to:(unsigned)to;
-(void)windowContextManagerDidStopTrackingContexts:(id)windowContextManager;
-(void)windowContextManagerWillStartTrackingContexts:(id)windowContextManager;
@end


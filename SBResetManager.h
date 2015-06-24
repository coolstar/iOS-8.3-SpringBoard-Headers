/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PKPassLibrary, NSObject, NSLock;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SBResetManager : XXUnknownSuperclass {
	BOOL _threadRunning;
	NSLock* _lock;
	int _mode;
	NSLock* _progressLock;
	float _progress;
	BOOL _paymentCardsExist;
	PKPassLibrary* _passLibrary;
	XXStruct_qXnNTD* _paymentCardDeletionProgressStack;
	id _postCardDeletionHandler;
	NSObject<OS_dispatch_semaphore>* _resetThreadSemaphore;
}
+(id)sharedInstance;
-(void)_resetFinished;
-(void)_postResetEnded;
-(void)_resetThread;
-(void)passLibrary:(id)library removingPassesOfType:(unsigned)type didFinishWithSuccess:(BOOL)success;
-(void)passLibrary:(id)library removingPassesOfType:(unsigned)type didUpdateWithProgress:(double)progress;
-(void)performPaymentCardDeletionWithCompletion:(id)completion;
-(void)_beginReset:(id)reset;
-(void)beginReset;
-(float)progress;
-(void)_setProgress:(float)progress;
-(void)setMode:(int)mode;
-(void)dealloc;
-(id)init;
@end


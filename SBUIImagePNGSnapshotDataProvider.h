/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSnapshotDataProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImage, SBSnapshotDataProviderContext;

__attribute__((visibility("hidden")))
@interface SBUIImagePNGSnapshotDataProvider : XXUnknownSuperclass <SBSnapshotDataProvider> {
	UIImage* _image;
	SBSnapshotDataProviderContext* _context;
}
@property(readonly, retain, nonatomic) SBSnapshotDataProviderContext* context;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id)fetchData;
-(void)dealloc;
-(id)initWithUIImage:(id)uiimage context:(id)context;
@end


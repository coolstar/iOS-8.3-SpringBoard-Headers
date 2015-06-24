/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSnapshotDataProvider.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIScreen, SBSnapshotDataProviderContext;

__attribute__((visibility("hidden")))
@interface SBIOSurfacePNGSnapshotDataProvider : XXUnknownSuperclass <SBSnapshotDataProvider> {
	IOSurfaceRef _surface;
	SBSnapshotDataProviderContext* _context;
	BOOL _shouldRotate;
	UIScreen* _screen;
}
@property(readonly, retain, nonatomic) SBSnapshotDataProviderContext* context;
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(id)fetchData;
-(void)dealloc;
-(id)initWithIOSurfaceRef:(IOSurfaceRef)iosurfaceRef screen:(id)screen context:(id)context shouldRotate:(BOOL)rotate;
@end


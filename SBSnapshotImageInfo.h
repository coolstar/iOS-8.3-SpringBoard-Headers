/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBSnapshotImageInfo : XXUnknownSuperclass {
	BOOL _defaultPNG;
	NSString* _path;
	NSString* _downscaledPath;
	NSString* _sceneID;
	float _scale;
	int _launchingOrientation;
	int _originalOrientation;
	CGSize _size;
}
@property(assign, nonatomic) BOOL defaultPNG;
@property(assign, nonatomic) int originalOrientation;
@property(assign, nonatomic) int launchingOrientation;
@property(assign, nonatomic) float scale;
@property(assign, nonatomic) CGSize size;
@property(retain, nonatomic) NSString* sceneID;
@property(copy, nonatomic) NSString* downscaledPath;
@property(copy, nonatomic) NSString* path;
+(id)snapshotImageInfoWithPath:(id)path downscaledPath:(id)path2 launchingOrientation:(int)orientation originalOrientation:(int)orientation4 forSceneID:(id)sceneID size:(CGSize)size scale:(float)scale;
-(id)description;
-(id)_stringForInterfaceOrientation:(int)interfaceOrientation;
-(void)dealloc;
@end


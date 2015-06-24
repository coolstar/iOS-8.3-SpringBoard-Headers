/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface SBDefaultImageInfo : XXUnknownSuperclass {
	BOOL _hasSnapshot;
	BOOL _isDownscaled;
	int _launchingInterfaceOrientation;
	float _launchingScale;
	int _originalOrientation;
	int _currentOrientation;
	UIImage* _image;
	CGSize _launchingSize;
}
@property(assign, nonatomic) BOOL isDownscaled;
@property(retain, nonatomic) UIImage* image;
@property(assign, nonatomic) BOOL hasSnapshot;
@property(assign, nonatomic) int currentOrientation;
@property(assign, nonatomic) int originalOrientation;
@property(assign, nonatomic) float launchingScale;
@property(assign, nonatomic) CGSize launchingSize;
@property(assign, nonatomic) int launchingInterfaceOrientation;
-(id)description;
-(void)dealloc;
@end


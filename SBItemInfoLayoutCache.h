/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBItemInfoLayoutCache : XXUnknownSuperclass {
	float _cachedViewHeight;
	CGSize _referenceSize;
	int _layoutMode;
}
-(void)invalidateCache;
-(float)viewHeightWithReferenceSize:(CGSize)referenceSize layoutMode:(int)mode generateBlock:(id)block;
-(BOOL)_isLayoutValidWithReferenceSize:(CGSize)referenceSize layoutMode:(int)mode;
@end


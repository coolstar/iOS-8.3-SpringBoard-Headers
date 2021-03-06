/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

__attribute__((visibility("hidden")))
@interface SBHighlightView : XXUnknownSuperclass {
	UIImageView* _highlight;
	float _highlightAlpha;
	float _highlightHeight;
}
@property(readonly, assign, nonatomic) float highlightHeight;
@property(readonly, assign, nonatomic) float highlightAlpha;
+(id)_highlightImageWithHeight:(float)height alpha:(float)alpha;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame highlightAlpha:(float)alpha highlightHeight:(float)height;
@end


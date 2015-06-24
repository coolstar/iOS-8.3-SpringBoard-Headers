/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBGradientView.h"
#import "SpringBoard-Structs.h"

@class SBHighlightView, UIView, UIColor;

__attribute__((visibility("hidden")))
@interface SBNewsstandShelfView : SBGradientView {
	UIView* _tintView;
	float _tintAlpha;
	SBHighlightView* _highlightView;
	unsigned _shelfIndex;
}
@property(assign, nonatomic) unsigned shelfIndex;
@property(assign, nonatomic) float tintAlpha;
@property(retain, nonatomic) UIColor* tintColor;
-(void)layoutSubviews;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBIconView.h"


__attribute__((visibility("hidden")))
@interface SBStarkIconView : SBIconView {
	BOOL _focused;
}
@property(readonly, assign, nonatomic) BOOL focused;
+(float)_labelHeight;
+(CGSize)maxLabelSize;
+(CGRect)_rectForLayoutMetric:(int)layoutMetric;
+(CGSize)defaultIconSize;
+(UIEdgeInsets)iconImagePaddingInsets;
+(BOOL)canShowLabelAccessoryView;
+(int)_defaultIconFormat;
-(CGRect)_frameForLabel;
-(void)prepareForReuse;
-(id)_labelImageParameters;
-(void)setFocused:(BOOL)focused animated:(BOOL)animated;
-(void)setFocused:(BOOL)focused;
-(void)dealloc;
@end


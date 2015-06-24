/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAppSwitcherPeopleButtonAndLabelView.h"

@class SBAppSwitcherPeopleContactAction;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleContactActionView : SBAppSwitcherPeopleButtonAndLabelView {
	SBAppSwitcherPeopleContactAction* _action;
}
@property(retain, nonatomic) SBAppSwitcherPeopleContactAction* action;
+(void)warmContactActionImages;
+(BOOL)_centerImageVerticallyForLayout;
+(float)_layoutLabelFontSizeCompact:(BOOL)compact;
+(float)_layoutLabelVerticalPaddingCompact:(BOOL)compact;
+(CGSize)preferredLayoutSizeForMonogramSize:(float)monogramSize compact:(BOOL)compact forAction:(id)action;
+(CGSize)preferredLayoutSizeForMonogramSize:(float)monogramSize compact:(BOOL)compact;
-(id)_legibilityImageForImageNamed:(id)imageNamed;
-(id)_mappedImageNamed:(id)named renderingMode:(int)mode;
-(float)_strengthForLegibilityStyle:(int)legibilityStyle;
-(CGSize)_maxLabelLayoutSize;
@end


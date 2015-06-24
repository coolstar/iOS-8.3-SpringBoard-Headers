/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class _UILegibilitySettings, NSString, SBIconLabelImageParameters, UIView, UIImage, SBWallpaperEffectView, UIImageView, SBIconLabelView;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherPeopleButtonAndLabelView : XXUnknownSuperclass <UIGestureRecognizerDelegate> {
	SBIconLabelView* _titleLabel;
	SBWallpaperEffectView* _wallpaperEffectView;
	UIView* _wallpaperEffectBackingView;
	UIImageView* _pictureImageView;
	UIImageView* _legibilityImageView;
	UIEdgeInsets _mostlyInsideEdgeInsets;
	SBIconLabelImageParameters* _lastDrawnLabelParameters;
	unsigned _imageRenderingMode;
	BOOL _highlighted;
	BOOL _compact;
	NSString* _title;
	UIImage* _image;
	UIImage* _legibilityImage;
	float _monogramSize;
	_UILegibilitySettings* _legibilitySettings;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) _UILegibilitySettings* legibilitySettings;
@property(assign, nonatomic) float monogramSize;
@property(assign, nonatomic) BOOL compact;
@property(retain, nonatomic) UIImage* legibilityImage;
@property(assign, nonatomic) unsigned imageRenderingMode;
@property(retain, nonatomic) UIImage* image;
@property(copy, nonatomic) NSString* title;
+(CGSize)preferredLayoutSizeForMonogramSize:(float)monogramSize compact:(BOOL)compact;
+(BOOL)_centerImageVerticallyForLayout;
+(float)_layoutLabelFontSizeCompact:(BOOL)compact;
+(float)_layoutLabelMaxHeightCompact:(BOOL)compact;
+(float)_layoutLabelVerticalPaddingCompact:(BOOL)compact;
-(void)_updateWallpaperViewLegibilitySettings;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(void)_setHighlighted:(BOOL)highlighted;
-(BOOL)_highlighted;
-(void)_handlePressGesture:(id)gesture;
-(void)_updateTextLabelIfNecessaryHighlighted:(BOOL)highlighted;
-(id)_labelImageParameters:(BOOL)parameters;
-(CGSize)_maxLabelLayoutSize;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame forMonogramSize:(float)monogramSize compact:(BOOL)compact;
-(id)initWithFrame:(CGRect)frame;
@end


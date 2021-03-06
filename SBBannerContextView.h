/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBVibrantBannerView.h"
#import "SBUIBannerView.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBBannerViewCallbackManager, _UIBackdropView, SBUIBannerContext, UIView, UIImage, SBNotificationSeparatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface SBBannerContextView : XXUnknownSuperclass <SBUIBannerView, SBVibrantBannerView> {
	_UIBackdropView* _backdropView;
	UIImageView* _backgroundImageView;
	UIView* _contentContainerView;
	UIView<SBUIBannerView>* _contentView;
	UIView* _accessoryView;
	UIView* _pullDownView;
	UIView* _pullDownContainerView;
	UIView* _secondaryContentView;
	SBNotificationSeparatorView* _separatorView;
	SBUIBannerContext* _context;
	SBBannerViewCallbackManager* _callbacks;
	SBBannerViewCallbackManager* _wrapperCallbacks;
	BOOL _isDismissing;
	CGSize _grabberSize;
	UIView* _grabberView;
	BOOL _hidesGrabberOnPullDown;
	float _minimumHeight;
	struct {
		unsigned deactivateDismissed : 1;
		unsigned newWindow : 1;
	} _contentViewFlags;
	BOOL _grabberVisible;
	BOOL _separatorVisible;
	float _maximumHeight;
	float _pullDownViewHeight;
	float _pullDownBottomOverhangHeight;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) UIView* secondaryContentView;
@property(retain, nonatomic) UIView* accessoryView;
@property(assign, nonatomic) float pullDownBottomOverhangHeight;
@property(assign, nonatomic) float pullDownViewHeight;
@property(retain, nonatomic) UIView* pullDownView;
@property(assign, nonatomic) BOOL separatorVisible;
@property(assign, nonatomic) BOOL grabberVisible;
@property(assign, nonatomic) float maximumHeight;
@property(readonly, assign, nonatomic, getter=isDismissing) BOOL dismissing;
@property(retain, nonatomic) UIImage* backgroundImage;
@property(readonly, retain, nonatomic) _UIBackdropView* backdrop;
+(id)defaultColorForElement:(int)element;
+(id)_defaultButtonTextColor;
+(id)_defaultButtonColor;
+(id)_defaultGrabberColor;
-(float)_grabberAlpha;
-(id)_newGrabberView:(BOOL)view;
-(void)_setGrabberColor:(id)color;
-(id)_grabberColor;
-(BOOL)shouldBorrowScreen;
-(id)bannerContext;
-(CGSize)_contentSizeThatFits:(CGSize)fits;
-(CGRect)_centeredBoundsForRect:(CGRect)rect;
-(CGRect)_centeredBounds;
-(void)_layoutGrabber;
-(void)_layoutPullDownContainerView;
-(void)_layoutAccessoryView;
-(void)_updateContentAlpha;
-(void)_layoutSeparatorView;
-(void)_layoutContentView;
-(void)_layoutContentContainerView;
-(void)_layoutBackdropView;
-(void)_layoutBackgroundView;
-(void)layoutSubviews;
-(BOOL)_canPullDown;
-(float)_pullDownContentAlpha;
-(void)setColor:(id)color forElement:(int)element;
-(id)colorForElement:(int)element;
-(id)_vibrantContentView;
-(id)defaultColorForElement:(int)element;
-(void)noteDidDismissWithReason:(int)note;
-(void)noteWillDismissWithReason:(int)note;
-(void)noteDidAppear;
-(void)noteWillAppear;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setBannerContext:(id)context withReplaceReason:(int)replaceReason;
-(float)minimumHeight;
-(float)percentPulledDown;
-(BOOL)isPulledDown;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


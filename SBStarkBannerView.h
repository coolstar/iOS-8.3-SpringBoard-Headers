/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkBannerItemObserver.h"
#import "SBUIBannerView.h"
#import "SBDateLabelDelegate.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBUIBannerContext, SBStarkBannerViewButton, UIImageView, UILabel, SBStarkBannerItem;
@protocol SBBulletinDateLabel;

__attribute__((visibility("hidden")))
@interface SBStarkBannerView : XXUnknownSuperclass <SBStarkBannerItemObserver, SBDateLabelDelegate, SBUIBannerView> {
	SBUIBannerContext* _context;
	SBStarkBannerItem* _bannerItem;
	UIImageView* _categoryImageView;
	UILabel* _titleLabel;
	float _titleAscender;
	UILabel* _subTitleLabel;
	float _subTitleAscender;
	SBStarkBannerViewButton* _okButton;
	SBStarkBannerViewButton* _actionButton;
	UIEdgeInsets _contentInsets;
	UILabel<SBBulletinDateLabel>* _relevanceDateLabel;
	unsigned _interactionAffordances;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)dateLabelDidChange:(id)dateLabel;
-(void)starkBannerItemDidReloadDisplayProperties:(id)starkBannerItem;
-(BOOL)shouldBorrowScreen;
-(id)bannerContext;
-(void)_selectControl;
-(BOOL)canBecomeFirstResponder;
-(BOOL)_hasKnob;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)_layoutForButton:(id)button contentFrame:(CGRect)frame;
-(BOOL)_shouldShowOKButton;
-(void)_setRelevanceDate:(id)date;
-(id)_defaultRelevanceDateFont;
-(id)_titleFont;
-(BOOL)_hasSubtitle;
-(UIEdgeInsets)_contentInsetsForActionType:(int)actionType;
-(UIEdgeInsets)_categoryImageInsets;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithContext:(id)context;
@end


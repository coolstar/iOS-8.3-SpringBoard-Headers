/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBUIBannerView.h"
#import "SBCollectionViewCell.h"
#import "SpringBoard-Structs.h"

@class NSString, SBBannerContextView, UIView;

__attribute__((visibility("hidden")))
@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView> {
	SBBannerContextView* _contextView;
	UIView* _darkeningOverlayView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(BOOL)shouldBorrowScreen;
-(id)bannerContext;
-(void)prepareForReuse;
-(void)noteDidDismiss;
-(void)noteWillDismissWithReason:(int)note;
-(void)noteDidAppear;
-(void)noteWillAppear;
-(void)setBannerContext:(id)context;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


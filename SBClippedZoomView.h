/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBZoomView.h"
#import "SpringBoard-Structs.h"

@class UIView, SBFullscreenZoomView;

__attribute__((visibility("hidden")))
@interface SBClippedZoomView : SBZoomView {
	SBFullscreenZoomView* _fullscreenZoomViewToClip;
	UIView* _clippingView;
}
-(void)dealloc;
-(id)initWithClippingFrame:(CGRect)clippingFrame fullscreenZoomView:(id)view;
@end


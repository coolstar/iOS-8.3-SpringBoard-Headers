/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBLockOverlayView.h"
#import "SpringBoard-Structs.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface SBLockScreenTemperatureWarningView : SBLockOverlayView {
	UIImageView* _warningIconView;
}
-(void)layoutSubviews;
-(float)_iconYPosition;
-(float)_subtitleBaseline;
-(float)_titleBaseline;
-(id)_subtitleFont;
-(id)_titleFont;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


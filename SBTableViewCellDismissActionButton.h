/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBNotificationSeparatorView, UIImageView;

__attribute__((visibility("hidden")))
@interface SBTableViewCellDismissActionButton : XXUnknownSuperclass {
	UIImageView* _dismissImageView;
	SBNotificationSeparatorView* _topSeparatorView;
	SBNotificationSeparatorView* _bottomSeparatorView;
	BOOL _shouldUseNarrowWidth;
	BOOL _drawsTopSeparator;
	BOOL _drawsBottomSeparator;
	Class _separatorClass;
}
@property(assign, nonatomic) BOOL drawsBottomSeparator;
@property(assign, nonatomic) BOOL drawsTopSeparator;
@property(retain, nonatomic) Class separatorClass;
@property(assign, nonatomic) BOOL shouldUseNarrowWidth;
-(void)_updateSeparator:(id*)separator withVisibility:(BOOL)visibility;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSearchParsecCell.h"

@class UITextView;

__attribute__((visibility("hidden")))
@interface SBSearchParseciTunesCell : SBSearchParsecCell {
	UITextView* _descriptionTextView;
}
+(id)ratingImageForRating:(float)rating;
+(BOOL)supportsSection:(id)section result:(id)result;
-(void)updateWithSection:(id)section result:(id)result traitCollection:(id)collection;
-(id)subtitleLabel;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end

/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "SpringBoard-Structs.h"


@protocol SBAppSwitcherPeopleScrollViewDelegate <UIScrollViewDelegate>
-(id)peopleScrollView:(id)view placeholderStringForEmptySection:(unsigned)emptySection;
-(id)peopleScrollView:(id)view titleForSection:(unsigned)section;
-(CGSize)peopleScrollView:(id)view sizeForItem:(id)item expanded:(BOOL)expanded;
-(CGSize)peopleScrollView:(id)view sizeForPlaceholderForSection:(int)section;
-(id)peopleScrollView:(id)view viewForItem:(id)item;
-(id)peopleScrollView:(id)view itemAtIndexPath:(id)indexPath;
-(int)peopleScrollView:(id)view numberOfItemsInSection:(int)section;
-(int)numberOfSectionsInPeopleScrollView:(id)peopleScrollView;
@end


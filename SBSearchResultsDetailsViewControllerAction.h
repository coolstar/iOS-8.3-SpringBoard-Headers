/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBSearchResultsViewControllerAction.h"
#import "SBSearchResultDetailsViewControllerDelegate.h"

@class NSString, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface SBSearchResultsDetailsViewControllerAction : SBSearchResultsViewControllerAction <SBSearchResultDetailsViewControllerDelegate> {
	NSLayoutConstraint* _leftMargin;
	NSLayoutConstraint* _rightMargin;
	NSLayoutConstraint* _topMargin;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(Class)viewControllerClass;
-(void)dealloc;
-(void)updateConstraintConstants;
-(void)cancel:(id)cancel;
-(void)cancelAnimated:(BOOL)animated withCompletionBlock:(id)completionBlock;
-(void)searchResultDetailsViewController:(id)controller openURLs:(id)urls fromCardType:(id)cardType;
-(id)performWithCompletionBlock:(id)completionBlock;
@end


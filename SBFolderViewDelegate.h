/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBFolderViewDelegate <NSObject>
-(void)folderViewShouldBeginEditing:(id)folderView;
-(void)folderViewShouldClose:(id)folderView;
-(void)folderViewDidEndScrolling:(id)folderView;
-(void)folderViewWillBeginScrolling:(id)folderView;
-(void)folderView:(id)view currentPageIndexDidChange:(int)currentPageIndex;
-(Class)iconListViewClassForFolderView:(id)folderView;
@optional
-(void)folderViewDidReceiveCancelReachabilityAction:(id)folderView;
@end


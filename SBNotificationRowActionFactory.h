/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBNotificationRowActionFactory : XXUnknownSuperclass {
	BOOL _shouldUseNarrowWidthForLonelyDismissAction;
	BOOL _shouldUseExteriorDismissActionSeparators;
	Class _separatorClass;
}
@property(assign, nonatomic) BOOL shouldUseExteriorDismissActionSeparators;
@property(assign, nonatomic) BOOL shouldUseNarrowWidthForLonelyDismissAction;
@property(retain, nonatomic) Class separatorClass;
+(id)notificationCenterRowActionFactory;
+(id)lockScreenRowActionFactory;
-(Class)_actionButtonClassForAppearance:(id)appearance;
-(id)_dismissActionForBulletin:(id)bulletin shouldUseNarrowWidth:(BOOL)width isFirst:(BOOL)first isLast:(BOOL)last handler:(id)handler;
-(id)_backgroundColorForActionStyle:(int)actionStyle;
-(BOOL)_isCustomAppearance:(id)appearance;
-(unsigned)_tableViewStyleForBulletinActionStyle:(int)bulletinActionStyle;
-(int)_actionButtonStyleForAppearance:(id)appearance primaryActionExists:(BOOL)exists;
-(id)_rowActionWithBBAction:(id)bbaction button:(id)button handler:(id)handler;
-(id)_rowActionWithBBAction:(id)bbaction bulletinActionStyle:(int)style bulletinContext:(id)context handler:(id)handler;
-(void)_updateSeparatorsForDismissButton:(id)dismissButton isFirst:(BOOL)first isLast:(BOOL)last;
-(id)rowActionsForAlertItem:(id)alertItem isFirst:(BOOL)first isLast:(BOOL)last handler:(id)handler;
-(id)rowActionsForBulletin:(id)bulletin isFirst:(BOOL)first isLast:(BOOL)last handler:(id)handler;
-(BOOL)shouldSuppressSupplementaryActionsForPrivacy:(id)privacy;
-(void)dealloc;
@end


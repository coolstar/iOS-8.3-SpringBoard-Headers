/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBFolder.h"


__attribute__((visibility("hidden")))
@interface SBNewsstandFolder : SBFolder {
}
+(BOOL)isNewsstandFolderClass;
-(id)nodeIdentifier;
-(BOOL)isNewsstandFolder;
-(void)setDisplayName:(id)name;
-(BOOL)canAddIcon;
-(BOOL)canEditDisplayName;
-(BOOL)canRemoveIcons;
-(BOOL)shouldRemoveWhenEmpty;
-(Class)listModelClass;
-(void)setIsOpen:(BOOL)open;
-(id)icon;
-(id)initWithMaxListCount:(unsigned)maxListCount maxIconCountInLists:(unsigned)lists;
@end


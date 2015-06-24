/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBIconStateUnarchiveContext <NSObject>
-(void)_noteNodeIdentifierWasUnarchived:(id)unarchived;
-(BOOL)_isNodeIdentifierAlreadyUnarchived:(id)unarchived;
-(void)_noteSignificantDeviation;
-(void)_noteRepresentationIsCorrupted;
-(int)_currentParseDepth;
-(void)_noteExitedNode;
-(void)_noteEnteredNode;
-(id)_popFolder;
-(id)_currentFolder;
-(void)_pushFolder:(id)folder;
-(id)_iconSource;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, BSAuditToken;
@protocol SBWidgetViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBWidgetViewController : XXUnknownSuperclass {
	BOOL _hasContent;
	int _requestState;
	BOOL _implementsPerformUpdate;
	NSString* _appBundleID;
	NSString* _widgetIdentifier;
	BSAuditToken* _auditToken;
	id<SBWidgetViewControllerDelegate> _delegate;
}
@property(readonly, assign, nonatomic) BOOL implementsPerformUpdate;
@property(readonly, assign, nonatomic, getter=isInternal) BOOL internal;
@property(assign, nonatomic) BOOL hasContent;
@property(assign, nonatomic) id<SBWidgetViewControllerDelegate> delegate;
@property(readonly, assign, nonatomic) BSAuditToken* auditToken;
@property(copy, nonatomic) NSString* appBundleID;
@property(readonly, assign, nonatomic) NSString* widgetIdentifier;
@property(assign, nonatomic) int requestState;
+(id)displayNameForWidgetWithExtension:(id)extension containerBundleIdentifier:(id)identifier;
+(id)requestViewController:(id)controller context:(id)context handler:(id)handler;
+(id)_requestLocalViewControllerOfClass:(Class)aClass context:(id)context handler:(id)handler;
+(id)widgetViewControllerWithIdentifier:(id)identifier bundlePath:(id)path;
-(void)_disconnectRemoteViewControllerImmediatelyWithCompletionHandler:(id)completionHandler;
-(void)disconnectRemoteViewControllerWithCompletionHandler:(id)completionHandler;
-(void)connectRemoteViewControllerWithCompletionHandler:(id)completionHandler;
-(void)insertSnapshotWithCompletionHandler:(id)completionHandler;
-(void)requestInsertionOfRemoteViewWithCompletionHandler:(id)completionHandler;
-(void)invalidateCachedSnapshotWithCompletionHandler:(id)completionHandler;
-(void)validateSnapshotViewForActiveLayoutMode;
-(void)captureSnapshotWithCompletionHandler:(id)completionHandler;
-(id)_cancelTouches;
-(void)performUpdateWithCompletionHandler:(id)completionHandler;
-(void)hostDidDismiss;
-(void)hostWillDismiss;
-(void)hostDidPresent;
-(void)hostWillPresent;
-(void)updateContentWidth:(float)width;
-(void)_requestLaunchOfURL:(id)url;
-(void)_requestPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
-(void)requestPreferredViewHeightWithHandler:(id)handler;
-(void)dealloc;
-(id)initWithWidgetIdentifier:(id)widgetIdentifier bundlePath:(id)path;
@end


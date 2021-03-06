/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUI/IntentsUI-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_INUIRemoteViewControllerHosting.h>
#import <libobjc.A.dylib/INUIExtensionHostContextDelegate.h>

@protocol INUIRemoteViewControllerDelegate, NSCopying;
@class INUIExtensionRequestInfo, INUIExtensionViewControllerConfiguration, _INUIExtensionHostContext, NSExtension, NSString;

@interface INUIRemoteViewController : _UIRemoteViewController <_INUIRemoteViewControllerHosting, INUIExtensionHostContextDelegate> {

	BOOL _needsStateUpdate;
	INUIExtensionRequestInfo* _requestInfo;
	id<INUIRemoteViewControllerDelegate> _delegate;
	INUIExtensionViewControllerConfiguration* _configuration;
	_INUIExtensionHostContext* _extensionHostContext;
	NSExtension* _activeExtension;
	id<NSCopying> _currentRequestIdentifier;
	CGSize _preferredContentSize;

}

@property (nonatomic,retain) _INUIExtensionHostContext * extensionHostContext;                          //@synthesize extensionHostContext=_extensionHostContext - In the implementation block
@property (nonatomic,retain) NSExtension * activeExtension;                                             //@synthesize activeExtension=_activeExtension - In the implementation block
@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;                                    //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (setter=_setRequestInfo:,nonatomic,copy) INUIExtensionRequestInfo * requestInfo;              //@synthesize requestInfo=_requestInfo - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                               //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (nonatomic,copy) INUIExtensionViewControllerConfiguration * configuration;                    //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<INUIRemoteViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL needsStateUpdate;                                                     //@synthesize needsStateUpdate=_needsStateUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_requestRemoteViewControllerWithRequestInfo:(id)arg1 delegate:(id)arg2 reply:(/*^block*/id)arg3 ;
+(void)_attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(void)requestRemoteViewControllerWithRequestInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
+(void)requestRemoteViewControllerForInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(void)attemptToConnectToRemoteViewControllerForRemainingExtensions:(id)arg1 delegate:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(void)_requestRemoteViewControllerForSnippetExtensionInteraction:(id)arg1 delegate:(id)arg2 connectionHandler:(/*^block*/id)arg3 ;
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)currentRequestIdentifier;
-(INUIExtensionRequestInfo *)requestInfo;
-(void)serviceViewControllerDesiresConstrainedSize:(CGSize)arg1 ;
-(void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 interactiveBehavior:(unsigned long long)arg3 context:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)extensionHostContext:(id)arg1 wantsToHandleIntent:(id)arg2 ;
-(void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateExtensionContextStateWithCompletion:(/*^block*/id)arg1 ;
-(id)_errorHandlingServiceViewControllerProxy;
-(void)_setRequestInfo:(id)arg1 ;
-(void)setActiveExtension:(NSExtension *)arg1 ;
-(void)setExtensionHostContext:(_INUIExtensionHostContext *)arg1 ;
-(_INUIExtensionHostContext *)extensionHostContext;
-(void)configureForParameters:(id)arg1 ofInteraction:(id)arg2 context:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(NSExtension *)activeExtension;
-(void)setIdealConfiguration:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setNeedsStateUpdate:(BOOL)arg1 ;
-(void)requestCancellation;
-(void)_queryRepresentedPropertiesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)needsStateUpdate;
-(void)configureWithInteraction:(id)arg1 context:(unsigned long long)arg2 errorHandlingCompletion:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<INUIRemoteViewControllerDelegate>)arg1 ;
-(id<INUIRemoteViewControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(INUIExtensionViewControllerConfiguration *)configuration;
-(void)setConfiguration:(INUIExtensionViewControllerConfiguration *)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)disconnect;
@end


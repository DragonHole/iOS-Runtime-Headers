/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXLayoutCoordinatorDelegate.h>
#import <libobjc.A.dylib/SXPresentationAttributesObserver.h>
#import <libobjc.A.dylib/SXSubscriptionStatusObserving.h>
#import <libobjc.A.dylib/SXDebugLayoutOptionsObserving.h>
#import <libobjc.A.dylib/SXFormatInteractor.h>

@protocol SXFormatInteractor <NSObject>
@property (assign,nonatomic,__weak) id<SXFormatInteractorDelegate> delegate; 
@required
-(void)updateWithPresentationEnvironment:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<SXFormatInteractorDelegate>)delegate;

@end


@protocol SXFormatInteractorDelegate, SXLayoutCoordinator, SXLayoutOptionsFactory, SXPresentationAttributesProvider, SXSubscriptionStatusProviding, SXPresentationEnvironment, SXDebugLayoutOptionsProviding;
@class NSString;

@interface SXFormatInteractor : NSObject <SXLayoutCoordinatorDelegate, SXPresentationAttributesObserver, SXSubscriptionStatusObserving, SXDebugLayoutOptionsObserving, SXFormatInteractor> {

	BOOL _requestedContentHiding;
	id<SXFormatInteractorDelegate> _delegate;
	id<SXLayoutCoordinator> _layoutCoordinator;
	id<SXLayoutOptionsFactory> _layoutOptionsFactory;
	id<SXPresentationAttributesProvider> _presentationAttributesProvider;
	id<SXSubscriptionStatusProviding> _subscriptionStatusProvider;
	id<SXPresentationEnvironment> _presentationEnvironment;
	id<SXDebugLayoutOptionsProviding> _debugLayoutOptionsProvider;

}

@property (nonatomic,readonly) id<SXLayoutCoordinator> layoutCoordinator;                                        //@synthesize layoutCoordinator=_layoutCoordinator - In the implementation block
@property (nonatomic,readonly) id<SXLayoutOptionsFactory> layoutOptionsFactory;                                  //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;              //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (nonatomic,readonly) id<SXSubscriptionStatusProviding> subscriptionStatusProvider;                     //@synthesize subscriptionStatusProvider=_subscriptionStatusProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SXPresentationEnvironment> presentationEnvironment;                       //@synthesize presentationEnvironment=_presentationEnvironment - In the implementation block
@property (nonatomic,readonly) id<SXDebugLayoutOptionsProviding> debugLayoutOptionsProvider;                     //@synthesize debugLayoutOptionsProvider=_debugLayoutOptionsProvider - In the implementation block
@property (assign,nonatomic) BOOL requestedContentHiding;                                                        //@synthesize requestedContentHiding=_requestedContentHiding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXFormatInteractorDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
-(id<SXLayoutCoordinator>)layoutCoordinator;
-(void)updateWithPresentationEnvironment:(id)arg1 ;
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
-(id<SXLayoutOptionsFactory>)layoutOptionsFactory;
-(void)debugLayoutOptionsDidChange:(id)arg1 ;
-(id)initWithLayoutCoordinator:(id)arg1 layoutOptionsFactory:(id)arg2 presentationAttributesProvider:(id)arg3 subscriptionStatusProvider:(id)arg4 debugLayoutOptionsProvider:(id)arg5 ;
-(id<SXDebugLayoutOptionsProviding>)debugLayoutOptionsProvider;
-(id<SXSubscriptionStatusProviding>)subscriptionStatusProvider;
-(BOOL)requestedContentHiding;
-(void)setRequestedContentHiding:(BOOL)arg1 ;
-(id<SXPresentationEnvironment>)presentationEnvironment;
-(void)layoutCoordinator:(id)arg1 willLayoutWithParameters:(id)arg2 ;
-(void)layoutCoordinator:(id)arg1 cancelledLayoutWithOptions:(id)arg2 ;
-(void)layoutCoordinator:(id)arg1 willIntegrateBlueprint:(id)arg2 ;
-(void)layoutCoordinator:(id)arg1 didIntegrateBlueprint:(id)arg2 ;
-(void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2 ;
-(void)bundleSubscriptionStatusDidChangeFromStatus:(long long)arg1 ;
-(void)channelSubscriptionStatusDidChangeFromStatus:(long long)arg1 ;
-(void)setPresentationEnvironment:(id<SXPresentationEnvironment>)arg1 ;
-(void)setDelegate:(id<SXFormatInteractorDelegate>)arg1 ;
-(id<SXFormatInteractorDelegate>)delegate;
@end


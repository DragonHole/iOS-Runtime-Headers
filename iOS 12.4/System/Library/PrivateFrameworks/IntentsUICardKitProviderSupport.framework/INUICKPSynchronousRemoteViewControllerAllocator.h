/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/INUICKPInterfaceSectionOrganizing.h>
#import <libobjc.A.dylib/INUICKPSynchronousRemoteViewControllerDelegate.h>
#import <libobjc.A.dylib/INUICKPViewControllerAllocating.h>

@protocol INUICKPViewControllerAllocatingDelegate;
@class NSArray, NSDictionary, NSMutableArray, INInteraction, NSMutableSet, NSMutableDictionary, NSString;

@interface INUICKPSynchronousRemoteViewControllerAllocator : NSObject <INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate, INUICKPViewControllerAllocating> {

	Class _synchronousRemoteViewControllerClass;
	BOOL _requiresUserConsent;
	id<INUICKPViewControllerAllocatingDelegate> delegate;
	NSMutableArray* _mutableSynchronousRemoteViewControllers;
	INInteraction* _interaction;
	NSMutableArray* _finalInterfaceSections;
	NSMutableSet* _handledParameters;
	NSMutableDictionary* _mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
	NSMutableArray* _mutableRedundantInterfaceSections;

}

@property (nonatomic,readonly) NSMutableArray * mutableSynchronousRemoteViewControllers;                                            //@synthesize mutableSynchronousRemoteViewControllers=_mutableSynchronousRemoteViewControllers - In the implementation block
@property (nonatomic,retain) INInteraction * interaction;                                                                           //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,readonly) NSMutableArray * finalInterfaceSections;                                                             //@synthesize finalInterfaceSections=_finalInterfaceSections - In the implementation block
@property (nonatomic,readonly) NSMutableSet * handledParameters;                                                                    //@synthesize handledParameters=_handledParameters - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutableSynchronousRemoteViewControllersByInitialInterfaceSection;              //@synthesize mutableSynchronousRemoteViewControllersByInitialInterfaceSection=_mutableSynchronousRemoteViewControllersByInitialInterfaceSection - In the implementation block
@property (nonatomic,readonly) NSMutableArray * mutableRedundantInterfaceSections;                                                  //@synthesize mutableRedundantInterfaceSections=_mutableRedundantInterfaceSections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL requiresUserConsent;                                                                              //@synthesize requiresUserConsent=_requiresUserConsent - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allocatedViewControllers; 
@property (nonatomic,copy,readonly) NSDictionary * viewControllersByInitialInterfaceSection; 
@property (nonatomic,copy,readonly) NSArray * redundantInterfaceSections; 
@property (assign,nonatomic,__weak) id<INUICKPViewControllerAllocatingDelegate> delegate; 
-(void)setRequiresUserConsent:(BOOL)arg1 ;
-(BOOL)requiresUserConsent;
-(double)boundingWidthForSynchronousRemoteViewController:(id)arg1 ;
-(id)organizedInterfaceSections;
-(NSArray *)redundantInterfaceSections;
-(void)setSynchronousRemoteViewControllerClass:(Class)arg1 ;
-(void)performAllocationsFromInteraction:(id)arg1 initialInterfaceSections:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSArray *)allocatedViewControllers;
-(NSDictionary *)viewControllersByInitialInterfaceSection;
-(void)_beginRecursivelyConnectingForInterfaceSectionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_recursivelyConnectForInterfaceSectionQueue:(id)arg1 recursionDepth:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_unhandledParametersForInterfaceSection:(id)arg1 ;
-(NSMutableArray *)mutableSynchronousRemoteViewControllers;
-(NSMutableSet *)handledParameters;
-(NSMutableArray *)finalInterfaceSections;
-(NSMutableDictionary *)mutableSynchronousRemoteViewControllersByInitialInterfaceSection;
-(NSMutableArray *)mutableRedundantInterfaceSections;
-(id)init;
-(void)setDelegate:(id<INUICKPViewControllerAllocatingDelegate>)arg1 ;
-(id<INUICKPViewControllerAllocatingDelegate>)delegate;
-(INInteraction *)interaction;
-(void)setInteraction:(INInteraction *)arg1 ;
@end


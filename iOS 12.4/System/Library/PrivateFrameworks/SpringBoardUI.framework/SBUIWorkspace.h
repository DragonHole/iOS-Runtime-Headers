/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSceneClientProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSString, FBSSerialQueue, NSObject, NSMutableDictionary, FBSceneClientProviderInvalidationAction, NSSet;

@interface SBUIWorkspace : NSObject <FBSceneClientProvider, BSDescriptionProviding> {

	BOOL _valid;
	NSString* _identifier;
	FBSSerialQueue* _clientQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _scenes;
	FBSceneClientProviderInvalidationAction* _invalidationAction;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * scenes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 ;
-(void)unregisterHost:(id)arg1 ;
-(NSSet *)scenes;
-(void)_performSynchronouslyOnMainThread:(/*^block*/id)arg1 ;
-(id)createSceneWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 ;
-(void)destroyScene:(id)arg1 ;
-(void)endTransaction;
-(void)beginTransaction;
-(void)_queue_invalidate;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(NSString *)identifier;
-(NSString *)description;
-(void)invalidate;
-(id)sceneWithIdentifier:(id)arg1 ;
@end

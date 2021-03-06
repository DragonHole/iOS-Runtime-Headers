/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface __NSHostExtraIvars : NSObject {

	NSString* thingToResolve;
	int resolveType;
	NSObject*<OS_dispatch_queue> resolveQueue;
	NSObject*<OS_dispatch_queue> cacheAccessQueue;
	NSObject*<OS_dispatch_queue> callbackQueue;
	BOOL startedResolving;

}

@property (nonatomic,retain) NSString * thingToResolve; 
@property (assign,nonatomic) int resolveType; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> resolveQueue; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> cacheAccessQueue; 
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue; 
@property (assign) BOOL startedResolving; 
-(NSObject*<OS_dispatch_queue>)resolveQueue;
-(int)resolveType;
-(void)setResolveType:(int)arg1 ;
-(NSString *)thingToResolve;
-(void)setThingToResolve:(NSString *)arg1 ;
-(BOOL)startedResolving;
-(void)setStartedResolving:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(NSObject*<OS_dispatch_queue>)cacheAccessQueue;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(void)cleanup;
@end


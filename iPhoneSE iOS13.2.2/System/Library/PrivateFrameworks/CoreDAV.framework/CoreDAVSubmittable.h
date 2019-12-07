/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol CoreDAVSubmittable <NSObject>
@property (nonatomic,copy) id completionBlock; 
@property (assign,nonatomic) id<CoreDAVTaskManager> taskManager; 
@property (assign,nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider; 
@property (nonatomic,readonly) NSError * error; 
@property (assign,nonatomic) double timeoutInterval; 
@required
-(NSError *)error;
-(id)completionBlock;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(void)setTimeoutInterval:(double)arg1;
-(double)timeoutInterval;
-(id<CoreDAVTaskManager>)taskManager;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(void)setAccountInfoProvider:(id)arg1;
-(void)setTaskManager:(id)arg1;
-(void)finishEarlyWithError:(id)arg1;
-(void)submitWithTaskManager:(id)arg1;

@end

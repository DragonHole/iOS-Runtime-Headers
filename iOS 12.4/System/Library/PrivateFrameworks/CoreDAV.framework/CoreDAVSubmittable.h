/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(double)timeoutInterval;
-(void)submitWithTaskManager:(id)arg1;
-(void)finishEarlyWithError:(id)arg1;
-(id<CoreDAVTaskManager>)taskManager;
-(void)setTaskManager:(id)arg1;
-(void)setAccountInfoProvider:(id)arg1;
-(id<CoreDAVAccountInfoProvider>)accountInfoProvider;
-(void)setTimeoutInterval:(double)arg1;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(id)completionBlock;
-(NSError *)error;

@end


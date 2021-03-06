/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSURLSessionDataTask;

@interface PKObjectDownload : NSObject {

	NSMutableSet* _completionHandlers;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) NSMutableSet * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,copy) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
-(id)init;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSMutableSet *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableSet *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, CUTResult, CUTImplicitPromise;

@interface CUTPromise : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	BOOL _done;
	CUTResult* _result;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                  //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) BOOL done;                                           //@synthesize done=_done - In the implementation block
@property (nonatomic,retain) CUTResult * result;                                  //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) CUTImplicitPromise * implicitPromise; 
-(void)_fulfillWithResult:(id)arg1 ;
-(CUTImplicitPromise *)implicitPromise;
-(void)registerResultBlock:(/*^block*/id)arg1 ;
-(id)_initWithQueue:(id)arg1 ;
-(void)setResult:(CUTResult *)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(BOOL)done;
-(void)setDone:(BOOL)arg1 ;
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(CUTResult *)result;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end


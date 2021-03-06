/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSConditionLock, NSMutableArray;

@interface MFRequestQueue : NSObject {

	NSConditionLock* _condition;
	unsigned _waitingOutside;
	unsigned _waitingInside;
	NSMutableArray* _requests;

}

@property (nonatomic,retain) NSMutableArray * requests;              //@synthesize requests=_requests - In the implementation block
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)addRequests:(id)arg1 consumers:(id)arg2 ;
-(void)processRequests:(id)arg1 consumers:(id)arg2 ;
-(void)willAddRequests:(id)arg1 consumers:(id)arg2 ;
-(void)_processRequests:(id)arg1 consumers:(id)arg2 ;
-(void)processRequest:(id)arg1 consumer:(id)arg2 ;
-(void)addRequest:(id)arg1 consumer:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end


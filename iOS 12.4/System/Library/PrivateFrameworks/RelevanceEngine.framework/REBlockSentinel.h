/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface REBlockSentinel : NSObject {

	BOOL _completed;
	/*^block*/id _failureBlock;

}

@property (getter=isCompleted) BOOL completed;               //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) id failureBlock;              //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)failureBlock;
-(id)initWithFailureBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)complete;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
@end


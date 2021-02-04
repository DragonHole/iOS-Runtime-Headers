/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFUnfairLock;

@interface FCOnce : NSObject {

	BOOL _finished;
	NFUnfairLock* _lock;

}

@property (assign,nonatomic) BOOL finished;                    //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NFUnfairLock * lock;              //@synthesize lock=_lock - In the implementation block
-(BOOL)finished;
-(void)setFinished:(BOOL)arg1 ;
-(void)executeOnce:(/*^block*/id)arg1 ;
-(BOOL)hasBeenTriggered;
-(void)setLock:(NFUnfairLock *)arg1 ;
-(id)init;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(NFUnfairLock *)lock;
-(BOOL)trigger;
@end

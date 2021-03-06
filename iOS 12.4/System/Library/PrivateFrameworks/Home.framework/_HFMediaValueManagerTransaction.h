/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NAFuture, NSNumber;

@interface _HFMediaValueManagerTransaction : NSObject {

	NAFuture* _writeFuture;
	long long _playbackState;
	NSNumber* _transactionNumber;

}

@property (nonatomic,retain) NAFuture * writeFuture;                    //@synthesize writeFuture=_writeFuture - In the implementation block
@property (assign,nonatomic) long long playbackState;                   //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,retain) NSNumber * transactionNumber;              //@synthesize transactionNumber=_transactionNumber - In the implementation block
-(void)setTransactionNumber:(NSNumber *)arg1 ;
-(NSNumber *)transactionNumber;
-(NAFuture *)writeFuture;
-(void)setWriteFuture:(NAFuture *)arg1 ;
-(long long)playbackState;
-(void)setPlaybackState:(long long)arg1 ;
-(id)init;
-(id)description;
@end


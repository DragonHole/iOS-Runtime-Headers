/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface TVPAsyncPlayerDelegateOperation : NSObject {

	NSNumber* _identifier;
	/*^block*/id _block;

}

@property (nonatomic,readonly) NSNumber * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) id block;                               //@synthesize block=_block - In the implementation block
-(id)init;
-(NSNumber *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end


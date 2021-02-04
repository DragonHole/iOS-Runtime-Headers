/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface _MPStoreFollow : NSObject {

	NSNumber* _targetEntityID;
	long long _targetEntityType;

}

@property (nonatomic,retain) NSNumber * targetEntityID;               //@synthesize targetEntityID=_targetEntityID - In the implementation block
@property (assign,nonatomic) long long targetEntityType;              //@synthesize targetEntityType=_targetEntityType - In the implementation block
+(id)followWithPerson:(id)arg1 ;
+(id)followWithStoreDictionary:(id)arg1 ;
-(NSNumber *)targetEntityID;
-(void)setTargetEntityID:(NSNumber *)arg1 ;
-(void)setTargetEntityType:(long long)arg1 ;
-(long long)targetEntityType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

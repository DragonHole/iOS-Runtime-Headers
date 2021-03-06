/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NTKSyncSessionMetrics : NSObject {

	BOOL _isResetSync;
	BOOL _didSucceed;
	unsigned long long _changesSent;
	unsigned long long _bytesSent;

}

@property (assign,nonatomic) BOOL isResetSync;                            //@synthesize isResetSync=_isResetSync - In the implementation block
@property (assign,nonatomic) unsigned long long changesSent;              //@synthesize changesSent=_changesSent - In the implementation block
@property (assign,nonatomic) unsigned long long bytesSent;                //@synthesize bytesSent=_bytesSent - In the implementation block
@property (assign,nonatomic) BOOL didSucceed;                             //@synthesize didSucceed=_didSucceed - In the implementation block
-(void)setBytesSent:(unsigned long long)arg1 ;
-(unsigned long long)bytesSent;
-(BOOL)didSucceed;
-(void)setDidSucceed:(BOOL)arg1 ;
-(BOOL)isResetSync;
-(void)setIsResetSync:(BOOL)arg1 ;
-(unsigned long long)changesSent;
-(void)setChangesSent:(unsigned long long)arg1 ;
@end


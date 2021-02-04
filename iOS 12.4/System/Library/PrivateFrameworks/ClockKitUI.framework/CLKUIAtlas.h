/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLKUIAtlas : NSObject {

	Ai _instanceCount;
	NSString* _uuid;
	unsigned long long _status;
	unsigned long long _width;
	unsigned long long _height;

}

@property (assign,nonatomic) unsigned long long status;                //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) long long instanceCount; 
@property (nonatomic,readonly) NSString * uuid;                        //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;              //@synthesize height=_height - In the implementation block
-(long long)instanceCount;
-(id)initWithUuid:(id)arg1 ;
-(void)incrementInstanceCount;
-(void)decrementInstanceCount;
-(id)backing;
-(NSString *)uuid;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
@end

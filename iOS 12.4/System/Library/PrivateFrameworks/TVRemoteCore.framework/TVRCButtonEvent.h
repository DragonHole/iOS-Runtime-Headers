/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, TVRCButton;

@interface TVRCButtonEvent : NSObject <NSSecureCoding> {

	NSDate* _timestamp;
	TVRCButton* _button;
	long long _eventType;

}

@property (nonatomic,copy,readonly) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) TVRCButton * button;                  //@synthesize button=_button - In the implementation block
@property (nonatomic,readonly) long long eventType;                  //@synthesize eventType=_eventType - In the implementation block
+(id)buttonEventForButton:(id)arg1 eventType:(long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(long long)eventType;
-(id)_init;
-(TVRCButton *)button;
@end

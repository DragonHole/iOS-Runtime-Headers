/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
+(BOOL)supportsSecureCoding;
+(id)buttonEventForButton:(id)arg1 eventType:(long long)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSDate *)timestamp;
-(long long)eventType;
-(TVRCButton *)button;
@end


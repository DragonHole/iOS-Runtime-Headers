/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class THAButton;

@interface THAButtonEvent : NSObject {

	THAButton* _button;
	unsigned long long _state;
	double _timestamp;

}

@property (nonatomic,retain) THAButton * button;                    //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
-(id)serialize;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(THAButton *)button;
-(void)setButton:(THAButton *)arg1 ;
@end


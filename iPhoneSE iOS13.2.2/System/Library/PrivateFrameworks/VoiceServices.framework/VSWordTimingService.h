/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface VSWordTimingService : NSObject {

	NSDictionary* _wordTimings;

}

@property (nonatomic,retain) NSDictionary * wordTimings;              //@synthesize wordTimings=_wordTimings - In the implementation block
-(void)setWordTimings:(NSDictionary *)arg1 ;
-(NSDictionary *)wordTimings;
-(id)timingPlistForLanguage:(id)arg1 ;
-(id)timingInfosFrom:(id)arg1 withText:(id)arg2 ;
-(id)estimatedTTSWordTimingForText:(id)arg1 withLanguage:(id)arg2 withGender:(long long)arg3 ;
@end


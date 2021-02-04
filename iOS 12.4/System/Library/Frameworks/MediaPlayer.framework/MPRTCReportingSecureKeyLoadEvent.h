/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRTCReportingEvent.h>

@class NSError, NSString;

@interface MPRTCReportingSecureKeyLoadEvent : MPRTCReportingEvent {

	double _duration;
	NSError* _error;
	NSString* _siriSessionIdentifier;

}

@property (assign,nonatomic) double duration;                             //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSString * siriSessionIdentifier;              //@synthesize siriSessionIdentifier=_siriSessionIdentifier - In the implementation block
-(unsigned short)rtcReportingCategory;
-(unsigned short)rtcReportingType;
-(id)newRTCReportingPayloadDictionary;
-(NSString *)siriSessionIdentifier;
-(void)setSiriSessionIdentifier:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSNumberFormatter;

@interface RCDurationFormatter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _positionalParameterFormatStrings;
	NSNumberFormatter* _defaultFormatter;
	NSNumberFormatter* _nonPaddedHourFormatter;

}
+(id)sharedFormatter;
+(id)_localizedPositionalFormatStringForDurationFormattingStyle:(long long)arg1 ;
+(id)_localizedDateTimeFormatForDurationFormattingStyle:(long long)arg1 ;
+(id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1 ;
-(void)reloadLocalizedFormatStrings;
-(id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(long long)arg2 style:(long long)arg3 ;
-(id)_onQueueStringFromDuration:(double)arg1 style:(long long)arg2 ;
-(void)_onQueueReloadLocalizedFormatStrings;
-(id)_onQueuePositionalFormatStringForStyle:(long long)arg1 ;
-(id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned long long)arg2 style:(long long)arg3 ;
-(id)stringFromDuration:(double)arg1 style:(long long)arg2 ;
-(id)init;
-(void)dealloc;
@end


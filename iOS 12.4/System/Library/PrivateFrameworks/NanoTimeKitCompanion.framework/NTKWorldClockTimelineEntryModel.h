/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class WorldClockCity;

@interface NTKWorldClockTimelineEntryModel : NTKTimelineEntryModel {

	BOOL _showIdealizedTime;
	WorldClockCity* _city;

}

@property (nonatomic,retain) WorldClockCity * city;               //@synthesize city=_city - In the implementation block
@property (assign,nonatomic) BOOL showIdealizedTime;              //@synthesize showIdealizedTime=_showIdealizedTime - In the implementation block
+(id)_analogImageProvider;
-(WorldClockCity *)city;
-(void)setCity:(WorldClockCity *)arg1 ;
-(id)_newSmallModularTemplate;
-(id)_newLargeModularTemplate;
-(id)_newCircularSmallTemplate;
-(id)_newSmallFlatUtilityTemplate;
-(id)_newExtraLargeTemplate;
-(id)_newCircularMediumTemplate;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(void)setShowIdealizedTime:(BOOL)arg1 ;
-(id)_newSignatureBezelTemplate;
-(id)_newSignatureCircularTemplate;
-(id)_newLargeUtilityTemplate;
-(id)_signatureCorner;
-(id)_abbreviationTextProvider;
-(id)_timeAndAbbreviationTextProvider;
-(id)_timeTextProvider;
-(id)_cityNameTextProvider;
-(id)_timeAndDayOffsetTextProvider;
-(id)_differenceTextProvider;
-(id)_timeAndCityNameOffsetTextProvider;
-(id)_timeAndDifferenceOffsetTextProvider;
-(double)_timeZoneOffset;
-(BOOL)showIdealizedTime;
-(id)_timeCityNameTimeZoneOffsetTextProvider;
-(id)_timeZone;
-(id)_differenceTextProviderWithSize:(long long)arg1 andCaps:(BOOL)arg2 ;
-(id)_dayOffsetTextProvider;
-(id)init;
@end


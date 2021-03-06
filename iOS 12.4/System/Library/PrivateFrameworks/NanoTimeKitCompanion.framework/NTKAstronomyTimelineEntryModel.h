/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, CLLocation;

@interface NTKAstronomyTimelineEntryModel : NTKTimelineEntryModel {

	unsigned long long _vista;
	NSDate* _currentDate;
	CLLocation* _currentLocation;
	CLLocation* _anyLocation;

}

@property (nonatomic,readonly) unsigned long long vista;                  //@synthesize vista=_vista - In the implementation block
@property (nonatomic,readonly) NSDate * currentDate;                      //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,readonly) CLLocation * currentLocation;              //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) CLLocation * anyLocation;                  //@synthesize anyLocation=_anyLocation - In the implementation block
-(CLLocation *)currentLocation;
-(NSDate *)currentDate;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(CLLocation *)anyLocation;
-(id)initWithVista:(unsigned long long)arg1 entryDate:(id)arg2 currentDate:(id)arg3 currentLocation:(id)arg4 anyLocation:(id)arg5 ;
-(unsigned long long)vista;
@end


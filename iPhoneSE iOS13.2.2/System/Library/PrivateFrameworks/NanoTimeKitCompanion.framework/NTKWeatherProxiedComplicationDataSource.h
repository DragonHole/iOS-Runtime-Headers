/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKComplicationDataSource.h>

@interface NTKWeatherProxiedComplicationDataSource : NTKComplicationDataSource {

	id _proxy;

}

@property (nonatomic,retain) id proxy;              //@synthesize proxy=_proxy - In the implementation block
+(Class)proxyClass;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)pause;
-(void)resume;
-(void)setProxy:(id)arg1 ;
-(id)proxy;
-(void)becomeActive;
-(id)complicationApplicationIdentifier;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(void)becomeInactive;
-(id)currentSwitcherTemplate;
-(id)lockedTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineStartDateWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
@end


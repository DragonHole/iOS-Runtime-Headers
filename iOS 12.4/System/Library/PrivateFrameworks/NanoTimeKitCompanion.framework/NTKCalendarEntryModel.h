/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString, NSDate, NSURL, NSArray;

@interface NTKCalendarEntryModel : NTKTimelineEntryModel {

	BOOL _displayAsTomorrow;
	BOOL _displayAsConflicting;
	BOOL _displayAsFirstInDay;
	BOOL _overlappingDates;
	NSString* _identifier;
	NSDate* _eventStartDate;
	NSDate* _eventEndDate;
	NSString* _primaryEventTitle;
	NSString* _primaryEventLocation;
	NSString* _secondaryEventTitle;
	NSString* _primaryEventOrganizerName;
	unsigned long long _overlappingEventCount;
	unsigned long long _eventsInDayCount;
	NSURL* _launchURL;
	NSArray* _eventColors;

}

@property (nonatomic,retain) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDate * eventStartDate;                               //@synthesize eventStartDate=_eventStartDate - In the implementation block
@property (nonatomic,retain) NSDate * eventEndDate;                                 //@synthesize eventEndDate=_eventEndDate - In the implementation block
@property (nonatomic,retain) NSString * primaryEventTitle;                          //@synthesize primaryEventTitle=_primaryEventTitle - In the implementation block
@property (nonatomic,retain) NSString * primaryEventLocation;                       //@synthesize primaryEventLocation=_primaryEventLocation - In the implementation block
@property (nonatomic,retain) NSString * secondaryEventTitle;                        //@synthesize secondaryEventTitle=_secondaryEventTitle - In the implementation block
@property (nonatomic,retain) NSString * primaryEventOrganizerName;                  //@synthesize primaryEventOrganizerName=_primaryEventOrganizerName - In the implementation block
@property (assign,nonatomic) BOOL displayAsTomorrow;                                //@synthesize displayAsTomorrow=_displayAsTomorrow - In the implementation block
@property (assign,nonatomic) BOOL displayAsConflicting;                             //@synthesize displayAsConflicting=_displayAsConflicting - In the implementation block
@property (assign,nonatomic) BOOL displayAsFirstInDay;                              //@synthesize displayAsFirstInDay=_displayAsFirstInDay - In the implementation block
@property (assign,nonatomic) unsigned long long overlappingEventCount;              //@synthesize overlappingEventCount=_overlappingEventCount - In the implementation block
@property (assign,nonatomic) BOOL overlappingDates;                                 //@synthesize overlappingDates=_overlappingDates - In the implementation block
@property (assign,nonatomic) unsigned long long eventsInDayCount;                   //@synthesize eventsInDayCount=_eventsInDayCount - In the implementation block
@property (nonatomic,retain) NSURL * launchURL;                                     //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,retain) NSArray * eventColors;                                 //@synthesize eventColors=_eventColors - In the implementation block
+(id)lockedEntryForFamily:(long long)arg1 ;
+(id)loadingEntryForFamily:(long long)arg1 ;
+(id)largeModular:(id)arg1 ;
+(id)largeUtility:(id)arg1 ;
+(id)smallModular:(id)arg1 ;
+(id)smallUtility:(id)arg1 ;
+(id)circular:(id)arg1 isMedium:(BOOL)arg2 ;
+(id)extraLarge:(id)arg1 ;
+(id)signatureBezel:(id)arg1 ;
+(id)signatureCircular:(id)arg1 ;
+(id)signatureCorner:(id)arg1 ;
+(id)signatureRectangular:(id)arg1 ;
+(id)contentForLargeModular:(id)arg1 ;
+(id)_swapPlaceholderString:(id)arg1 withTimeStringForDate:(id)arg2 inString:(id)arg3 usingBaseFont:(id)arg4 smallCapsBaseFont:(id)arg5 timeZone:(id)arg6 options:(unsigned long long)arg7 ;
+(id)_modularSmallConflictImageProvider;
+(id)_modularSmallCalendarImageProvider;
+(id)_extraLargeConflictImageProvider;
+(id)_extraLargeCalendarImageProvider;
+(id)_signatureCircularCalendarProvider:(id)arg1 ;
+(id)_signatureCornerImageProvider;
+(id)contentForSignatureRectangular:(id)arg1 ;
+(id)_utilityCalendarImageProvider;
+(id)_entryForTemplateDescription:(id)arg1 family:(long long)arg2 ;
-(NSURL *)launchURL;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(void)setEventsInDayCount:(unsigned long long)arg1 ;
-(void)setOverlappingEventCount:(unsigned long long)arg1 ;
-(void)setEventColors:(NSArray *)arg1 ;
-(void)setPrimaryEventTitle:(NSString *)arg1 ;
-(void)setPrimaryEventLocation:(NSString *)arg1 ;
-(void)setEventStartDate:(NSDate *)arg1 ;
-(void)setEventEndDate:(NSDate *)arg1 ;
-(BOOL)displayAsConflicting;
-(void)setDisplayAsConflicting:(BOOL)arg1 ;
-(unsigned long long)overlappingEventCount;
-(BOOL)displayAsTomorrow;
-(BOOL)displayAsFirstInDay;
-(NSString *)primaryEventTitle;
-(NSDate *)eventStartDate;
-(NSDate *)eventEndDate;
-(NSString *)primaryEventLocation;
-(NSString *)primaryEventOrganizerName;
-(NSString *)secondaryEventTitle;
-(BOOL)overlappingDates;
-(NSArray *)eventColors;
-(void)setSecondaryEventTitle:(NSString *)arg1 ;
-(void)setPrimaryEventOrganizerName:(NSString *)arg1 ;
-(void)setDisplayAsTomorrow:(BOOL)arg1 ;
-(void)setDisplayAsFirstInDay:(BOOL)arg1 ;
-(void)setOverlappingDates:(BOOL)arg1 ;
-(unsigned long long)eventsInDayCount;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(NSString *)identifier;
-(id)description;
-(void)setIdentifier:(NSString *)arg1 ;
@end


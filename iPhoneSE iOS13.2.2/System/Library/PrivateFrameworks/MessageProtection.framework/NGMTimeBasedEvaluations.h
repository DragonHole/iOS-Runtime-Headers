/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface NGMTimeBasedEvaluations : NSObject {

	NSDate* _date;

}

@property (retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)sharedManager;
+(id)nowDate;
+(BOOL)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2 ;
+(BOOL)prekeyShouldBeRolled:(id)arg1 ;
+(BOOL)prekeyCanBeDeleted:(id)arg1 ;
+(id)oldestDateAllowedToSendTo;
+(double)timeIntervalAllowedForAction:(unsigned long long)arg1 ;
+(id)debugDescriptionForAction:(unsigned long long)arg1 ;
+(void)setNowDate:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

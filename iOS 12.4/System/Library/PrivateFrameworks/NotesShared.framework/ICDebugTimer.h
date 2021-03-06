/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface ICDebugTimer : NSObject {

	double _elapsedTime;
	NSDate* _startingDate;

}

@property (retain) NSDate * startingDate;              //@synthesize startingDate=_startingDate - In the implementation block
@property (assign) double elapsedTime;                 //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)debugTimerForClass:(Class)arg1 ;
+(void)enableTimersForClass:(Class)arg1 ;
-(NSDate *)startingDate;
-(void)setElapsedTime:(double)arg1 ;
-(void)setStartingDate:(NSDate *)arg1 ;
-(void)stop;
-(void)start;
-(void)resume;
-(double)elapsedTime;
-(void)pause;
@end

